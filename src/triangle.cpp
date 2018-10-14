#include "triangle.h"
#include <iostream>

using namespace std;

	float Triangle::calculPerimetre(float a, float b, float c) // Calcule le perimetre du triangle
{
	return cote1 + cote2 + cote3;
}

	float Triangle::calculSurface(float a, float d) // Calcule la surface du triangle
{
	return (cote1 * hauteur) / 2.f;
}
