#include "Givotnie.h"
#include "Mlecopitaushee.h"
#include "Cows.h"
#include "Dolphin.h"
#include "Reptilia.h"
#include "Crocodile.h"
#include "Turtle.h"
#include <iostream>

using namespace std;

int main()
{
	TGivotnie newGivotnoe;
	newGivotnoe.SetCvet(10);
	newGivotnoe.SetKolvokonechnostei(2);
	cout << "Kolvokonechnoste= " << newGivotnoe.GetKolvokonechnostei() << endl;
	TMlecopitaushee newMleco;
	newMleco.SetSherst(true);
	newMleco.SetCvet(4);
	newMleco.SetKolvokonechnostei(4);
	cout << "newMleco says" << newMleco.Golos() << endl;
	TCow newCow;
	cout << "Cow says " << newCow.Golos() << endl;
	cout << "Cow is eating " << newCow.Eating()<< "now" << endl;
	cout << "Kolvokonechnostei= " << newCow.GetKolvokonechnostei() << endl;
	TDolphin Pasha;
	cout << "Pasha skazal " << Pasha.Golos() << endl;
	cout << "Pasha echo " << Pasha.Echo() << endl;
	cout << "Kolvokonechnostei= " << Pasha.GetKolvokonechnostei() << endl;
	TReptilia newRept;
	newRept.SetSscale(true);
	newRept.SetCvet(3);
	newRept.SetKolvokonechnostei(4);
	cout << "newRept says " << newRept.Golos() << endl;
	TCrocodile Gena;
	cout << "Gena says " << Gena.Golos() << endl;
	cout << "Gena have " << Gena.teeth() <<" teeth" << endl;
	TTurtle Jack;
	cout << "Jack says " << Jack.Golos()<< endl;
	cout << "Jack have " << Jack.teeth() << " teeth" << endl;
	cout << "Jack have " << Jack.Shell() << "shell" << endl;

	TMlecopitaushee** zoo = 0;
	int numberOfAnimals = 0;
	cout << "number of animals = " << endl;
	cin >> numberOfAnimals;
	zoo = new TMlecopitaushee * [numberOfAnimals];
	for (int i=0; i < numberOfAnimals; i++)
	{
		cout << "Which one? " << endl;
		int a;
		cin >> a;
		if (a == 0)
			zoo[i] = new TDolphin();
		else
			zoo[i] = new TCow();
		cout << "Kolvokonechnostei = " << zoo[i]->GetKolvokonechnostei() << endl;
		cout << "Givotnoe " << i<< "govorit "<< zoo[i]->Golos() << endl;
		break;
	}
	TReptilia** zoo_1 = 0;
	int numberOfAnimals_1;
	cout << "number of animals_1 = " << endl;
	cin >> numberOfAnimals_1;
	zoo_1 = new TReptilia * [numberOfAnimals_1];
	for (int i = 0; i < numberOfAnimals_1; i++)
	{
		cout << "Which one? " << endl;
		int b;
		cin >> b;
		if (b == 0)
			zoo_1[i] = new TCrocodile();
		else
			zoo_1[i] = new TTurtle();
		cout << "Kolvokonechnostei = " << zoo_1[i]->GetKolvokonechnostei() << endl;
		cout << "Givotnoe " << i << "govorit " << zoo_1[i]->Golos() << endl;
	}
	return 0;
}
