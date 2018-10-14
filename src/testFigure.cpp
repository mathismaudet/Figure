#include "triangle.h"
#include "rectangle.h"
#include "disque.h"
#include <iostream>

using namespace std;

int main()
{
int option1;
float a, b, c, d;

	start:

	cout << "Voulez-vous rentrer un triangle, rectangle ou disque?" << endl;
	cout << "1-Triangle" << endl;
	cout << "2-Rectangle" << endl;
	cout << "3-Disque" << endl;
	cin >> option1;

	switch (option1)
	{
	case 1 :{
		Triangle triangle1;
		cout << "Base du triangle: " << endl;
		cin >> a;
		cout << "Cote 1: " << endl;
		cin >> b;
		cout << "Cote 2: " << endl;
		cin >> c;
		cout << "Hauteur du triangle: " << endl;
		cin >> d;

		triangle1.calculPerimetre(a, b, c);
		triangle1.calculSurface(a, d);

		goto start;
	break;}
	case 2 :{
		Rectangle rectangle1;
		cout << "Largeur: " << endl;
		cin >> a;
		cout << "Longueur: " << endl;
		cin >> b;

		rectangle1.calculPerimetre(a, b);
		rectangle1.calculSurface(a, b);

		goto start;
	break;}
	case 3 :{
		Disque disque1;

		cout << "Rayon: " << endl;
		cin >> a;

		disque1.calculPerimetre(a);
		disque1.calculSurface(a);

		goto start;
	break;}
	}
}
