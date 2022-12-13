#include <iostream>
#include "7.1-point.hpp"

using namespace std;
void Point::deplacementPoint(float xMouvement, float yMouvement){
   x += xMouvement;
   y += yMouvement;
}

float Point::abscisse() const{
   return x;
}

float Point::ordonnee() const{
   return y;
}

Point::Point(float axeX, float axeY){
    x = axeX;
    y = axeY;
}
