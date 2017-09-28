#ifndef __SHAPEDATAEXCHANGE_H__
#define __SHAPEDATAEXCHANGE_H__

#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "spatialinterface/idataexchange.h"
#include "spatial3ddataexchange/meshparams.h"
#include "spatial3ddataexchange/parseshapefile.h"
#include "core/stringdefines.h"
#include "spatialinterface/config.h"
#include "spatial3ddataexchange/modeldataexchange.h"

namespace EarthView{
	namespace World{
		namespace Graphic{
			class CSceneManager;
		}
	}       
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CModelDataSource;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IDataset;
			}}}}

namespace EarthView{namespace World{namespace Spatial3D{namespace DataExchange{


/// <summary>
/// 数据交换驱动类
/// </summary>
class CDataImport;
class CModelDataDriver;
class CModelDataExchangeListener;
class CShapeDataImport;


class EV_Spatial3DDataExchange_DLL CShapeDataExchange : public EarthView::World::Spatial3D::DataExchange::CModelDataExchange
{
public:
	CShapeDataExchange();

	virtual ~CShapeDataExchange();

public:
	/// <summary>
	/// 创建线程
	/// </summary>
	/// <param name="">bool forceRestart = true</param>
	/// <returns></returns>
	virtual ev_bool startup();

public:
	void setModelFolderPath(const EVString path);

	void setShapeFieldsValue(const CShapeAssignedFields value);

ev_private:
	CShapeDataExchange(_in EarthView::World::Core::CNameValuePairList* pList );
	
protected:
	EVString mModelFolderPath;

	CShapeAssignedFields mAssignedFields;
};

}}}}



#endif
