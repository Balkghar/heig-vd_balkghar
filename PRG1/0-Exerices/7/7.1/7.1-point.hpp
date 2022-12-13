#ifndef point
#define point
   class Point {
      public:
         Point(float x, float y);
         void deplacementPoint(float xMouvement, float yMouvement);
         float abscisse() const;
         float ordonnee() const;
      private:
         float x;
         float y;
   };
#endif