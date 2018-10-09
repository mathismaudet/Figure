#include "figure.h"
#include <iostream>

using namespace std;

class Disque:public Figure
{
	public:
		int rayon;

		int calculPerimetre();
		float calculSurface();
};
