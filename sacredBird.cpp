/*************************************************************
 * File: sacredBird.cpp
 * Author: Matthew Sweeney
 *
 * Description: Defines a the sacred bird class, inherited from bird class
 *
 *************************************************************/

#include "point.h"
#include "velocity.h"
#include "flyingObject.h"
#include "uiDraw.h"
#include "sacredBird.h"
#include "bird.h"

#include <cassert>

#define RADIUS 14
#define XSTART -195

/**************************************************************************
 * Constructor. Just calls the bird constructor values, which is fine for this object
 **************************************************************************/
SacredBird :: SacredBird()
{
    // Nothing here; use the bird() constructor 
} 

/**************************************************************************
 * Hit function. Kill and return -10 for score
 **************************************************************************/
int SacredBird :: hit()
{
   kill();
   return -10;
}

/**************************************************************************
 * Draws the sacred bird
 **************************************************************************/
void SacredBird :: draw() const
{
   drawSacredBird(getPoint(), RADIUS);
}
