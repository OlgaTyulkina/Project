#ifndef __Chelovek_h_
#define __Chelovek_h_
#include "Mlecopitaushee.h"

class TCow : public TMlecopitaushee
{
public:
	TCow();
	const char* Golos();
	const char* Eating();
	double Moloco();
};
#endif
