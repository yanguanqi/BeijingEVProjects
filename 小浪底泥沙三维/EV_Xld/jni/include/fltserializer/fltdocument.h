#ifndef EV_FLTDOCUMWNT_H
#define EV_FLTDOCUMWNT_H
#include "fltserializer/config.h"
#include "fltserializer/fltrenderdatas.h"
#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
#include "mathengine/matrix4.h"
#include "fltserializer/fltcustomdef.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace FLT
			{
				//FLT 版本
				enum EVFLTVersion
				{
					FLT_VERSION_11      = 11,
					FLT_VERSION_12      = 12,
					FLT_VERSION_13      = 13,
					FLT_VERSION_14      = 14,
					FLT_VERSION_14_1    = 14,
					FLT_VERSION_14_2    = 1420,
					FLT_VERSION_15_1    = 1510,
					FLT_VERSION_15_4    = 1540,
					FLT_VERSION_15_5    = 1550,
					FLT_VERSION_15_6    = 1560,
					FLT_VERSION_15_7    = 1570,
					FLT_VERSION_15_8    = 1580,
					FLT_VERSION_16_0    = 1600,
					FLT_VERSION_16_1    = 1610
				};
				//FLT单位
				enum EVFLTCoordUnits {
					FLT_METERS = 0,
					FLT_KILOMETERS = 1,
					FLT_FEET = 4,
					FLT_INCHES = 5,
					FLT_NAUTICAL_MILES = 8
				};
				//FLT投影
				enum EVFLTProjection {
					FLT_FLAT_EARTH = 0,
					FLT_TRAPEZOIDAL = 1,
					FLT_ROUND_EARTH = 2,
					FLT_LAMBERT = 3,
					FLT_UTM = 4,
					FLT_GEODETIC = 5,
					FLT_GEOCENTRIC = 6
				};
				//FLT托球体参数
				enum EVFLTEllipsoid {
					FLT_WGS_1984 = 0,
					FLT_WGS_1972 = 1,
					FLT_BESSEL = 2,
					FLT_CLARKE_1866 = 3,
					FLT_NAD_1927 = 4
				};
				// 纹理过滤的方式
				enum EVFLTMinFilterMode {
					FLT_MIN_FILTER_POINT = 0,
					FLT_MIN_FILTER_BILINEAR = 1,
					FLT_MIN_FILTER_MIPMAP = 2,                      // (Obsolete)
					FLT_MIN_FILTER_MIPMAP_POINT = 3,
					FLT_MIN_FILTER_MIPMAP_LINEAR = 4,
					FLT_MIN_FILTER_MIPMAP_BILINEAR = 5,
					FLT_MIN_FILTER_MIPMAP_TRILINEAR = 6,
					FLT_MIN_FILTER_NONE = 7,
					FLT_MIN_FILTER_BICUBIC = 8,
					FLT_MIN_FILTER_BILINEAR_GEQUAL = 9,
					FLT_MIN_FILTER_BILINEAR_LEQUAL = 10,
					FLT_MIN_FILTER_BICUBIC_GEQUAL = 11,
					FLT_MIN_FILTER_BICUBIC_LEQUAL = 12
				};
				// 纹理过滤的方式
				enum EVFLTMagFilterMode {
					FLT_MAG_FILTER_POINT = 0,
					FLT_MAG_FILTER_BILINEAR = 1,
					FLT_MAG_FILTER_NONE = 2,
					FLT_MAG_FILTER_BICUBIC = 3,
					FLT_MAG_FILTER_SHARPEN = 4,
					FLT_MAG_FILTER_ADD_DETAIL = 5,
					FLT_MAG_FILTER_MODULATE_DETAIL = 6,
					FLT_MAG_FILTER_BILINEAR_GEQUAL = 7,
					FLT_MAG_FILTER_BILINEAR_LEQUAL = 8,
					FLT_MAG_FILTER_BICUBIC_GEQUAL = 9,
					FLT_MAG_FILTER_BICUBIC_LEQUAL = 10
				};
				// 纹理寻址模式
				enum EVFLTWrapMode {
					FLT_WRAP_REPEAT = 0,
					FLT_WRAP_CLAMP = 1,
					FLT_WRAP_NONE = 3,
					FLT_WRAP_MIRRORED_REPEAT = 4
				};
				// 纹理混合模式
				enum EVFLTTexEnvMode {
					FLT_TEXENV_MODULATE = 0,
					FLT_TEXENV_BLEND = 1,
					FLT_TEXENV_DECAL = 2,
					FLT_TEXENV_COLOR = 3,
					FLT_TEXENV_ADD = 4
				};
				// lighting
				enum EVFLTLightMode
				{
					FLT_FACE_COLOR = 0,
					FLT_VERTEX_COLOR = 1,
					FLT_FACE_COLOR_LIGHTING = 2,
					FLT_VERTEX_COLOR_LIGHTING = 3
				};
				// draw mode
				enum EVFLTDrawMode
				{
					FLT_SOLID_BACKFACED = 0,
					FLT_SOLID_NO_BACKFACE = 1,
					FLT_WIREFRAME_CLOSED = 2,
					FLT_WIREFRAME_NOT_CLOSED = 3,
					FLT_SURROUND_ALTERNATE_COLOR = 4,
					FLT_OMNIDIRECTIONAL_LIGHT = 8,
					FLT_UNIDIRECTIONAL_LIGHT = 9,
					FLT_BIDIRECTIONAL_LIGHT = 10
				};
				class CFltPrimaryRecord;
				class EV_FLTSERIALIZER_DLL CFltMaterialMap : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CFltMaterialMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CFltMaterialMap();
					/// <summary>
					/// 添加数据
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns></returns>
					ev_bool push(const ev_int16 &key, CFltMaterial const &val);
					/// <summary>
					/// 判断指定的键是否存在
					/// </summary>
					/// <param name="key"></param>
					/// <returns></returns>
					ev_bool exist(const ev_int16 &key);
					CFltMaterial& operator[](const ev_int16 &key);
					/// <summary>
					/// 根据指定的键返回值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					CFltMaterial& get(const ev_int16 &key);
					/// <summary>
					/// 根据指定的键删除数据
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					ev_void erase(const ev_int16 &key);
					/// <summary>
					/// 返回容器的长度
					/// </summary>
					/// <returns></returns>
					ev_size_t size() const;
					/// <summary>
					/// 清空容器
					/// </summary>
					/// <returns></returns>
					ev_void clear();
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <returns></returns>
					ev_bool empty() const;
ev_private:
					typedef map<ev_int16,CFltMaterial> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);

					CFltMaterialMap::_Pairib insert(const value_type &val);
					CFltMaterialMap::iterator find(const ev_int16 &key);
					CFltMaterialMap::const_iterator find(const ev_int16 &key) const;

				private:
					InternalList mList;
				};
				class EV_FLTSERIALIZER_DLL CFltTextureMap : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CFltTextureMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CFltTextureMap();
					/// <summary>
					/// 添加数据
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns></returns>
					ev_bool push(const ev_int16 &key, CFltTexture const &val);
					/// <summary>
					/// 判断指定的键是否存在
					/// </summary>
					/// <param name="key"></param>
					/// <returns></returns>
					ev_bool exist(const ev_int16 &key);
					CFltTexture& operator[](const ev_int16 &key);
					/// <summary>
					/// 根据指定的键返回值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					CFltTexture& get(const ev_int16 &key);
					/// <summary>
					/// 根据指定的键删除数据
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					ev_void erase(const ev_int16 &key);
					/// <summary>
					/// 返回容器的长度
					/// </summary>
					/// <returns></returns>
					ev_size_t size() const;
					/// <summary>
					/// 清空容器
					/// </summary>
					/// <returns></returns>
					ev_void clear();
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <returns></returns>
					ev_bool empty() const;
