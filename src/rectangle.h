/*!\file rectangle.h
*\définition de la classe rectangle
*\Mathis Maudet
*version 1.0
*/

#pragma once
#include "figure.h"
#include <iostream>

/*!\classe qui calcule la surface et le perimetre d'un rectangle
*/

using namespace std;

class Rectangle:public Figure
{
public:
	float longueur;
	float largeur;

	/*!calcule la surface d'un rectangle
	*/
	float calculSurface(float a, float b);
	/*!calcule le perimetre d'un rectangle
	*/
	float calculPerimetre(float a, float b);
};
