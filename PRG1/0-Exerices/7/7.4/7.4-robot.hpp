
#ifndef robot
#define robot
   class Robot{
      public:
         Robot(int pos);
         void deplacer(int n);
         void faireDemiTour();
         int getPosition() const;
      
      private:
         int position;
         int direction;
   };
#endif