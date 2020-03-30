#include "Crocodile.h"
#include <stdlib.h>

TCrocodile::TCrocodile() : TReptilia()
{
	cvet = 1;
	kolvokonechnostei = 4;
	kolvosystems = 3;
}

const char* TCrocodile::Golos()
{
	return "Xrr";
}

int TCrocodile::teeth()
{
	return 64 + rand()% (80-64) ;
}

