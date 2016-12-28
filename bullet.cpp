/*************************************************************
 * File: bullet.cpp
 * Author: Matthew Sweeney
 *
 * Description: Defines a the bullet fired from rifle, inherited from flyer class
 *
 *************************************************************/

#include "point.h"
#include "velocity.h"
#include "flyingObject.h"
#include "uiDraw.h"
#include "bullet.h"
#include <cmath>

#include <cassert>

#define BULLET_SPEED 10.0

/**************************************************************************
 * Constructor. The flying object defines what the values should do, but here we're 
 * setting the values to 0. We'll change that when we actually fire the bullet.
 **************************************************************************/
Bullet :: Bullet() : FlyingObject(0, 0, 0, 0)
{
   // Just use the Flying Object default
}

/**************************************************************************
 * Draw the bullet
 **************************************************************************/
void Bullet :: draw() const
{
   drawDot(getPoint());
}

/**************************************************************************
 * Fire a bullet. Basically set a velocity for the bullet that isn't 0.
 **************************************************************************/
void Bullet :: fire(const Point & p, float angle)
{
   point.setX(p.getX());   // Set bullet x to whatever was passed by rifle
   point.setY(p.getY());   // Set bullet y to whatever was passed by rifle
 
   assert(point.getX() >= -200 && point.getX() <= 200);  // Just make sure nothing crazy happens
   assert(point.getY() >= -200 && point.getY() <= 200);
  
   velocity.setDx(BULLET_SPEED * (-cos(M_PI / 180.0 * angle))); // x component of velocity
   velocity.setDy(BULLET_SPEED * (sin(M_PI / 180.0 * angle)));  // y component of velocity
}
