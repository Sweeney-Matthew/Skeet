/*************************************************************
 * File: asteroid.cpp
 * Author: Matthew Sweeney
 *
 * Description: Defines a the asteroid class, inherited from bird class
 *
 *************************************************************/

#include "point.h"
#include "velocity.h"
#include "flyingObject.h"
#include "uiDraw.h"
#include "bird.h"
#include "asteroid.h"

#include <cassert>

#define RADIUS 15

/**************************************************************************
 * Asteroid constructor. Takes form from flying object class, but inserts values for an asteroid.
 * You can score points from an asteroid, but it won't die.
 **************************************************************************/
Asteroid :: Asteroid()
{  

   velocity.setDx(random(4, 6));   // sets faster velocity.

   // This value will change depending on starting point of bird
   if (point.getY() >= 0)
      velocity.setDy(random(-2, 0));
   else
      velocity.setDy(random(0, 2));
}

/**************************************************************************
 * Hit function. Just return 1 to score. Don't kill it.
 **************************************************************************/
int Asteroid :: hit()
{  
   return 1;
}

/**************************************************************************
 * Draw asteroid.
 **************************************************************************/
void Asteroid :: draw() const
{
   drawMediumAsteroid(getPoint(), 2);
}
