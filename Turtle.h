#ifndef _Turtle_h_
#define _Turtle_h_
#include "Reptilia.h"

class TTurtle : public TReptilia
{
public:
    TTurtle();
    const char* Golos();
    int teeth();
    bool Shell();
};


#endif 
