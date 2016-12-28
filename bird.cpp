/*************************************************************
 * File: bird.cpp
 * Author: Matthew Sweeney
 *
 * Description: Defines a the basic bird class, inherited from flyer class
 *
 *************************************************************/

#include "point.h"
#include "velocity.h"
#include "flyingObject.h"
#include "uiDraw.h"
#include "bird.h"

#include <cassert>

#define RADIUS 15

/**************************************************************************
 * Bird constructor. Takes form from flying object class, but inserts values for bird.
 **************************************************************************/
Bird :: Bird() : FlyingObject(-195, random(-190, 190), random(3, 6), 0)
{  
   // This value will change depending on starting point of bird
   if (point.getY() >= 0)
      velocity.setDy(random(-4, 0));
   else
      velocity.setDy(random(0, 4));

   assert(point.getX() >= -200 && point.getX() <= 200);   // Make sure point isn't off the map
   assert(point.getY() >= -200 && point.getY() <= 200);
}

/**************************************************************************
 * Hit function. Just kill bird and return 1 to score
 **************************************************************************/
int Bird :: hit()
{
   kill();
   
   return 1;
}

/**************************************************************************
 * Draw bird.
 **************************************************************************/
void Bird :: draw() const
{
   drawCircle(getPoint(), RADIUS);
}
