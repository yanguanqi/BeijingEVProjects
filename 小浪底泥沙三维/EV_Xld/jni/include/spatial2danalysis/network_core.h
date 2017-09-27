#ifndef _NETWORK_ANALYSIS_CORE_H_H_
#define _NETWORK_ANALYSIS_CORE_H_H_



namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{


enum EVUsageType
{
	UST_COST			= 1,
	UST_RESTRICTION		= 2,
	UST_HIERACHY		= 3,
	UST_DESCRIPTOR		= 4
};

enum EVUnitType
{
    UNT_UNKNOWN     = 0,
	UNT_METER       = 1,
    UNT_CENTIMETER  = 2,
    UNT_MINUTE      = 3

};
			
enum EVElementType
{
    ET_JUNCTION  = 1,
    ET_EDGE      = 2,
    ET_TURN      = 3
};
			


enum EVDirectionType
{
    DT_FT = 1,
    DT_TF = 2
};
            


}}}} // End of namespaces

#endif //_NETWORK_CORE_H_H_