ev_private:
					typedef map<ev_int16,CFltTexture> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);

					CFltTextureMap::_Pairib insert(const value_type &val);
					CFltTextureMap::iterator find(const ev_int16 &key);
					CFltTextureMap::const_iterator find(const ev_int16 &key) const;

				private:
					InternalList mList;
				};
				class EV_FLTSERIALIZER_DLL CFltFaceList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef std::list<CFltFace*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_LIST(mList);
					iterator insert(iterator pos, CFltFace* const &ref_t)
					{
						return mList.insert(pos, ref_t);
					}

				private:
					InternalList mList;
ev_private:
					CFltFaceList(_in EarthView::World::Core::CNameValuePairList *pList) {}
					//CFltFaceList::iterator begin();
					///*CFltFaceList::iterator end();
					//CFltFaceList::const_iterator begin() const;
					//CFltFaceList::const_iterator end() const;

					//CFltFaceList::reverse_iterator rbegin();
					//CFltFaceList::reverse_iterator rend();
					//CFltFaceList::const_reverse_iterator rbegin() const;
					//CFltFaceList::const_reverse_iterator rend() const;*/
				public:
					CFltFaceList() {}


					void push_back(CFltFace* const &ref_t)
					{
						mList.push_back(ref_t);
					}
					void push_front(CFltFace* const   &ref_t)
					{
						mList.push_front(ref_t);
					}
					void pop_back()
					{
						mList.pop_back();
					}

					void pop_front()
					{
						mList.pop_front();
					}

					CFltFace* & front()
					{
						return mList.front();
					}
					CFltFace* & back()
					{
						return mList.back();
					}
					CFltFace * & at(ev_uint32 pos)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						return *it;
					}
					void insert(ev_uint32 pos, CFltFace* const &ref_t)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.insert(it, ref_t);
					}
					void remove(ev_size_t pos)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.erase(it);
					}
					void remove( CFltFace* const &t)
					{
						mList.remove(t);
					}
					ev_bool empty() const
					{
						return mList.empty();
					}

					ev_size_t size() const
					{
						return mList.size();
					}
					void resize(ev_size_t newSize)
					{
						mList.resize(newSize);
					}
					void clear()
					{
						mList.clear();
					}
				};
				class CFltFaceInfo : public EarthView::World::Core::CBaseObject
				{
				public:
					CFltFaceList mFaceList;
					ev_int32 mLodDistance;
					EVString mGroupID;
					std::vector<EarthView::World::Spatial::Math::CMatrix4> mFaceMatrixList;
					ev_bool mNeedTransformVertex;
				};
				class EV_FLTSERIALIZER_DLL CFltDocument : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFltDocument(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CFltDocument();
					~CFltDocument();

					 // Current primary record
                    ev_void setCurrentPrimaryRecord(CFltPrimaryRecord* record) { mCurrentPrimaryRecord=record; }
                    CFltPrimaryRecord* getCurrentPrimaryRecord() { return mCurrentPrimaryRecord; }
                    const CFltPrimaryRecord* getCurrentPrimaryRecord() const { return mCurrentPrimaryRecord; }

					// Level stack
					CFltPrimaryRecord* getTopOfLevelStack();
					ev_void pushLevel();
					ev_void popLevel();
				
					EVFLTVersion getFLTVersion() const { return mVersion; }					
					ev_void setFltVersion(const ev_uint32& VersionId);
					ev_bool getDone() const { return mDone; }
					ev_int32 getLevel() const { return mLevel; }

					ev_void setVertexListStream(const EarthView::World::Core::MemoryDataStreamPtr& dataPtr);
					EarthView::World::Core::MemoryDataStreamPtr getVertexListStream()const;
					
					CFltColorPools getFltColors()const;

			        CFltMaterialMap getFltMaterialMap()const;
					CFltTextureMap getFltTextureMap()const;
					//CFltFaceList getFltFaceList()const ;
					ev_void setFltPath(const EVString& path);
					EVString getFltPath()const;

					//ev_void addFltFace(CFltFace* face);
					ev_void addFltColor(const EarthView::World::Spatial::Math::CVector4& color);
					ev_void addFltMaterial(const ev_int16& index, const CFltMaterial& mat);
					ev_void addFltTexture(const ev_int16& index, const CFltTexture& texture);
					CFltMaterial getFltMaterial(const ev_int16& index)const;
					CFltTexture getFltTexture(const ev_int16& index)const;
					EarthView::World::Spatial::Math::CVector4 getFltColor(const ev_uint32& index);
					ev_void setFltColorIsOld(const ev_bool b);
					ev_bool exitMaterial(ev_int16 index);
					//EarthView::World::Spatial::Math::CMatrix4 getCurrentDerivedMatrix();
			/*		ev_void pushMatrix(EarthView::World::Spatial::Math::CMatrix4 matrix);
					ev_void popMatrix();*/
					ev_bool getIsLeafGroup();
					ev_void setIsLeafGroup(ev_bool isleaf);
					ev_void setLodDistance(ev_int32 lodDistance);
					ev_int32 getLodDistance();
					ev_void setIsGroup(ev_bool isGroup);
					ev_bool getIsGroup();
					/*ev_void transformFace();*/
					ev_void setCurrentGroupID(EVString grpID);
					EVString getCurrentGroupID();
					//新增2014/7/18
					CFltNode* getCurrentNode() const;
					ev_void setCurrentNode(CFltNode* node);
					CFltNode* getFltRootNode() const;
					ev_void setFltRootNode(CFltNode* node);
					ev_bool getIsFirstFltNode() const;
					ev_void setIsFirstFltNode(ev_bool isFirstNode);
					ev_int32 getMinLodDistance() const;
					ev_void addChildToCurrentNode(CFltNode* child);
					//end
					//
					ev_void addLightSource(ev_int32 index,EarthView::World::Spatial::FLT::CFltLight& light);
					EarthView::World::Spatial::FLT::CFltLight getLightSource(ev_int32 index);
					ev_int32 getLightSourceNum(){return mlightSourcePool.size();}

					ev_void addLigthAppearence(ev_int32 index,EarthView::World::Spatial::FLT::CFltLPAppearance& lpa);
					EarthView::World::Spatial::FLT::CFltLPAppearance getLightAppearence(ev_int32 index);
					ev_int32 getLightAppearenceNum(){return mlightAppearencePool.size();}

					ev_void addLightAnimation(ev_int32 index,EarthView::World::Spatial::FLT::CFltLPAnimation& lpa);
					EarthView::World::Spatial::FLT::CFltLPAnimation getLightAnimation(ev_int32 index);
					ev_int32 getLightAnimationNum(){return mlightAnimationPool.size();}

					ev_void setHasAnimation(ev_bool hasAnimation);
					ev_bool hasAnimation()const;
				protected:
					ev_map<ev_int32,EarthView::World::Spatial::FLT::CFltLight> mlightSourcePool;
					ev_map<ev_int32,EarthView::World::Spatial::FLT::CFltLPAppearance> mlightAppearencePool;
					ev_map<ev_int32,EarthView::World::Spatial::FLT::CFltLPAnimation> mlightAnimationPool;

					CFltPrimaryRecord* mCurrentPrimaryRecord;
					typedef std::vector<CFltPrimaryRecord*> LevelStack;
					LevelStack mLevelStack;

					ev_int32 mLevel;
					ev_bool mDone;
					EVFLTVersion mVersion;

					EVString mFltFilePath; // flt文件所在的文件夹，需要根据这么路径找到相应的纹理图片

					CFltFaceList mFltFaces;
					//std::map<ev_int32,std::vector<CFltFaceInfo>> mLodFaceInfoMap;
					CFltColorPools mFltColors;
					EarthView::World::Core::MemoryDataStreamPtr mVertexListStream;

			        CFltMaterialMap mMapFltMaterial;
					CFltTextureMap mMapFltTexture;
					//std::map<ev_uint32, CFltShader> mMapFltShader;
					//typedef std::vector<EarthView::World::Spatial::Math::CMatrix4> LevelMatrix;
					//LevelMatrix mLevelMatrix;
					ev_bool mIsLeafGroup;
					ev_int32 mCurrentLodDistance;
					ev_int32 mMinLodDistance;
					ev_bool mIsGroup;
					EVString mCurrentGroupID;
					//ev_bool mNeedTransformVertex;
					///2014/7/18新增
					CFltNode* mpCurrentNode;
					CFltNode* mpRootNode;
					ev_bool mbIsFirstFltNode;
					///end
					ev_bool mbHasAnimation;
				private:
				};
			}
		}
	}
}
#endif