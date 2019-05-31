Project proposal
by Johnny Zhou

For my final project I will be doing my version of the popular game Geometry Dash.

![](https://github.com/uiuc-sp19-cs126/final-project-YOUTREID/blob/master/apps.509.9007199266420801.9dbdf6d6-d3db-4add-804e-a34b130dca87.png)

![](https://github.com/uiuc-sp19-cs126/final-project-YOUTREID/blob/master/maxresdefault.jpg)

# Geometry Dash

Geometry Dash is a 2d arcade game that has levels that correspond to awesome background music. The player will control a cube and jump
obstacle to reach and final destination and beat the level. The control of the game is rather simple since all the player needs to do is
to jump. And in some special levels the jump can be changed into different moves. The game will also have NCS (non-copyright sound) music
in the background to make the gameplay experience a lot better. 

# Game mechanism

In order to beat the game the player has to find the perfect time to jump. The beats in the music will match the beats in the song 
so the player can enjoy the game and the music at the same time. The game will require a decent amount of time to get used to since 
it does take reaction time to jump before the cube player controls gets hit by obstacle. The game will be an "insta-die". Meaning 
hitting any spikes or walls will instantly end the current level and the player has to start again. The game will have an interface for
players to choose the levels they want to play. The levels will be displayed with order in difficulty.

# Libraries and engines

Due to all the physics being used, I will be using the box2d physics engine made for openframework. I downloaded the folder from the
github link as an addon to the openframe work project. And the music will all come from the youtube channel "NoCopyrightSounds). After
I find the video with the rythm I want I would download it with the youtube to mp3 website that I found online. Open framework has a few 
options to play audio in the background. I will be using "ofSoundPlayer" to play the EDM of my choice.

#links

[Box 2D for OF](https://github.com/vanderlin/ofxBox2d)

[Music link](https://www.youtube.com/user/NoCopyrightSounds)

[Youtube to mp3](https://ytmp3.cc/)

# Update:

I will not be using box 2d since it doesn't necessarily provide enough functionality for my project for the amount of things I need to change for using the library. The library I will be using is the music/audio player library that is built in with OF.

