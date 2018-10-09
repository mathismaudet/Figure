#include "disque.h"
#include <iostream>

using namespace std;

	float Disque::calculSurface() // Calcule la surface du disque
{
	return 3 * (rayon * rayon);
}

	int Disque::calculPerimetre() // Calcule le perimetre du disque
{
	return 2 * 3 * rayon;
}
