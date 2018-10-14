/*!\file figure.h
*\classe parent de disque, rectangle et triangle
*\Mathis Maudet
*version 1.0
*/

#pragma once
#include <iostream>

/*!\class resultat
*\la classe va servir pour définir après la classe pour chaque enfant
*/

class Figure // classe abstraite
{
public:
	/*!param calculSurface va être définit dans les classes enfant
	*/
	virtual float calculSurface();
	/*!param calculPerimetre va être définit dans les classes enfant
	*/
	virtual int calculPerimetre();
};
