#ifndef _FRESNELSURFACE_3DSYMBOL_H
#define _FRESNELSURFACE_3DSYMBOL_H

#include <core/fontdef.h>
#include <core/datastream.h>

#include "symbol/symbol3d.h"

namespace EarthView{
    namespace World{
        namespace Spatial{
            namespace Display{

				/// <summary>
				/// 水面符号				
				/// </summary>
                class EV_SYMBOL_DLL CFresnelSurface3DSymbol : public EarthView::World::Spatial::Display::CSymbol3D
                {
                public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    CFresnelSurface3DSymbol(); 
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    ~CFresnelSurface3DSymbol();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFresnelSurface3DSymbol( EarthView::World::Core::CNameValuePairList* pList );
                public:
					/// <summary>
					/// 设置水面变动时间间隔
					/// </summary>
					/// <param name="t">时间间隔</param>
					/// <returns></returns>
                    void setTimeValue(ev_real32 t);
					/// <summary>
					/// 设置水面流动速度
					/// </summary>
					/// <param name="scroll">流动速度</param>
					/// <returns></returns>
					void setScroll(ev_real32 scroll);
					/// <summary>
					/// 设置水面波动幅度
					/// </summary>
					/// <param name="scale">波动幅度</param>
					/// <returns></returns>
					void setScale(ev_real32 scale);
					/// <summary>
					/// 获取水面变动时间间隔
					/// </summary>
					/// <param name=""></param>
					/// <returns>时间间隔</returns>
					ev_real32 getTimeValue() const;
					/// <summary>
					/// 获取水面流动速度
					/// </summary>
					/// <param name=""></param>
					/// <returns>流动速度</returns>
					ev_real32 getScroll() const;
					/// <summary>
					/// 获取水面波动幅度
					/// </summary>
					/// <param name=""></param>
					/// <returns>波动幅度</returns>
					ev_real32 getScale() const;
					/// <summary>
					/// 设置水面亮度
					/// </summary>
					/// <param name="scale">亮度</param>
					/// <returns></returns>
					void setBrightnessScale(ev_real32 scale);
					/// <summary>
					/// 获取水面亮度
					/// </summary>
					/// <param name=""></param>
					/// <returns>亮度</returns>
					ev_real32 getBrightnessScale() const;

					/// <summary>
					/// 设置水面反射半径
					/// </summary>
					/// <param name="dis">水面反射半径</param>
					/// <returns></returns>
					void setMinDistance(ev_real32 dis);
					/// <summary>
					/// 获取水面反射半径
					/// </summary>
					/// <param name=""></param>
					/// <returns>反射半径</returns>
					ev_real32 getMinDistance() const;

					/// <summary>
					/// 设置水面的可视距离
					/// </summary>
					/// <param name="dis">水面的可视距离</param>
					/// <returns></returns>
					void setVisibleDistance(ev_real32 dis);
					/// <summary>
					/// 获取水面的可视距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>水面的可视距离</returns>
					ev_real32 getVisibleDistance() const;
                    /// <summary>
                    /// 获取图片的个数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>图片个数</returns>
                    virtual ev_uint32 getImageCount() const;

                    /// <summary>
                    /// 获取指定图片的ID
                    /// </summary>
                    /// <param name="index">图片序列号</param>
                    /// <returns>图片ID</returns>
                    virtual EVString getImageID(ev_uint32 index) const;

                    /// <summary>
                    /// 获取指定图片的数据
                    /// </summary>
                    /// <param name="index">图片序列号</param>
                    /// <returns>图片数据流</returns>
                    virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const;

                    /// <summary>
                    /// 设置指定图片的数据
                    /// </summary>
                    /// <param name="index">图片序列号</param>
                    /// <param name="imageID">图片ID</param>
                    /// <returns>图片数据流</returns>
                    virtual ev_void setImage(ev_uint32 index,const EVString& imageID,EarthView::World::Core::MemoryDataStreamPtr stream);

                    ///重写的函数

                    /// <summary>
                    /// 获取符号类型
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ev_int32 getSymbolType() const;                    
                    /// <summary>
                    /// 序列化成流
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ev_void toStream(_out EarthView::World::Core::CDataStream &stream) const;                    

                    /// <summary>
                    /// 自我复制
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual EarthView::World::Spatial::Display::ISymbol* clone() const;

                    /// <summary>
                    /// 判断两个Symbol是否属性相同
                    /// </summary>
                    /// <param name="pSymbol">Symbol对象</param>
                    /// <returns></returns>
                    virtual ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol);

