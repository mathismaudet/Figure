#include "figure.h"

class Triangle : public Figure
{

public:
	int cote1;
	int cote2;
	int cote3;
	int hauteur;

	int calculPerimetre();
	float calculSurface();

};
