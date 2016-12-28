/***********************************************************************
 * Header File:
 *    Asteroid : The representation of an asteroid
 * Author:
 *    Matthew Sweeney
 * Summary:
 *    Everything we need to know about the asteroid, which inherits from the bird class.
 ************************************************************************/

#ifndef ASTEROID_H
#define ASTEROID_H

#include "point.h"
#include "flyingObject.h"
#include "velocity.h"
#include "bird.h"

class Asteroid : public Bird
{
public:
   // Constructor
   Asteroid();

   // When asteroid is hit
   virtual int hit();

   // Draws asteroid
   virtual void draw() const;
};

#endif
