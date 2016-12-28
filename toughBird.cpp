/*************************************************************
 * File: toughBird.cpp
 * Author: Matthew Sweeney
 *
 * Description: Defines a the tough bird class, inherited from bird class
 *
 *************************************************************/

#include "point.h"
#include "velocity.h"
#include "flyingObject.h"
#include "uiDraw.h"
#include "toughBird.h"
#include "bird.h"

#include <cassert>

#define RADIUS 15    // used to draw circle

/**************************************************************************
 * Default constructor for tough bird. Inherits from bird but overrides 
 * with slower velocity and adds hit points
 **************************************************************************/
ToughBird :: ToughBird()
{
   setHits(3);   // set hit points
   
   velocity.setDx(random(2, 4));   // sets slower velocity
   
   if (point.getY() >= 0)
      velocity.setDy(random(-3, 0));
   else
      velocity.setDy(random(0, 3));
} 

/**************************************************************************
 * Hit function for tough bird. Overrides same function in bird class
 **************************************************************************/
int ToughBird :: hit()
{
   hitPoints--;  // decrease hit points
   
   if (hitPoints >= 1)  // if still has hit points then just add 1 to score
      return 1;
   else if (hitPoints < 1)    // if no longer has hit points kill and add 3
      kill();
      return 3;
}

/**************************************************************************
 * Draw function for tough bird
 **************************************************************************/
void ToughBird :: draw() const
{
   drawToughBird(getPoint(), RADIUS, hitPoints);
}
