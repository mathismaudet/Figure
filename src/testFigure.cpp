#include "triangle.h"
#include "rectangle.h"
#include "disque.h"
#include <iostream>

using namespace std;

int main()
{
int option1, option2, cote1, cote2, cote3, hauteur, rayon, longueur, largeur;

	cout << "Voulez-vous rentrer un triangle, rectangle ou disque?" << endl;
	cout << "1-Triangle" << endl;
	cout << "2-Rectangle" << endl;
	cout << "3-Disque" << endl;
	cin >> option1 >> endl;

	switch (option1)
	{
	case 1 :
		triangle triangle1
		cout << "Base du triangle: " << endl;
		cin >> cote1 >> endl;
		cout << "Cote 1: " << endl;
		cin >> cote2 >> endl;
		cout << "Cote 2: " << endl;
		cin >> cote3 >> endl;
		cout << "Hauteur du triangle: " << endl;
		cin >> hauteur >> endl;

		triangle1.calculPerimetre(cote1, cote2, cote3);
		triangle1.calculSurface(cote1, hauteur);
	break;
	case 2 :
		cout << "Largeur: " << endl;
		cin >> largeur >> endl;
		cout << "Longueur: " << endl;
		cin >> longueur >> endl;

		rectangle1.calculPerimetre(longueur, largeur);
		rectangle1.calculSurface(longueur, largeur);
	break;
	case 3 :
		disque disque1;

		cout << "Rayon: " << endl;
		cin >> rayon >> endl;

		disque1.calculPerimetre(rayon);
		disque1.calculSurface(rayon);
	break;
	default:
		cout << "Affichez le bon nombre" << endl;
	break;
};
};
