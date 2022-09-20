# YahtzeeGame
Y2 AP Assignment Project C++




Assessment Brief: Advanced Programming
Module Leader: Michael Meredith
	Level: 5
Module Name: Advanced Programming
	Module Code: 55-508225

Assignment Title: Advanced Programming – Yahtzee Case Study

Individual Task
	Weighting: 50%	Magnitude: ~30 hours (notionally )
Submission date/time: 
25th November 2021 at 3pm
	Blackboard submission: Yes
Turnitin submission: No	Format: ZIP of Visual Studio Project
Planned feedback date: 
16th December 2021	Mode of feedback: Blackboard	In-module retrieval available:  Yes 

Module Learning Outcomes

•	Describe, identify and apply good-practice object-oriented principles and concepts in a modern programming language, such as C++, to implement object-oriented designs and encapsulate functionality associated with classic computer science algorithms and data-structures

•	Identify and apply appropriate facilities provided in standard libraries and design patterns in the development of an application, including event-based and reactive programming.

•	Identify and apply memory management principles and demonstrate the impact of resource allocation within a program


Assessment Brief 
This assessment is designed to allow you to demonstrate your fundamental programming skills in C/C++ using good object-oriented practice though the implementation of a basic Yahtzee  game and player management system (see the accompanying video demonstration of the application in operation).  It is important to read this document and understand the techniques and competencies you are being asked to demonstrate in parts of this application to ensure you meet the grading scheme set out in the Assessment Criteria section of this document (at the end).  Where no specific guidance is given, make your own decisions based on good practice coding.  
Consider and think about your implementation and perhaps undertake refinement passes, depending on your development strategy, to ensure your code is of good quality.  Do not focus purely on implementing the game in isolation of the guidelines; the assessment brief ensures there are suitable opportunities for you to demonstrate your understanding in key areas while also allowing you to demonstrate your creativity and thinking.  While this assessment specification does ask for specific techniques to be used in certain places, there is more left to you to think about the best way of tackling the problem.  
There is no single right solution, and this assessment is as much about you being able to deploy key programming concepts as it is about you being able to think about and problem solve your way through the creation of an application using your knowledge, thinking, experience and general programming skills.
Yahtzee Game
When the application starts, the program loads a list of existing players from disk into a Standard Template Library (STL) vector.  This information includes name, encrypted password, and highest score for each player.  Player’s game history should not be loaded at this stage and there may be zero players to load.  The password must be stored using some form of basic encryption  in the file (but held in memory unencrypted).  The rest of the player information can be stored plain text within the file.  Use C-Strings to store player name and passwords using your own heap memory management.  Player information should only be saved back to disk once the user closes the application via the Exit option.
The launch screen starts with player management / picker, as illustrated in Figure 1.  On this screen, the user can sort players in alphabetical order or by highest score.  Sorting must be done using a suitable STL algorithm(s), and the player information is redisplayed to reflect the update.  There is no automatic sorting when adding or removing players and they maintain their order unless the user chooses to sort the list using the menu options.
The user can add and/or remove players and choose a player to start the game from the player management / picker.  Player names must be unique within the application; duplicates are not allowed (case insensitive).   When a new player is added or one is removed, the required user interaction occurs, and the player management / picker screen is redisplayed with the updated player list.  Nothing is saved back to disk until the user exits the program by choosing the Exit item on the launch screen and all operations are done to data in memory up to that point.
 
Figure 1: Example of the player management / picker screen / menu

To start playing, the user enters the name of the player along with its password, which is validated before progressing.  If the name and password do not match, a suitable error is shown, and the user stays on the player management / picker menu.  When the name and password match, the player history is loaded from disk  and stored in memory, and the player information screen is shown, as illustrated in Figure 2.  The game history should be stored in memory using your own heap array that you resize as needed (i.e., do not use an STL vector for this and resize as needed within your application).  The game history must include total games played and total points accumulated (across all games played) along with a time-stamped scorecard for each game.
 
Figure 2: Example of the main player information screen
	
From the player information screen, the user can view their game history (see Figure 3 for an example), start a new game (see Figure 4 for an example), and return to the top-level player management / picker screen to choose another player or exit the application (Figure 1).  When the user returns to the launch screen, the player’s game history is written back to disk and released from heap memory.

 
Figure 3: Example of player history screen
Within the game itself, you can implement just the top-half of the Yahtzee score card if you wish (i.e., just the sum of 1s, 2s, 3s, 4s, 5s and 6s) as demonstrated in Figure 4.  Upon completing a game, the player is shown their final scorecard with their total, the player’s statistics are updated, and the scorecard is added to the player’s history in heap memory.  Saving this game to disk is not done at this state, and only once the user chooses to exit the player screen and return to the player management / picker screen.  The application returns to the player information screen (Figure 2) upon completing a game.  
 
Figure 4: Example of Yahtzee game (# dice outlines show dice held from previous throws before being scored)

General Tips and Comments
•	All loading from disk should be done using operator overloading (assisting encapsulation).  There are other sensible places that operator overloading can be use – think about where and deploy additional examples of operator overloading in your application
•	You are being asked to load data into memory and only write it back out at certain points to ensure you are successfully managing heap memory (as well as trying to help direct you towards a sensible control flow).  This will also need you to think about your class and data structures to effectively hold that information in memory – remember to use appropriate data types for variables, objects, and full encapsulation principles.
•	Ensure your application gives sensible feedback to the user and handles input errors gracefully, including recovery were possible (i.e. don’t just exit or crash when an error occurs).  You can sensibly limit allowed input characters to do this but remember to tell the user and give useful messages.
•	The amount of heap memory available should be your only limit on the number of players your application can remember along with their history, but don’t be wasteful with heap memory either
•	Consider other opportunities to deploy the STL beyond those explicitly stated in this document
•	Write good object-oriented code where algorithms that operate on data are put into the same class and data members have as restrictive access as possible.  A poor design is one where you have a class of data and just get and set methods and the operations on those bits of data is done outside of the class
•	Think about your code, use appropriate C/C++ constructs, and keep the implementation as simple as it allows – code that is unnecessarily complex is harder to maintain, debug, and likely inefficient
•	DO NOT USE ANY FORM OF RECURSION TO DEAL WITH THE MENU SYSTEM NAVIGATION – THIS WILL LEAD TO SPAGHETTI CALL STACKS – USE LOOPS AND METHODS TO STRUCTURE THIS BEHAVIOUR.  I have tried to help lead you down the right path with some of the constraints and behaviours I have asked for in this specification
