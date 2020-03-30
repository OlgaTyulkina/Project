#include "Turtle.h"

TTurtle::TTurtle() : TReptilia ()
{
	cvet = 2;
	kolvokonechnostei = 4;
	kolvosystems = 3;
}

const char* TTurtle::Golos()
{
	return "ARR";
}

int TTurtle::teeth()
{
	return 0;
}
bool TTurtle::Shell()
{
	return 1;
}
