/*!\file disque.h
*\definition de la classe disque
*\Mathis Maudet
*version 1.0
*/

#pragma once
#include "figure.h"
#include <iostream>

/*!\la classe va calculer le perimetre et la surface d'un disque ou cercle
*/

using namespace std;

class Disque:public Figure
{
	public:
		float rayon;

		/*!param calculPerimetre va calculer le perimetre d'un disque ou cercle
		*/
		float calculPerimetre(float a);
		/*!param calculSurface va calculer la surface d'un disque ou cercle
		*/
		float calculSurface(float a);
};
