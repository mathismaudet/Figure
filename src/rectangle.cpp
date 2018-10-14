#include "rectangle.h"
#include <iostream>

using namespace std;

	float Rectangle::calculSurface(float a, float b) // Va calculer la surface du rectangle
{

	return longueur * largeur;
}

	float Rectangle::calculPerimetre(float a, float b) // Va calculer le perimetre du rectangle
{

	return longueur * 2 + largeur * 2;
}
