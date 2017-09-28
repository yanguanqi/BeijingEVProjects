#ifndef EARTHVIEW_WORLD_SPATIAL_SYMBOLACCESS_H
#define EARTHVIEW_WORLD_SPATIAL_SYMBOLACCESS_H
#include "spatialinterface/itheme.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/ifeature.h"
#include "spatialinterface/istatisticstheme.h"
#include "spatialtheme/rangetheme.h"
#include "spatialtheme/simpletheme.h"
#include "spatialtheme/uniquevaluetheme.h"
#include "spatialtheme/uniquevaluematchsymboltheme.h"
using namespace EarthView::World::Core;
using namespace EarthView::World::Spatial::Theme;
using namespace EarthView::World::Spatial::Display;
using namespace EarthView::World::Spatial::GeoDataset;
class SymbolAccess
{
private:
	ITheme* mpTheme;
	int mdIndex;
public:
	SymbolAccess(ITheme* theme):mpTheme(theme),mdIndex(-2){}
	~SymbolAccess(){}
	const ISymbol* getSymbol(IFeature* feature)
	{
		if (!mpTheme)
			return NULL;

		switch(mpTheme->getType())
		{
		case TT_SIMPLE:
			{
				CSimpleTheme* st = (CSimpleTheme*)mpTheme;
				return st->getSymbol();
			}
			break;
		case TT_UNIQUEVALUE:
			{
				CUniqueValueTheme* uvt = (CUniqueValueTheme*)mpTheme;
				if(mdIndex == -2)
					mdIndex = feature->findField(uvt->getFieldString());
				if (mdIndex == -1)
				{
					if (uvt->useDefaultSymbol())
					{
						return uvt->getDefaultSymbol();
					}
				}
				else
				{
					CVariant value;
					feature->getValue(value,mdIndex);
					return uvt->getSymbol(value.toString());
				}
			}
			break;
		case TT_UNIQUEVALUEMATCHSYMBOL:
			{
				CUniqueValueMatchSymbolTheme* uvmst = (CUniqueValueMatchSymbolTheme*)mpTheme;
				if(mdIndex == -2)
					mdIndex = feature->findField(uvmst->getFieldString());
				if (mdIndex == -1)
				{
					if (uvmst->useDefaultSymbol())
					{
						return uvmst->getDefaultSymbol();
					}
				}
				else
				{
					CVariant value;
					feature->getValue(value,mdIndex);
					ISymbol* symbol =  uvmst->getSymbol(value.toString());
					if(symbol)
						return symbol;
					else if(uvmst->useDefaultSymbol())
					{
						return uvmst->getDefaultSymbol();
					}
				}
			}
			break;
		case TT_RANGE:
			{
				CRangeTheme* rt = (CRangeTheme*)mpTheme;
				if(mdIndex == -2)
					mdIndex = feature->findField(rt->getFieldString());
				if (mdIndex == -1)
				{
					if (rt->useDefaultSymbol())
					{
						return rt->getDefaultSymbol();
					}
				}
				else
				{
					CVariant value;
					feature->getValue(value,mdIndex);
					return rt->getSymbol(value.toReal64());
				}
			}
			break;
		default:
			break;
		}
		return NULL;
	}
};
#endif