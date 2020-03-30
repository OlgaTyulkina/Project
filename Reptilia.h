#ifndef _Reptilia_h_
#define _Reptilia_h_

#include "Givotnie.h"

class TReptilia : public TGivotnie
{
protected:
    int scale; 
    bool abilityToSwim; 
public:
    TReptilia();
    int GetScale();
    bool GetAbilityToSwim();

    void SetSscale(bool v);

    //double Moloco(); 
    const char* Golos();
};

#endif
