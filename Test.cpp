#include <iostream>
#include "Copy.h"

using namespace std;

int main(int argc, char* argv[])
{

	int a = 10;
	int b = a;
	int c = 5;


	cout << a << endl;
	cout << b << endl;

	Copy obj1(a, b, c);
	Copy obj2 = obj1; //définition de la copie

	cout << endl << obj1.x << endl;
	cout << obj1.y << endl;
	cout << *(obj1.pointer) << endl; //affichage des paramètres
	cout << obj2.x << endl;
	cout << obj2.y << endl;
	cout << *(obj2.pointer) << endl;


	obj1.x = 100;
	*(obj1.pointer) = 200; //changement des valeurs des paramètres pour l'objet original

	cout << endl << obj1.x << endl; //valeurs sans le deuxieme constructeur : 100
	cout << obj1.y << endl; //10
	cout << *(obj1.pointer) << endl; //200
	cout << obj2.x << endl; //10
	cout << obj2.y << endl; //10
	cout << *(obj2.pointer) << endl; //200

	return EXIT_SUCCESS;
}