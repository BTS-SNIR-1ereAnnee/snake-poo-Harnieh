#include "Point.h"
#include "Board.h"
class Point;
class Snake
{
public:

   Snake();
    /*constructeur*/
   
   void ajouterPoint();
   
   void afficherSerpent();
   
private:
   Point serpent [20];
   int iteration;
   int i;
};
