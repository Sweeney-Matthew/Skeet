/***********************************************************************
 * Header File:
 *    Tough Bird : The representation of a sacred bird
 * Author:
 *    Matthew Sweeney
 * Summary:
 *    Everything we need to know about the sacred bird, which inherits from the bird class.
 ************************************************************************/

#ifndef SACREDBIRD_H
#define SACREDBIRD_H

#include "point.h"
#include "velocity.h"
#include "bird.h"

class SacredBird : public Bird
{

public:
   // Constructor
   SacredBird();

   // When sacred bird is hit
   virtual int hit();

   // Draws sacred bird
   virtual void draw() const;
};

#endif
