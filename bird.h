/***********************************************************************
 * Header File:
 *    Bird : The representation of a plain old bird
 * Author:
 *    Matthew Sweeney
 * Summary:
 *    Everything we need to know about the bird, which inherits from the flyer class.
 ************************************************************************/

#ifndef BIRD_H
#define BIRD_H

#include "point.h"
#include "flyingObject.h"
#include "velocity.h"

class Bird : public FlyingObject
{
public:
   // Constructor
   Bird();

   // When bird is hit
   virtual int hit();

   // Draws bird
   virtual void draw() const;
};

#endif
