#include "triangle.h"
#include <iostream>

using namespace std;

	int Triangle::calculPerimetre() // Calcule le perimetre du triangle
{
	return cote1 + cote2 + cote3;
}

	float Triangle::calculSurface() // Calcule la surface du triangle
{
	return (cote1 * hauteur) / 2.f;
}
