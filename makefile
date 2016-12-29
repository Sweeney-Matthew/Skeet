###############################################################
# Program:
#     Project 09, Skeet
# Author:
#     Matthew Sweeney
# Summary:
#     All bird types exist and bullets fire. Bullets destroy objects and award points appropriately. 
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main game
###############################################################
a.out: driver.o game.o uiInteract.o uiDraw.o point.o rifle.o velocity.o flyingObject.o bird.o bullet.o toughBird.o sacredBird.o asteroid.o
	g++ driver.o game.o uiInteract.o uiDraw.o point.o rifle.o velocity.o flyingObject.o bird.o bullet.o toughBird.o sacredBird.o asteroid.o $(LFLAGS)
	tar -j -cf skeet.tar makefile *.h *.cpp

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
#    velocity.o    Handles speed of object
#    flyingObject.o       Flying objects
#    bird.o        Bird object
#    bullet.o      Bullet object
#    toughBird.o   Tough Bird
#    sacredBird.o  Sacred Bird
#    asteroid.o    Asteroid
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h point.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

game.o: game.cpp uiDraw.h uiInteract.h point.h rifle.h bullet.h bird.h toughBird.h sacredBird.h asteroid.h
	g++ -c game.cpp

driver.o: game.h uiInteract.h driver.cpp
	g++ -c driver.cpp

rifle.o: rifle.h point.h uiDraw.h rifle.cpp
	g++ -c rifle.cpp

velocity.o: velocity.h velocity.cpp
	g++ -c velocity.cpp

flyingObject.o: flyingObject.h flyingObject.cpp velocity.h point.h uiDraw.h
	g++ -c flyingObject.cpp

bird.o: bird.h bird.cpp point.h velocity.h flyingObject.h uiDraw.h
	g++ -c bird.cpp

bullet.o: bullet.h bullet.cpp point.h velocity.h flyingObject.h uiDraw.h
	g++ -c bullet.cpp

toughBird.o: toughBird.h toughBird.cpp bird.h point.h velocity.h flyingObject.h uiDraw.h
	g++ -c toughBird.cpp

sacredBird.o: sacredBird.h sacredBird.cpp bird.h point.h velocity.h flyingObject.h uiDraw.h
	g++ -c sacredBird.cpp

asteroid.o: asteroid.h asteroid.cpp bird.h point.h velocity.h flyingObject.h uiDraw.h
	g++ -c asteroid.cpp

###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o
