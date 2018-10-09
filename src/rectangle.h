#include "figure.h"
#include <iostream>

using namespace std;

class Rectangle:public Figure
{
public:
	int longueur;
	int largeur;

	float calculSurface();
	int calculPerimetre();
};