                    /// <summary>
                    /// 判断两个Symbol是否相似
                    /// 如果相似，则可以同一批次创建三维渲染对象
                    /// </summary>
                    /// <param name="pSymbol">Symbol对象</param>
                    /// <returns></returns>
                    virtual ev_bool similar(const EarthView::World::Spatial::Display::ISymbol* pSymbol)const;
					/// <summary>
					/// 获取图片路径
					/// </summary>
					/// <param name=""></param>
					/// <returns>图片路径</returns>
					const EVString& getPictureUri()const;
					/// <summary>
					/// 设置图片路径
					/// </summary>
					/// <param name="uri">图片路径</param>
					/// <returns></returns>
					ev_void setPictureUri(const EVString& uri);

                    /// <summary>
                    /// 从XML元素中恢复Symbol属性
                    /// </summary>
                    /// <param name="xml">XML字符串</param>
                    /// <returns></returns>
                    virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

                    /// <summary>
                    /// 将Symbol属性写入XML元素
                    /// </summary>
                    /// <param name="xml">XML字符串</param>
                    /// <returns></returns>
                    virtual EarthView::World::Core::CXmlElement toXmlElement() const;


					inline ev_real32 getFlowSpeed()
					{
						return mFlowSpeed;
					}
					inline ev_void setFlowSpeed(ev_real32 speed)
					{
						mFlowSpeed = speed;
					}
					inline ev_real32 getWaveDensity()
					{
						return mWaveDensity;
					}
					inline ev_void setWaveDensity(ev_real32 density)
					{
						mWaveDensity = density;
					}
					inline ev_bool getUnderWaterEnable()
					{
						return mIsUnderWaterEnable;
					}
					inline ev_void setUnderWaterEnable(ev_bool flag)
					{
						mIsUnderWaterEnable = flag;
					}
					inline ev_bool getReflectionEnable()
					{
						return mIsReflectionEnable;
					}
					inline ev_void setReflectionEnable(ev_bool flag)
					{
						mIsReflectionEnable = flag;
					}
					inline ev_bool getReflectWithoutSky()
					{
						return mIsReflectWithoutSky;
					}
					inline ev_void setReflectWithoutSky(ev_bool flag)
					{
						mIsReflectWithoutSky = flag;
					}
					inline ev_bool getRefractionEnable()
					{
						return mIsRefractionEnable;
					}
					inline ev_void setRefractionEnable(ev_bool flag)
					{
						mIsRefractionEnable = flag;
					}
					inline ev_real32 getWaterDeep()
					{
						return mWaterDeep;
					}
					inline ev_void setWaterDeep(ev_real32 deep)
					{
						mWaterDeep = deep;
					}
					inline ev_real32 getWavePower()
					{
						return mWavePower;
					}
					inline ev_void setWavePower(ev_real32 power)
					{
						mWavePower = power;
					}
					inline ev_real32 getLightPower()
					{
						return mLightPower;
					}
					inline ev_void setLightPower(ev_real32 power)
					{
						mLightPower = power;
					}
					inline EarthView::World::Spatial::Display::IColor* getWaterColor()const
					{
						return getColor();
					}
					inline ev_void setWaterColor(const EarthView::World::Spatial::Display::IColor* color)
					{
						setColor(color);
					}
					inline ev_real32 getWaveDir()
					{
						return mWaveDir;
					}
					inline ev_void setWaveDir(ev_real32 dir)
					{
						mWaveDir = dir;
					}

ev_internal:
					/// <summary>
					/// 从数据流恢复Symbol属性
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
					/// <summary>
					/// 获取gpu参数是否已改变
					/// </summary>
					/// <param name=""></param>
					/// <returns>gpu参数是否已改变</returns>
					ev_bool getGpuParametersDirty() const;
					/// <summary>
					/// 设置gpu参数是否已改变
					/// </summary>
					/// <param name="dirty">gpu参数是否已改变</param>
					/// <returns></returns>
					ev_void setGpuParametersDirty(ev_bool dirty);
                protected:
                    EVString mPicID;
                    EarthView::World::Core::MemoryDataStreamPtr mPicStream;
					EVString mPicUri;

					ev_real32 mTime;
					ev_real32 mScroll;
					ev_real32 mScale;
					ev_real32 mBrightnessScale;
					ev_real32 mMinReflectDis;
					ev_real32 mVisibleDis;
					ev_bool mbGpuParametersDirty;

					ev_real32 mWaveDensity;
					ev_real32 mFlowSpeed;
					ev_bool   mIsUnderWaterEnable;
					ev_bool   mIsReflectionEnable;
					ev_bool   mIsRefractionEnable;
					ev_bool   mIsReflectWithoutSky;
					ev_real32 mWaterDeep;   
					ev_real32 mWavePower;
					ev_real32 mLightPower;	
					ev_real32 mWaveDir;
                };
            }

        }
    }
}
#endif
