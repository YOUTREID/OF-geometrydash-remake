# Geometry Dash

Geometry dash is a game that intergrates music and arcade. Players tap the screen to control the cube to jump to avoid obstacle and clear
the level. In order to beat the game the player has to find the perfect time to jump. The beats in the music will match the beats in the 
song so the player can enjoy the game and the music at the same time. The game will require a decent amount of time to get used to since 
it does take reaction time to jump before the cube player controls gets hit by obstacle. The game will be an "insta-die". Meaning hitting
any spikes or walls will instantly end the current level and the player has to start again. The game will have an interface for players 
to choose the levels they want to play. The levels will be displayed with order in difficulty.

## Starting the project

I have learned how to use the music/video player built into the open frameworks. As well as inserting images/shapes into window and moving
it around. 

I have added ofxGui to help create the windows and user interfaces to make it easier to navigate the levels and all the settings.

Added features such as taking a screenshot and toggle between full screen and windowed. 

The home screen has been roughly completed with level selection as well as the "geometry jump" title. All of these are accomplished with 
openframework's built in features. 

## Main game mechanism

I was stuck on how to approach the game itself. There were no available "game engine" for open framework to make this 2d platform.
I had to think of a way myself to build the game. I just used images and moved them in the update() to simulate the player "moving".

The levels of the game will be stored in txt files as numbers. Each digit will represent a different type of obstacle. The level class will read in the file and draw the images onto the window.

The game switches between "home" state and "game" state by simplying erasing and redrawing everything in the application window.

## Last step

Collision detection is the last thing I need to do for this project in order for the game to be complete. Collision detection will be hard since I have to access data from other classes and check for collisions all the time.

Collision detection couldn't be achieved with the same technique as a 2d space shooter game. The way one cand o it in a 2d space shooter would be calculating the distance between the center of two objects and compare it to the dimensions of the two objects. That didn't work out for me because all the obscatles are lined by one by one. I had to check all the x-coordinates of the ofImages for collision. After the x-coordinates get close enough to the player object, the height of the same ofImage will be compared with the height of the player.

## Bug fixing

A minor bug that I encountered was that OF has some bugs when updating that my player object would jump higher than it is set to. So I used a counter to count how many ticks the system updates() before the cube reaches the max height.
