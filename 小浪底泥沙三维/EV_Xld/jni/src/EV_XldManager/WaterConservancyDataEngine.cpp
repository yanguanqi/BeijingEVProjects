#include "WaterConservancyDataEngine.h"
#include "core\datastream.h"
#include "core\dir.h"
#include "geometry3d\vertex.h"
#include "mathengine\vector3.h"
#include "graphic\colourvalue.h"
#include "core\file.h"

using namespace EarthView::World::Core;
using namespace EarthView::World::Spatial::Math;
using namespace EarthView::World::Graphic;
using namespace EarthView::World::Geometry3D;

//EarthView::Xld::WaterConservancyDataEngine::WaterConservancyDataEngine(EarthView::World::Core::CNameValuePairList* pList)
//{
//
//}

void EarthView::Xld::CWaterConservancyDataEngine::WriteTerrainCache(const EVString & fileName, const EVString & materialName, _in EarthView::World::Geometry3D::CVertexVector * vertexVector, _in EarthView::World::Geometry3D::CIndexVector * indexVector)
{
	ev_int32 pos = fileName.find_last_of(EVString("/").c_str(), -1);
	if (pos == -1)
		pos = fileName.find_last_of(EVString("\\").c_str(), -1);
	EVString dir = fileName.subString(0, pos);
	if (!CDirectory::exists(dir))
		return;

	CFileHandleDataStream* s = new CFileHandleDataStream(fileName, 2);
	CDataStreamWriter* writer = new CDataStreamWriter(*s);
	
		writer->writeString(materialName);
		ev_size_t vertexCount = vertexVector->getCount();
		writer->writeUInt64(vertexCount);
		for (ev_size_t i= 0;i<vertexCount;++i)
		{
			EarthView::World::Geometry3D::CVertex vx = vertexVector->getVertex(i);
			CVector3 pos = vx.getPostion();
			CVector3 normal = vx.getNormal();
			CVector4 texCoord = vx.getTexCoord();
			CColourValue colourValue = vx.getColour();
			writer->writeReal64(pos.x);
			writer->writeReal64(pos.y);
			writer->writeReal64(pos.z);
			/*writer->writeReal32(colourValue.a);
			writer->writeReal32(colourValue.r);
			writer->writeReal32(colourValue.g);
			writer->writeReal32(colourValue.b);*/
			writer->writeReal64(normal.x);
			writer->writeReal64(normal.y);
			writer->writeReal64(normal.z);
			writer->writeReal64(texCoord.x);
			writer->writeReal64(texCoord.y);
			writer->writeReal64(texCoord.z);
			writer->writeReal64(texCoord.w);
		}


		ev_size_t indexCount = indexVector->getCount();
		writer->writeUInt64(indexCount);
		for (ev_size_t i = 0; i < indexCount; ++i)
		{
			ev_uint32 index = indexVector->getIndices(i);
			writer->writeUInt32(index);
		}
	
	s->close();
	delete s;
	s = NULL;
	delete writer;
	writer = NULL;
	return;
}


void EarthView::Xld::CWaterConservancyDataEngine::ReadTerrainCache(const EVString & fileName, _out EVString materialName, _out EarthView::World::Geometry3D::CVertexVector * vertexVector, _out EarthView::World::Geometry3D::CIndexVector * indexVector)
{
	if (!CFile::exists(fileName))
	{
		return;
	}
	CFileHandleDataStream* s = new CFileHandleDataStream(fileName, 1);
	CDataStreamReader* reader = new CDataStreamReader(*s);
	reader->readString(materialName);
	ev_uint64 vertexCount = 0;
	reader->readUInt64(vertexCount);
	for (ev_uint64 i = 0; i < vertexCount; i++)
	{
		CVector3 pos;
		CVector3 normal;
		CVector4 texCoord;
		CColourValue colourValue;
		CVertex vertex;
		reader->readReal64(pos.x);
		reader->readReal64(pos.y);
		reader->readReal64(pos.z);
		/*	reader->readReal32(colourValue.a);
			reader->readReal32(colourValue.r);
			reader->readReal32(colourValue.g);
			reader->readReal32(colourValue.b);*/
		reader->readReal64(normal.x);
		reader->readReal64(normal.y);
		reader->readReal64(normal.z);
		reader->readReal64(texCoord.x);
		reader->readReal64(texCoord.y);
		reader->readReal64(texCoord.z);
		reader->readReal64(texCoord.w);
		vertex.setPostion(pos);
		vertex.setColour(colourValue);
		vertex.setNormal(normal);
		vertex.setTexCoord(texCoord);
		vertexVector->addVertex(vertex);
	}
	ev_uint64 indexCount = 0;
	reader->readUInt64(indexCount);
	for (ev_uint64 i = 0; i < vertexCount; i++)
	{
		ev_uint32 index = 0;
		reader->readUInt32(index);
		indexVector->addIndices(index);
	}
	s->close();
	delete s;
	s = NULL;
	delete reader;
	reader = NULL;
	return;
}
