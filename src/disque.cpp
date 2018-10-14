#include "disque.h"
#include <iostream>

using namespace std;

	float Disque::calculSurface(float a) // Calcule la surface du disque
{
	return 3 * (rayon * rayon);
}

	float Disque::calculPerimetre(float a) // Calcule le perimetre du disque
{
	return 2 * 3 * rayon;
}
