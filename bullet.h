/***********************************************************************
 * Header File:
 *    Bullet : The representation of a bullet
 * Author:
 *    Matthew Sweeney
 * Summary:
 *    Everything we need to know about the bullet, which inherits from the flyer class.
 ************************************************************************/

#ifndef BULLET_H
#define BULLET_H

#include "point.h"
#include "flyingObject.h"
#include "velocity.h"

class Bullet : public FlyingObject
{
public:
   // Constructor
   Bullet();

   // Draws bullet
   virtual void draw() const;

   // Fires rifle
   void fire(const Point & p, float angle);
};

#endif
