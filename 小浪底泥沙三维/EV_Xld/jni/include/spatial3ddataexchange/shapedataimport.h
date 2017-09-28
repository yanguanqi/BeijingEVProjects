#ifndef __SHAPEDATAIMPORT_H__
#define __SHAPEDATAIMPORT_H__

#include "../../src/EV_Spatial3DDataExchange/import/dataimport.h"
#include "spatial3ddataexchange/parseshapefile.h"

namespace EarthView{namespace World{namespace Spatial3D{namespace DataExchange{

class CShapeDataImport : public CDataImport
{
public:
	CShapeDataImport(CSceneManager* pSceneMagager);
	~CShapeDataImport();

public:
	ev_bool startup();

	ev_void setModelFolderPath(EVString path);	

	ev_void setShapeFieldsValue(const CShapeAssignedFields value);

protected:
	
	/// <summary>
	/// Æô¶¯°ïÖúº¯Êý
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_bool startHelp();

	ev_bool doImport();

	ev_bool importDatasetByFile();

	ev_bool importModelDataset(const std::vector<CEntityMetaData>& entityNames);

private:
	EVString mShapePath;

	EVString mModelFolderPath;

	CShapeAssignedFields m_AssignedValue;
};

}}}}

#endif