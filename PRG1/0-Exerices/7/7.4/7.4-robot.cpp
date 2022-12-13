#include "7.4-robot.hpp"

void Robot::deplacer(int n){
   position += direction*n;
}
void Robot::faireDemiTour(){
   direction *= -1;
}
int Robot::getPosition() const{
   return position;
}

Robot::Robot(int pos = 0) : position(pos){direction = 1 ;}