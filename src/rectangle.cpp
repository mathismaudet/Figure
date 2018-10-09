#include "rectangle.h"
#include <iostream>

using namespace std;

	float Rectangle::calculSurface() // Va calculer la surface du rectangle
{

	return longueur * largeur;
}

	int Rectangle::calculPerimetre() // Va calculer le perimetre du rectangle
{

	return longueur * 2 + largeur * 2;
}
