#include <string>

#ifndef pays
#define pays
   class Pays{
      public:
         Pays(const std::string& nomC, ulong nbrHabitantsC, ulong superficieC);

      private:
      std::string nom;
      unsigned long nbrHabitants;
      unsigned long superficie;

   };
#endif