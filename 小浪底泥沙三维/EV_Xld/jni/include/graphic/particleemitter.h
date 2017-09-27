#ifndef __ParticleEmitter_H__
#define __ParticleEmitter_H__
#pragma once
#include "graphic/graphic_config.h"
#include <mathengine/vector3.h>
#include "colourvalue.h"
#include "particleemittercommands.h"
#include "particle.h"
#include "core/stringinterface.h"


namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{


			/// <summary>
			/// 抽象类，定义粒子发射器
			/// </summary>
			class EV_GRAPHIC_DLL CParticleEmitter :  public EarthView::World::Graphic::CParticle
			{
				friend class CParticleEmitterInternalStringInterface;
			public:
				class EV_GRAPHIC_DLL CParticleEmitterInternalStringInterface : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					///
					/// </summary>
					/// <param name="pList"></param>
					/// <returns></returns>
					CParticleEmitterInternalStringInterface(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					///
					/// </summary>
					/// <param name="parent"></param>
					/// <returns></returns>
					CParticleEmitterInternalStringInterface(CParticleEmitter *ref_parent);
				private:
					EarthView::World::Graphic::CParticleEmitter *mParent;
				};
				/// <summary>
				/// 获得内部类的指针
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface *getStringInterfacePtr();
				/// <summary>
				/// 获得内部类指针的地址
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				///virtual EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface& getStringInterface();
			private:
				EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface *mpStringInterface;
			protected:
				/// Command object for setting / getting parameters
				static EmitterCommands::CCmdAngle msAngleCmd;
				static EmitterCommands::CCmdColour msColourCmd;
				static EmitterCommands::CCmdColourRangeStart msColourRangeStartCmd;
				static EmitterCommands::CCmdColourRangeEnd msColourRangeEndCmd;
				static EmitterCommands::CCmdDirection msDirectionCmd;
				static EmitterCommands::CCmdUp msUpCmd;
				static EmitterCommands::CCmdEmissionRate msEmissionRateCmd;
				static EmitterCommands::CCmdMaxTTL msMaxTTLCmd;
				static EmitterCommands::CCmdMaxVelocity msMaxVelocityCmd;
				static EmitterCommands::CCmdMinTTL msMinTTLCmd;
				static EmitterCommands::CCmdMinVelocity msMinVelocityCmd;
				static EmitterCommands::CCmdPosition msPositionCmd;
				static EmitterCommands::CCmdTTL msTTLCmd;
				static EmitterCommands::CCmdVelocity msVelocityCmd;
				static EmitterCommands::CCmdDuration msDurationCmd;
				static EmitterCommands::CCmdMinDuration msMinDurationCmd;
				static EmitterCommands::CCmdMaxDuration msMaxDurationCmd;
				static EmitterCommands::CCmdRepeatDelay msRepeatDelayCmd;
				static EmitterCommands::CCmdMinRepeatDelay msMinRepeatDelayCmd;
				static EmitterCommands::CCmdMaxRepeatDelay msMaxRepeatDelayCmd;
				static EmitterCommands::CCmdName msNameCmd;
				static EmitterCommands::CCmdEmittedEmitter msEmittedEmitterCmd;

				//// Parent particle system
				EarthView::World::Graphic::CParticleSystem *mParent;

				///相对于粒子系统中心的位置
				EarthView::World::Spatial::Math::CVector3 mPosition;
				///发射器发射粒子的速度（每秒发射的粒子数）
				Real mEmissionRate;

				///发射器的名称
				EVString mType;

				///发射器基本的发射方向，可能不被其他发射器使用
				EarthView::World::Spatial::Math::CVector3 mDirection;
				/// Notional up vector, just used to speed up generation of variant directions
				EarthView::World::Spatial::Math::CVector3 mUp;
				///粒子发射角度
				EarthView::World::Spatial::Math::CRadian mAngle;

				///粒子最小速度
				Real mMinSpeed;

				///粒子的最大速度
				Real mMaxSpeed;

				///粒子最短的生命周期
				Real mMinTTL;

				///粒子最长的生命周期
				Real mMaxTTL;

				///粒子起始颜色
				EarthView::World::Graphic::CColourValue mColourRangeStart;

				///粒子终止颜色
				EarthView::World::Graphic::CColourValue mColourRangeEnd;
				//// Whether this emitter is currently enabled (defaults to true)
				ev_bool mEnabled;
				///起始时间
				Real mStartTime;
				//// Minimum length of time emitter will run for (0 = forever)
				Real mDurationMin;
				//// Maximum length of time the emitter will run for (0 = forever)
				Real mDurationMax;
				//// Current duration remainder
				Real mDurationRemain;
				///发射器每次重复发射的间隔时间
				Real mRepeatDelayMin;
				Real mRepeatDelayMax;
				//// Repeat delay left
				Real mRepeatDelayRemain;
				/// Fractions of particles wanted to be emitted last time
				Real mRemainder;
				///发射器的名称
				EVString mName;
				///被发射器发射的发射器名称
				EVString mEmittedEmitter;
				///如果为true，这个发射器是被另一个发射器发射
				ev_bool mEmitted;

ev_internal:

				/// <summary>
				/// 计算粒子发射方向
				/// </summary>
				/// <param name="destVector">新方向的向量</param>
				/// <returns></returns>
				virtual void genEmissionDirectionNoRandom( _inout EarthView::World::Spatial::Math::CVector3 &destVector);
				/// <summary>
				/// 计算粒子随机发射方向
				/// </summary>
				/// <param name="destVector">新方向的向量</param>
				/// <returns></returns>
				virtual void genEmissionDirection( _inout EarthView::World::Spatial::Math::CVector3 &destVector);
				/// <summary>
				/// 计算粒子的速度
				/// </summary>
				/// <param name="destVector">放射方向上的向量</param>
				/// <returns></returns>
				virtual void genEmissionVelocity( _inout EarthView::World::Spatial::Math::CVector3 &destVector);
				/// <summary>
				/// 计算粒子生命周期
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real genEmissionTTL();
				/// <summary>
				/// 计算粒子颜色
				/// </summary>
				/// <param name="destVector">放射方向上的向量</param>
				/// <returns></returns>
				virtual void genEmissionColour(_inout EarthView::World::Graphic::CColourValue &destColour);
				/// <summary>
				/// 计算常量的发射速率,发射数量
				/// </summary>
				/// <param name="timeElapsed">消耗的时间</param>
				/// <returns></returns>
				virtual ev_uint16 genConstantEmissionCount(Real timeElapsed);
ev_internal:
				/// <summary>
				/// 内部方法为子类设定基本的参数定义
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void addBaseParameters();
			protected:
				/// <summary>
				/// 初始化粒子发射持续的时间和重复的次数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void initDurationRepeat();

ev_private:
				/// <summary>
				///
				/// </summary>
				/// <param name="pList"></param>
				/// <returns></returns>
				CParticleEmitter(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				///
				/// </summary>
				/// <param name="psys"></param>
				/// <returns></returns>
				CParticleEmitter(EarthView::World::Graphic::CParticleSystem *ref_psys);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CParticleEmitter();
				/// <summary>
				/// 设置粒子发射相对于粒子系统中心的位置
				/// </summary>
				/// <param name="pos"></param>
				/// <returns></returns>
				virtual void setPosition(const EarthView::World::Spatial::Math::CVector3 &pos);
				/// <summary>
				/// 获得粒子发射相对于粒子系统中心的位置
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual const EarthView::World::Spatial::Math::CVector3 &getPosition() const;
				/// <summary>
				/// 设置发射方向
				/// </summary>
				/// <param name="direction">粒子发射基本方向</param>
				/// <returns></returns>
				virtual void setDirection(const EarthView::World::Spatial::Math::CVector3 &direction);
				/// <summary>
				/// 返回发射方向
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual const EarthView::World::Spatial::Math::CVector3 &getDirection() const;

				/// <summary>
				/// 设置上方向
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void setUp(const EarthView::World::Spatial::Math::CVector3 &up);
				/// <summary>
				/// 返回上方向
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual const EarthView::World::Spatial::Math::CVector3 &getUp() const;
				/// <summary>
				/// 设置偏离粒子发射方向角度
				/// </summary>
				/// <param name="angle">角度</param>
				/// <returns></returns>
				virtual void setAngle(const EarthView::World::Spatial::Math::CRadian &angle);
				/// <summary>
				/// 返回偏离粒子发射方向角度
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual const EarthView::World::Spatial::Math::CRadian &getAngle() const;
				/// <summary>
				/// 设置粒子发射的初始速度
				/// </summary>
				/// <param name="speed">初始速度</param>
				/// <returns></returns>
				virtual void setParticleVelocity(Real speed);
				/// <summary>
				/// 设置粒子发射初始速度范围
				/// </summary>
				/// <param name="min">最小速度</param>
				/// <param name="max">最大速度</param>
				/// <returns></returns>
				virtual void setParticleVelocity(Real min, Real max);

				/// <summary>
				/// 返回粒子的最小速度
				/// </summary>
				/// <param name="min">最小速度</param>
				/// <returns></returns>
				virtual void setMinParticleVelocity(Real min);

				/// <summary>
				/// 返回粒子的最大速度
				/// </summary>
				/// <param name="max">最大速度</param>
				/// <returns></returns>
				virtual void setMaxParticleVelocity(Real max);
				/// <summary>
				/// 获得粒子发射的初始速度
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getParticleVelocity() const;
				/// <summary>
				/// 获得粒子发射的最小速度
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getMinParticleVelocity() const;
				/// <summary>
				/// 获得粒子发射的最大速度
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getMaxParticleVelocity() const;
				/// <summary>
				/// 设置发射效率
				/// 告诉发射器每秒发射多少个粒子
				/// </summary>
				/// <param name="particlesPerSecond">每秒发射粒子数量</param>
				/// <returns></returns>
				virtual void setEmissionRate(Real particlesPerSecond);
				/// <summary>
				/// 获得发射效率
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getEmissionRate() const;
				/// <summary>
				/// 设置发射粒子生命周期
				/// </summary>
				/// <param name="ttl">生命周期</param>
				/// <returns></returns>
				virtual void setTimeToLive(Real ttl);

				/// <summary>
				/// 设置发射粒子生命周期范围
				/// </summary>
				/// <param name="minTtl">每个粒子生存最短的时间</param>
				/// <param name="maxTtl">每个粒子生存最长的时间</param>
				/// <returns></returns>
				virtual void setTimeToLive(Real minTtl, Real maxTtl);
				/// <summary>
				/// 设置每个粒子生存的最短的时间
				/// </summary>
				/// <param name="min">生存最短的时间</param>
				/// <returns></returns>
				virtual void setMinTimeToLive(Real min);
				/// <summary>
				/// 设置每个粒子生存的最长的时间
				/// </summary>
				/// <param name="max">生存最长的时间</param>
				/// <returns></returns>
				virtual void setMaxTimeToLive(Real max);

				/// <summary>
				/// 获得每个粒子生存时间
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getTimeToLive() const;
				/// <summary>
				/// 获得每个粒子生存最短的时间
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getMinTimeToLive() const;
				/// <summary>
				/// 获得每个粒子生存最长的时间
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getMaxTimeToLive() const;
				/// <summary>
				/// 设置发射粒子初始颜色
				/// </summary>
				/// <param name="colour">所有将要发射的粒子赋予颜色</param>
				/// <returns></returns>
				virtual void setColour(const EarthView::World::Graphic::CColourValue &colour);

				/// <summary>
				/// 设置发射粒子颜色范围
				/// </summary>
				/// <param name="colourStart">颜色范围</param>
				/// <param name="colourEnd">颜色范围</param>
				/// <returns></returns>
				virtual void setColour(const EarthView::World::Graphic::CColourValue &colourStart, const EarthView::World::Graphic::CColourValue &colourEnd);

				/// <summary>
				///  设置发射粒子起始颜色
				/// </summary>
				/// <param name="colour">颜色</param>
				/// <returns></returns>
				virtual void setColourRangeStart(const EarthView::World::Graphic::CColourValue &colour);

				/// <summary>
				/// 设置发射粒子终止颜色
				/// </summary>
				/// <param name="colour">颜色</param>
				/// <returns></returns>
				virtual void setColourRangeEnd(const EarthView::World::Graphic::CColourValue &colour);

				/// <summary>
				/// 获得发射粒子颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual const EarthView::World::Graphic::CColourValue &getColour() const;

				/// <summary>
				/// 获得发射粒子起始颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual const EarthView::World::Graphic::CColourValue &getColourRangeStart() const;

				/// <summary>
				/// 获得发射粒子终止颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual const EarthView::World::Graphic::CColourValue &getColourRangeEnd() const;
				/// <summary>
				/// 获得发射器基于消耗的时间发射的粒子数
				/// </summary>
				/// <param name="timeElapsed">消耗的时间</param>
				/// <returns></returns>
				virtual ev_uint16 _getEmissionCount(Real timeElapsed);
				/// <summary>
				/// 基于发射器的方法和参数初始化粒子
				/// </summary>
				/// <param name="pParticle">指向粒子指针</param>
				/// <returns></returns>
				virtual void _initParticle(  EarthView::World::Graphic::CParticle *pParticle);
				/// <summary>
				/// 获得发射器的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				const EVString &getType() const
				{
					return mType;
				}
				/// <summary>
				/// 设置是否是可用的
				/// </summary>
				/// <param name="enabled">打开发射器设置为true,关闭发射器设置为false</param>
				/// <returns></returns>
				virtual void setEnabled(ev_bool enabled);
				/// <summary>
				/// 判断是否可用
				/// </summary>
				/// <param name=""></param>
				/// <returns>可用返回true，不可用返回false</returns>
				virtual ev_bool getEnabled() const;
				/// <summary>
				/// 设置发射器起始的时间
				/// </summary>
				/// <param name="startTime"></param>
				/// <returns></returns>
				virtual void setStartTime(Real startTime);

				/// <summary>
				/// 获得发射器开始的时间
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getStartTime() const;
				/// <summary>
				/// 设置发射器的持续时间
				/// </summary>
				/// <param name="duration">持续时间</param>
				/// <returns></returns>
				virtual void setDuration(Real duration);
				/// <summary>
				/// 获得发射器的持续时间
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getDuration() const;
				/// <summary>
				/// 设置发射器持续时间的范围
				/// </summary>
				/// <param name="min">最短的持续时间</param>
				/// <param name="max">最长的持续时间</param>
				/// <returns></returns>
				virtual void setDuration(Real min, Real max);
				/// <summary>
				/// 设置发射器最短的持续时间
				/// </summary>
				/// <param name="min">最短的持续时间</param>
				/// <returns></returns>
				virtual void setMinDuration(Real min);
				/// <summary>
				/// 设置发射器最长的持续时间
				/// </summary>
				/// <param name="max">最长的持续时间</param>
				/// <returns></returns>
				virtual void setMaxDuration(Real max);
				/// <summary>
				/// 获得发射器最短的持续时间
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getMinDuration() const;
				/// <summary>
				/// 获得发射器最长的持续时间
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getMaxDuration() const;
				/// <summary>
				/// 设置发射器重复发射间隔的时间
				/// </summary>
				/// <param name="duration">持续时间</param>
				/// <returns></returns>
				virtual void setRepeatDelay(Real duration);
				/// <summary>
				/// 获得发射器重复发射间隔的时间
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getRepeatDelay() const;
				/// <summary>
				/// 设置发射器重复发射间隔时间的范围
				/// </summary>
				/// <param name="min">最短的间隔时间</param>
				/// <param name="max">最长的间隔时间</param>
				/// <returns></returns>
				virtual void setRepeatDelay(Real min, Real max);
				/// <summary>
				/// 设置发射器重复发射的最间隔时间
				/// </summary>
				/// <param name="min">最短的间隔时间</param>
				/// <returns></returns>
				virtual void setMinRepeatDelay(Real min);
				/// <summary>
				/// 设置发射器重复发射的最长的间隔时间
				/// </summary>
				/// <param name="min">最长的间隔时间</param>
				/// <returns></returns>
				virtual void setMaxRepeatDelay(Real max);

				/// <summary>
				/// 获得发射器重复发射的最短的间隔时间
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getMinRepeatDelay() const;

				/// <summary>
				/// 获得发射器重复发射的最长的间隔时间
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns
				virtual Real getMaxRepeatDelay() const;
				/// <summary>
				/// 获得发射器的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				const EVString &getName() const;
				/// <summary>
				/// 设置发射器的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void setName(const EVString &newName);
				/// <summary>
				/// 获得发射粒子的发射器名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				const EVString &getEmittedEmitter() const;
				/// <summary>
				/// 设置发射粒子的发射器名称
				/// </summary>
				/// <param name="emittedEmitter">发射器的名称</param>
				/// <returns></returns>
				virtual void setEmittedEmitter(const EVString &emittedEmitter);
				/// <summary>
				/// 判断发射器是否被另一个发射器发射
				/// </summary>
				/// <param name=""></param>
				/// <returns>如果被另一个发射器发射返回ture，否则返回false</returns>
				virtual ev_bool isEmitted() const;
				/// <summary>
				/// 设置发射器是否被另一个发射器发射
				/// </summary>
				/// <param name="emitted"></param>
				/// <returns></returns>
				virtual void setEmitted(ev_bool emitted);

			};
			/** @} */
			/** @} */
		}
	}
}


#endif

