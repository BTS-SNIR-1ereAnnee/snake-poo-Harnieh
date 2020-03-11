#include "Snake.h"
#include "Point.h"
#include "Board.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

void Snake::ajouterPoint()
{
  /*insertion de point à l'emplacement [i] dans serpent*/
  iteration = iteration++;
}
void Snake::afficherSerpent()
{

/*Dérouler le tab serpent pour afficher tout les points (boucle for?)*/

  for (i=0; i=iteration; i++)

  {
    //Point::drawPoint.Point serpent[i];
    cout << "*";
  }

}

