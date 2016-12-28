/***********************************************************************
 * Header File:
 *    Tough Bird : The representation of a tough bird
 * Author:
 *    Matthew Sweeney
 * Summary:
 *    Everything we need to know about the tough bird, which inherits from the bird class.
 ************************************************************************/

#ifndef TOUGHBIRD_H
#define TOUGHBIRD_H

#include "point.h"
#include "velocity.h"
#include "bird.h"

class ToughBird : public Bird
{
private:
   int hitPoints;

public:
   // Constructor
   ToughBird();

   // Getters and setters for hits
   void setHits(int hits) { this->hitPoints = hits; }
   int getHits() const { return hitPoints; }

   // When tough bird is hit
   virtual int hit();

   // Draws tough bird
   virtual void draw() const;
};

#endif
