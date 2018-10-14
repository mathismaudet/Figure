/*!\file triangle.h
*\définition de la classe triangle
*\Mathis Maudet
*version 1.0
*/

#pragma once
#include "figure.h"

/*!\classe qui calcule surface et perimetre d'un triangle
*/

class Triangle : public Figure
{

public:
	float cote1;
	float cote2;
	float cote3;
	float hauteur;

	/*!param calculPerimetre ici va calculer le perimetre du triangle
	*/
	float calculPerimetre(float a, float b, float c);
	/*!param calculSurface ici va calculer la surface du triangle
	*/
	float calculSurface(float a, float d);

};
