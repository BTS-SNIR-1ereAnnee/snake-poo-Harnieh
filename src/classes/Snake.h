#include "Point.h"
#include "Board.h"
class Point;
class Snake
{
public:

   Snake();
    /*constructeur*/
   
   void ajouterPoint(Point c);
   
   
   void afficherSerpent();
   
private:
   Point serpent [20];
   int m_longueur;
   
};
