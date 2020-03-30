#include "Dolphin.h"
#include <stdlib.h>


TDolphin::TDolphin(): TMlecopitaushee()
{
	cvet = 2;
	kolvokonechnostei = 4;
	kolvosystems = 3;
}
 const char* TDolphin::Golos()
{
	return "Ururu";
}
int TDolphin::Echo()
{
	return 60 + rand() % (100-60);
}
double TDolphin::Moloco()
{
	return 0.0;
}
