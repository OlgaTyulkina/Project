#include "Reptilia.h"

TReptilia::TReptilia() : TGivotnie()
{
     scale= 0;
     abilityToSwim = 0;
}
int TReptilia::GetScale()
{
    return scale;
}

bool TReptilia::GetAbilityToSwim()
{
    return abilityToSwim;
}
void TReptilia::SetSscale(bool v)
{
    scale = v;
}
const char* TReptilia::Golos()
{
    return "UUU";
}
