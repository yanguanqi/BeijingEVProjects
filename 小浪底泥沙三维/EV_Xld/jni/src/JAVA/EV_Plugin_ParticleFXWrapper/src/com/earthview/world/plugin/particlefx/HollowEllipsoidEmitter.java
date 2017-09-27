package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HollowEllipsoidEmitter extends com.earthview.world.plugin.particlefx.EllipsoidEmitter {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter", new HollowEllipsoidEmitterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::JCHollowEllipsoidEmitterProxy", new HollowEllipsoidEmitterClassFactory());
	}

	public static class HollowEllipsoidEmitterCmdInnerX extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter::CHollowEllipsoidEmitterCmdInnerX", new HollowEllipsoidEmitterCmdInnerXClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter::JCHollowEllipsoidEmitterCmdInnerXProxy", new HollowEllipsoidEmitterCmdInnerXClassFactory());
		}

		public HollowEllipsoidEmitterCmdInnerX() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCHollowEllipsoidEmitterCmdInnerXProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.HollowEllipsoidEmitter$HollowEllipsoidEmitterCmdInnerX".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		public String doGet(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}
		native private String doGet_void_NoVirtual(long pNativeObject, long target);
		protected String doGet_NoVirtual(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void_NoVirtual(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}

		native private void doSet_void_EVString(long pNativeObject, long target, String val);
		public void doSet(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString(this.nativeObject.pointer, targetParamValue, valParamValue);
		}
		native private void doSet_void_EVString_NoVirtual(long pNativeObject, long target, String val);
		protected void doSet_NoVirtual(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue);
		}

		public HollowEllipsoidEmitterCmdInnerX(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public HollowEllipsoidEmitterCmdInnerX(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/// 在doSet之前测试一次值是否有效。
		public boolean trySet(VoidPointer target, String val, StringPointer reason)
		{
			return super.trySet_NoVirtual(target, val, reason);
		}
		
		native protected void register_doGet_void(long pNativeObject, String method);
		native protected void register_doSet_void_EVString(long pNativeObject, String method);
		native protected void register_trySet_void_EVString_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_doGet_void(this.nativeObject.pointer, "doGet_void_callback");
				this.register_doSet_void_EVString(this.nativeObject.pointer, "doSet_void_EVString_callback");
				this.register_trySet_void_EVString_EVString(this.nativeObject.pointer, "trySet_void_EVString_EVString_callback");
			}
		}
		
		public static HollowEllipsoidEmitterCmdInnerX fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			HollowEllipsoidEmitterCmdInnerX obj = null;
 			if(baseObj instanceof HollowEllipsoidEmitterCmdInnerX)
			{
				obj = (HollowEllipsoidEmitterCmdInnerX)baseObj;
			} else {
				obj = new HollowEllipsoidEmitterCmdInnerX(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CHollowEllipsoidEmitterCmdInnerX");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class HollowEllipsoidEmitterCmdInnerXClassFactory implements IClassFactory {
		public BaseObject create()
		{
			HollowEllipsoidEmitterCmdInnerX emptyInstance = new HollowEllipsoidEmitterCmdInnerX(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class HollowEllipsoidEmitterCmdInnerY extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter::CHollowEllipsoidEmitterCmdInnerY", new HollowEllipsoidEmitterCmdInnerYClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter::JCHollowEllipsoidEmitterCmdInnerYProxy", new HollowEllipsoidEmitterCmdInnerYClassFactory());
		}

		public HollowEllipsoidEmitterCmdInnerY() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCHollowEllipsoidEmitterCmdInnerYProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.HollowEllipsoidEmitter$HollowEllipsoidEmitterCmdInnerY".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		public String doGet(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}
		native private String doGet_void_NoVirtual(long pNativeObject, long target);
		protected String doGet_NoVirtual(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void_NoVirtual(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}

		native private void doSet_void_EVString(long pNativeObject, long target, String val);
		public void doSet(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString(this.nativeObject.pointer, targetParamValue, valParamValue);
		}
		native private void doSet_void_EVString_NoVirtual(long pNativeObject, long target, String val);
		protected void doSet_NoVirtual(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue);
		}

		public HollowEllipsoidEmitterCmdInnerY(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public HollowEllipsoidEmitterCmdInnerY(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/// 在doSet之前测试一次值是否有效。
		public boolean trySet(VoidPointer target, String val, StringPointer reason)
		{
			return super.trySet_NoVirtual(target, val, reason);
		}
		
		native protected void register_doGet_void(long pNativeObject, String method);
		native protected void register_doSet_void_EVString(long pNativeObject, String method);
		native protected void register_trySet_void_EVString_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_doGet_void(this.nativeObject.pointer, "doGet_void_callback");
				this.register_doSet_void_EVString(this.nativeObject.pointer, "doSet_void_EVString_callback");
				this.register_trySet_void_EVString_EVString(this.nativeObject.pointer, "trySet_void_EVString_EVString_callback");
			}
		}
		
		public static HollowEllipsoidEmitterCmdInnerY fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			HollowEllipsoidEmitterCmdInnerY obj = null;
 			if(baseObj instanceof HollowEllipsoidEmitterCmdInnerY)
			{
				obj = (HollowEllipsoidEmitterCmdInnerY)baseObj;
			} else {
				obj = new HollowEllipsoidEmitterCmdInnerY(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CHollowEllipsoidEmitterCmdInnerY");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class HollowEllipsoidEmitterCmdInnerYClassFactory implements IClassFactory {
		public BaseObject create()
		{
			HollowEllipsoidEmitterCmdInnerY emptyInstance = new HollowEllipsoidEmitterCmdInnerY(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class HollowEllipsoidEmitterCmdInnerZ extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter::CHollowEllipsoidEmitterCmdInnerZ", new HollowEllipsoidEmitterCmdInnerZClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter::JCHollowEllipsoidEmitterCmdInnerZProxy", new HollowEllipsoidEmitterCmdInnerZClassFactory());
		}

		public HollowEllipsoidEmitterCmdInnerZ() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCHollowEllipsoidEmitterCmdInnerZProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.HollowEllipsoidEmitter$HollowEllipsoidEmitterCmdInnerZ".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		public String doGet(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}
		native private String doGet_void_NoVirtual(long pNativeObject, long target);
		protected String doGet_NoVirtual(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void_NoVirtual(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}

		native private void doSet_void_EVString(long pNativeObject, long target, String val);
		public void doSet(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString(this.nativeObject.pointer, targetParamValue, valParamValue);
		}
		native private void doSet_void_EVString_NoVirtual(long pNativeObject, long target, String val);
		protected void doSet_NoVirtual(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue);
		}

		public HollowEllipsoidEmitterCmdInnerZ(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public HollowEllipsoidEmitterCmdInnerZ(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/// 在doSet之前测试一次值是否有效。
		public boolean trySet(VoidPointer target, String val, StringPointer reason)
		{
			return super.trySet_NoVirtual(target, val, reason);
		}
		
		native protected void register_doGet_void(long pNativeObject, String method);
		native protected void register_doSet_void_EVString(long pNativeObject, String method);
		native protected void register_trySet_void_EVString_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_doGet_void(this.nativeObject.pointer, "doGet_void_callback");
				this.register_doSet_void_EVString(this.nativeObject.pointer, "doSet_void_EVString_callback");
				this.register_trySet_void_EVString_EVString(this.nativeObject.pointer, "trySet_void_EVString_EVString_callback");
			}
		}
		
		public static HollowEllipsoidEmitterCmdInnerZ fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			HollowEllipsoidEmitterCmdInnerZ obj = null;
 			if(baseObj instanceof HollowEllipsoidEmitterCmdInnerZ)
			{
				obj = (HollowEllipsoidEmitterCmdInnerZ)baseObj;
			} else {
				obj = new HollowEllipsoidEmitterCmdInnerZ(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CHollowEllipsoidEmitterCmdInnerZ");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class HollowEllipsoidEmitterCmdInnerZClassFactory implements IClassFactory {
		public BaseObject create()
		{
			HollowEllipsoidEmitterCmdInnerZ emptyInstance = new HollowEllipsoidEmitterCmdInnerZ(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// See CAreaEmitter
	public HollowEllipsoidEmitter(com.earthview.world.graphic.ParticleSystem psys) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer psysPtr = new BasePointer(psys);
		list.add("psys", psysPtr.get());
		Create("JCHollowEllipsoidEmitterProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.plugin.particlefx.HollowEllipsoidEmitter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void _initParticle_CParticle(long pNativeObject, long pParticle);
	public void _initParticle(com.earthview.world.graphic.Particle pParticle)
	{
		long pParticleParamValue = (pParticle == null ? 0L : pParticle.nativeObject.pointer);
		_initParticle_CParticle(this.nativeObject.pointer, pParticleParamValue);
	}
	native private void _initParticle_CParticle_NoVirtual(long pNativeObject, long pParticle);
	protected void _initParticle_NoVirtual(com.earthview.world.graphic.Particle pParticle)
	{
		long pParticleParamValue = (pParticle == null ? 0L : pParticle.nativeObject.pointer);
		_initParticle_CParticle_NoVirtual(this.nativeObject.pointer, pParticleParamValue);
	}

	native private void setInnerSize_Real_Real_Real(long pNativeObject, double x, double y, double z);
	public void setInnerSize(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setInnerSize_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setInnerSizeX_Real(long pNativeObject, double x);
	public void setInnerSizeX(double x)
	{
		double xParamValue = x;
		setInnerSizeX_Real(this.nativeObject.pointer, xParamValue);
	}
	native private void setInnerSizeY_Real(long pNativeObject, double y);
	public void setInnerSizeY(double y)
	{
		double yParamValue = y;
		setInnerSizeY_Real(this.nativeObject.pointer, yParamValue);
	}
	native private void setInnerSizeZ_Real(long pNativeObject, double z);
	public void setInnerSizeZ(double z)
	{
		double zParamValue = z;
		setInnerSizeZ_Real(this.nativeObject.pointer, zParamValue);
	}
	native private double getInnerSizeX_void(long pNativeObject);
	public double getInnerSizeX()
	{
		double returnValue = getInnerSizeX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getInnerSizeY_void(long pNativeObject);
	public double getInnerSizeY()
	{
		double returnValue = getInnerSizeY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getInnerSizeZ_void(long pNativeObject);
	public double getInnerSizeZ()
	{
		double returnValue = getInnerSizeZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	public HollowEllipsoidEmitter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HollowEllipsoidEmitter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获得内部类的指针
	 * @param  
	 */
	public com.earthview.world.graphic.ParticleEmitter.ParticleEmitterInternalStringInterface getStringInterfacePtr()
	{
		return super.getStringInterfacePtr_NoVirtual();
	}
	/**
	 * 计算粒子发射方向
	 * @param destVector 新方向的向量
	 */
	public void genEmissionDirectionNoRandom(com.earthview.world.spatial.math.Vector3 destVector)
	{
		super.genEmissionDirectionNoRandom_NoVirtual(destVector);
	}
	/**
	 * 计算粒子随机发射方向
	 * @param destVector 新方向的向量
	 */
	public void genEmissionDirection(com.earthview.world.spatial.math.Vector3 destVector)
	{
		super.genEmissionDirection_NoVirtual(destVector);
	}
	/**
	 * 计算粒子的速度
	 * @param destVector 放射方向上的向量
	 */
	public void genEmissionVelocity(com.earthview.world.spatial.math.Vector3 destVector)
	{
		super.genEmissionVelocity_NoVirtual(destVector);
	}
	/**
	 * 计算粒子生命周期
	 * @param  
	 */
	public double genEmissionTTL()
	{
		return super.genEmissionTTL_NoVirtual();
	}
	/**
	 * 计算粒子颜色
	 * @param destVector 放射方向上的向量
	 */
	public void genEmissionColour(com.earthview.world.graphic.ColourValue destColour)
	{
		super.genEmissionColour_NoVirtual(destColour);
	}
	/**
	 * 计算常量的发射速率,发射数量
	 * @param timeElapsed 消耗的时间
	 */
	public int genConstantEmissionCount(double timeElapsed)
	{
		return super.genConstantEmissionCount_NoVirtual(timeElapsed);
	}
	/**
	 * 设置粒子发射相对于粒子系统中心的位置
	 * @param pos 
	 */
	public void setPosition(com.earthview.world.spatial.math.Vector3 pos)
	{
		super.setPosition_NoVirtual(pos);
	}
	/**
	 * 获得粒子发射相对于粒子系统中心的位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		return super.getPosition_NoVirtual();
	}
	/**
	 * 设置发射方向
	 * @param direction 粒子发射基本方向
	 */
	public void setDirection(com.earthview.world.spatial.math.Vector3 direction)
	{
		super.setDirection_NoVirtual(direction);
	}
	/**
	 * 返回发射方向
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getDirection()
	{
		return super.getDirection_NoVirtual();
	}
	/**
	 * 设置上方向
	 * @param  
	 */
	public void setUp(com.earthview.world.spatial.math.Vector3 up)
	{
		super.setUp_NoVirtual(up);
	}
	/**
	 * 返回上方向
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getUp()
	{
		return super.getUp_NoVirtual();
	}
	/**
	 * 设置偏离粒子发射方向角度
	 * @param angle 角度
	 */
	public void setAngle(com.earthview.world.spatial.math.Radian angle)
	{
		super.setAngle_NoVirtual(angle);
	}
	/**
	 * 返回偏离粒子发射方向角度
	 * @param  
	 */
	public com.earthview.world.spatial.math.Radian getAngle()
	{
		return super.getAngle_NoVirtual();
	}
	/**
	 * 设置粒子发射的初始速度
	 * @param speed 初始速度
	 */
	public void setParticleVelocity(double speed)
	{
		super.setParticleVelocity_NoVirtual(speed);
	}
	/**
	 * 设置粒子发射初始速度范围
	 * @param min 最小速度
	 * @param max 最大速度
	 */
	public void setParticleVelocity(double min, double max)
	{
		super.setParticleVelocity_NoVirtual(min, max);
	}
	/**
	 * 返回粒子的最小速度
	 * @param min 最小速度
	 */
	public void setMinParticleVelocity(double min)
	{
		super.setMinParticleVelocity_NoVirtual(min);
	}
	/**
	 * 返回粒子的最大速度
	 * @param max 最大速度
	 */
	public void setMaxParticleVelocity(double max)
	{
		super.setMaxParticleVelocity_NoVirtual(max);
	}
	/**
	 * 获得粒子发射的初始速度
	 * @param  
	 */
	public double getParticleVelocity()
	{
		return super.getParticleVelocity_NoVirtual();
	}
	/**
	 * 获得粒子发射的最小速度
	 * @param  
	 */
	public double getMinParticleVelocity()
	{
		return super.getMinParticleVelocity_NoVirtual();
	}
	/**
	 * 获得粒子发射的最大速度
	 * @param  
	 */
	public double getMaxParticleVelocity()
	{
		return super.getMaxParticleVelocity_NoVirtual();
	}
	/**
	 * 设置发射效率告诉发射器每秒发射多少个粒子
	 * @param particlesPerSecond 每秒发射粒子数量
	 */
	public void setEmissionRate(double particlesPerSecond)
	{
		super.setEmissionRate_NoVirtual(particlesPerSecond);
	}
	/**
	 * 获得发射效率
	 * @param  
	 */
	public double getEmissionRate()
	{
		return super.getEmissionRate_NoVirtual();
	}
	/**
	 * 设置发射粒子生命周期
	 * @param ttl 生命周期
	 */
	public void setTimeToLive(double ttl)
	{
		super.setTimeToLive_NoVirtual(ttl);
	}
	/**
	 * 设置发射粒子生命周期范围
	 * @param minTtl 每个粒子生存最短的时间
	 * @param maxTtl 每个粒子生存最长的时间
	 */
	public void setTimeToLive(double minTtl, double maxTtl)
	{
		super.setTimeToLive_NoVirtual(minTtl, maxTtl);
	}
	/**
	 * 设置每个粒子生存的最短的时间
	 * @param min 生存最短的时间
	 */
	public void setMinTimeToLive(double min)
	{
		super.setMinTimeToLive_NoVirtual(min);
	}
	/**
	 * 设置每个粒子生存的最长的时间
	 * @param max 生存最长的时间
	 */
	public void setMaxTimeToLive(double max)
	{
		super.setMaxTimeToLive_NoVirtual(max);
	}
	/**
	 * 获得每个粒子生存时间
	 * @param  
	 */
	public double getTimeToLive()
	{
		return super.getTimeToLive_NoVirtual();
	}
	/**
	 * 获得每个粒子生存最短的时间
	 * @param  
	 */
	public double getMinTimeToLive()
	{
		return super.getMinTimeToLive_NoVirtual();
	}
	/**
	 * 获得每个粒子生存最长的时间
	 * @param  
	 */
	public double getMaxTimeToLive()
	{
		return super.getMaxTimeToLive_NoVirtual();
	}
	/**
	 * 设置发射粒子初始颜色
	 * @param colour 所有将要发射的粒子赋予颜色
	 */
	public void setColour(com.earthview.world.graphic.ColourValue colour)
	{
		super.setColour_NoVirtual(colour);
	}
	/**
	 * 设置发射粒子颜色范围
	 * @param colourStart 颜色范围
	 * @param colourEnd 颜色范围
	 */
	public void setColour(com.earthview.world.graphic.ColourValue colourStart, com.earthview.world.graphic.ColourValue colourEnd)
	{
		super.setColour_NoVirtual(colourStart, colourEnd);
	}
	/**
	 * 设置发射粒子起始颜色
	 * @param colour 颜色
	 */
	public void setColourRangeStart(com.earthview.world.graphic.ColourValue colour)
	{
		super.setColourRangeStart_NoVirtual(colour);
	}
	/**
	 * 设置发射粒子终止颜色
	 * @param colour 颜色
	 */
	public void setColourRangeEnd(com.earthview.world.graphic.ColourValue colour)
	{
		super.setColourRangeEnd_NoVirtual(colour);
	}
	/**
	 * 获得发射粒子颜色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getColour()
	{
		return super.getColour_NoVirtual();
	}
	/**
	 * 获得发射粒子起始颜色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getColourRangeStart()
	{
		return super.getColourRangeStart_NoVirtual();
	}
	/**
	 * 获得发射粒子终止颜色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getColourRangeEnd()
	{
		return super.getColourRangeEnd_NoVirtual();
	}
	/**
	 * 获得发射器基于消耗的时间发射的粒子数
	 * @param timeElapsed 消耗的时间
	 */
	public int _getEmissionCount(double timeElapsed)
	{
		return super._getEmissionCount_NoVirtual(timeElapsed);
	}
	/**
	 * 设置是否是可用的
	 * @param enabled 打开发射器设置为true,关闭发射器设置为false
	 */
	public void setEnabled(boolean enabled)
	{
		super.setEnabled_NoVirtual(enabled);
	}
	/**
	 * 判断是否可用
	 * @param  
	 * @return 可用返回true，不可用返回false
	 */
	public boolean getEnabled()
	{
		return super.getEnabled_NoVirtual();
	}
	/**
	 * 设置发射器起始的时间
	 * @param startTime 
	 */
	public void setStartTime(double startTime)
	{
		super.setStartTime_NoVirtual(startTime);
	}
	/**
	 * 获得发射器开始的时间
	 * @param  
	 */
	public double getStartTime()
	{
		return super.getStartTime_NoVirtual();
	}
	/**
	 * 设置发射器的持续时间
	 * @param duration 持续时间
	 */
	public void setDuration(double duration)
	{
		super.setDuration_NoVirtual(duration);
	}
	/**
	 * 获得发射器的持续时间
	 * @param  
	 */
	public double getDuration()
	{
		return super.getDuration_NoVirtual();
	}
	/**
	 * 设置发射器持续时间的范围
	 * @param min 最短的持续时间
	 * @param max 最长的持续时间
	 */
	public void setDuration(double min, double max)
	{
		super.setDuration_NoVirtual(min, max);
	}
	/**
	 * 设置发射器最短的持续时间
	 * @param min 最短的持续时间
	 */
	public void setMinDuration(double min)
	{
		super.setMinDuration_NoVirtual(min);
	}
	/**
	 * 设置发射器最长的持续时间
	 * @param max 最长的持续时间
	 */
	public void setMaxDuration(double max)
	{
		super.setMaxDuration_NoVirtual(max);
	}
	/**
	 * 获得发射器最短的持续时间
	 * @param  
	 */
	public double getMinDuration()
	{
		return super.getMinDuration_NoVirtual();
	}
	/**
	 * 获得发射器最长的持续时间
	 * @param  
	 */
	public double getMaxDuration()
	{
		return super.getMaxDuration_NoVirtual();
	}
	/**
	 * 设置发射器重复发射间隔的时间
	 * @param duration 持续时间
	 */
	public void setRepeatDelay(double duration)
	{
		super.setRepeatDelay_NoVirtual(duration);
	}
	/**
	 * 获得发射器重复发射间隔的时间
	 * @param  
	 */
	public double getRepeatDelay()
	{
		return super.getRepeatDelay_NoVirtual();
	}
	/**
	 * 设置发射器重复发射间隔时间的范围
	 * @param min 最短的间隔时间
	 * @param max 最长的间隔时间
	 */
	public void setRepeatDelay(double min, double max)
	{
		super.setRepeatDelay_NoVirtual(min, max);
	}
	/**
	 * 设置发射器重复发射的最间隔时间
	 * @param min 最短的间隔时间
	 */
	public void setMinRepeatDelay(double min)
	{
		super.setMinRepeatDelay_NoVirtual(min);
	}
	/**
	 * 设置发射器重复发射的最长的间隔时间
	 * @param min 最长的间隔时间
	 */
	public void setMaxRepeatDelay(double max)
	{
		super.setMaxRepeatDelay_NoVirtual(max);
	}
	/**
	 * 获得发射器重复发射的最短的间隔时间
	 * @param  
	 */
	public double getMinRepeatDelay()
	{
		return super.getMinRepeatDelay_NoVirtual();
	}
	/// <summary>
	/// 获得发射器重复发射的最长的间隔时间
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns
	public double getMaxRepeatDelay()
	{
		return super.getMaxRepeatDelay_NoVirtual();
	}
	/**
	 * 设置发射器的名称
	 * @param  
	 */
	public void setName(String newName)
	{
		super.setName_NoVirtual(newName);
	}
	/**
	 * 设置发射粒子的发射器名称
	 * @param emittedEmitter 发射器的名称
	 */
	public void setEmittedEmitter(String emittedEmitter)
	{
		super.setEmittedEmitter_NoVirtual(emittedEmitter);
	}
	/**
	 * 判断发射器是否被另一个发射器发射
	 * @param  
	 * @return 如果被另一个发射器发射返回ture，否则返回false
	 */
	public boolean isEmitted()
	{
		return super.isEmitted_NoVirtual();
	}
	/**
	 * 设置发射器是否被另一个发射器发射
	 * @param emitted 
	 */
	public void setEmitted(boolean emitted)
	{
		super.setEmitted_NoVirtual(emitted);
	}
	
	native protected void register_getStringInterfacePtr_void(long pNativeObject, String method);
	native protected void register_genEmissionDirectionNoRandom_CVector3(long pNativeObject, String method);
	native protected void register_genEmissionDirection_CVector3(long pNativeObject, String method);
	native protected void register_genEmissionVelocity_CVector3(long pNativeObject, String method);
	native protected void register_genEmissionTTL_void(long pNativeObject, String method);
	native protected void register_genEmissionColour_CColourValue(long pNativeObject, String method);
	native protected void register_genConstantEmissionCount_Real(long pNativeObject, String method);
	native protected void register_setPosition_CVector3(long pNativeObject, String method);
	native protected void register_getPosition_void(long pNativeObject, String method);
	native protected void register_setDirection_CVector3(long pNativeObject, String method);
	native protected void register_getDirection_void(long pNativeObject, String method);
	native protected void register_setUp_CVector3(long pNativeObject, String method);
	native protected void register_getUp_void(long pNativeObject, String method);
	native protected void register_setAngle_CRadian(long pNativeObject, String method);
	native protected void register_getAngle_void(long pNativeObject, String method);
	native protected void register_setParticleVelocity_Real(long pNativeObject, String method);
	native protected void register_setParticleVelocity_Real_Real(long pNativeObject, String method);
	native protected void register_setMinParticleVelocity_Real(long pNativeObject, String method);
	native protected void register_setMaxParticleVelocity_Real(long pNativeObject, String method);
	native protected void register_getParticleVelocity_void(long pNativeObject, String method);
	native protected void register_getMinParticleVelocity_void(long pNativeObject, String method);
	native protected void register_getMaxParticleVelocity_void(long pNativeObject, String method);
	native protected void register_setEmissionRate_Real(long pNativeObject, String method);
	native protected void register_getEmissionRate_void(long pNativeObject, String method);
	native protected void register_setTimeToLive_Real(long pNativeObject, String method);
	native protected void register_setTimeToLive_Real_Real(long pNativeObject, String method);
	native protected void register_setMinTimeToLive_Real(long pNativeObject, String method);
	native protected void register_setMaxTimeToLive_Real(long pNativeObject, String method);
	native protected void register_getTimeToLive_void(long pNativeObject, String method);
	native protected void register_getMinTimeToLive_void(long pNativeObject, String method);
	native protected void register_getMaxTimeToLive_void(long pNativeObject, String method);
	native protected void register_setColour_CColourValue(long pNativeObject, String method);
	native protected void register_setColour_CColourValue_CColourValue(long pNativeObject, String method);
	native protected void register_setColourRangeStart_CColourValue(long pNativeObject, String method);
	native protected void register_setColourRangeEnd_CColourValue(long pNativeObject, String method);
	native protected void register_getColour_void(long pNativeObject, String method);
	native protected void register_getColourRangeStart_void(long pNativeObject, String method);
	native protected void register_getColourRangeEnd_void(long pNativeObject, String method);
	native protected void register__getEmissionCount_Real(long pNativeObject, String method);
	native protected void register__initParticle_CParticle(long pNativeObject, String method);
	native protected void register_setEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getEnabled_void(long pNativeObject, String method);
	native protected void register_setStartTime_Real(long pNativeObject, String method);
	native protected void register_getStartTime_void(long pNativeObject, String method);
	native protected void register_setDuration_Real(long pNativeObject, String method);
	native protected void register_getDuration_void(long pNativeObject, String method);
	native protected void register_setDuration_Real_Real(long pNativeObject, String method);
	native protected void register_setMinDuration_Real(long pNativeObject, String method);
	native protected void register_setMaxDuration_Real(long pNativeObject, String method);
	native protected void register_getMinDuration_void(long pNativeObject, String method);
	native protected void register_getMaxDuration_void(long pNativeObject, String method);
	native protected void register_setRepeatDelay_Real(long pNativeObject, String method);
	native protected void register_getRepeatDelay_void(long pNativeObject, String method);
	native protected void register_setRepeatDelay_Real_Real(long pNativeObject, String method);
	native protected void register_setMinRepeatDelay_Real(long pNativeObject, String method);
	native protected void register_setMaxRepeatDelay_Real(long pNativeObject, String method);
	native protected void register_getMinRepeatDelay_void(long pNativeObject, String method);
	native protected void register_getMaxRepeatDelay_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_setEmittedEmitter_EVString(long pNativeObject, String method);
	native protected void register_isEmitted_void(long pNativeObject, String method);
	native protected void register_setEmitted_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getStringInterfacePtr_void(this.nativeObject.pointer, "getStringInterfacePtr_void_callback");
			this.register_genEmissionDirectionNoRandom_CVector3(this.nativeObject.pointer, "genEmissionDirectionNoRandom_CVector3_callback");
			this.register_genEmissionDirection_CVector3(this.nativeObject.pointer, "genEmissionDirection_CVector3_callback");
			this.register_genEmissionVelocity_CVector3(this.nativeObject.pointer, "genEmissionVelocity_CVector3_callback");
			this.register_genEmissionTTL_void(this.nativeObject.pointer, "genEmissionTTL_void_callback");
			this.register_genEmissionColour_CColourValue(this.nativeObject.pointer, "genEmissionColour_CColourValue_callback");
			this.register_genConstantEmissionCount_Real(this.nativeObject.pointer, "genConstantEmissionCount_Real_callback");
			this.register_setPosition_CVector3(this.nativeObject.pointer, "setPosition_CVector3_callback");
			this.register_getPosition_void(this.nativeObject.pointer, "getPosition_void_callback");
			this.register_setDirection_CVector3(this.nativeObject.pointer, "setDirection_CVector3_callback");
			this.register_getDirection_void(this.nativeObject.pointer, "getDirection_void_callback");
			this.register_setUp_CVector3(this.nativeObject.pointer, "setUp_CVector3_callback");
			this.register_getUp_void(this.nativeObject.pointer, "getUp_void_callback");
			this.register_setAngle_CRadian(this.nativeObject.pointer, "setAngle_CRadian_callback");
			this.register_getAngle_void(this.nativeObject.pointer, "getAngle_void_callback");
			this.register_setParticleVelocity_Real(this.nativeObject.pointer, "setParticleVelocity_Real_callback");
			this.register_setParticleVelocity_Real_Real(this.nativeObject.pointer, "setParticleVelocity_Real_Real_callback");
			this.register_setMinParticleVelocity_Real(this.nativeObject.pointer, "setMinParticleVelocity_Real_callback");
			this.register_setMaxParticleVelocity_Real(this.nativeObject.pointer, "setMaxParticleVelocity_Real_callback");
			this.register_getParticleVelocity_void(this.nativeObject.pointer, "getParticleVelocity_void_callback");
			this.register_getMinParticleVelocity_void(this.nativeObject.pointer, "getMinParticleVelocity_void_callback");
			this.register_getMaxParticleVelocity_void(this.nativeObject.pointer, "getMaxParticleVelocity_void_callback");
			this.register_setEmissionRate_Real(this.nativeObject.pointer, "setEmissionRate_Real_callback");
			this.register_getEmissionRate_void(this.nativeObject.pointer, "getEmissionRate_void_callback");
			this.register_setTimeToLive_Real(this.nativeObject.pointer, "setTimeToLive_Real_callback");
			this.register_setTimeToLive_Real_Real(this.nativeObject.pointer, "setTimeToLive_Real_Real_callback");
			this.register_setMinTimeToLive_Real(this.nativeObject.pointer, "setMinTimeToLive_Real_callback");
			this.register_setMaxTimeToLive_Real(this.nativeObject.pointer, "setMaxTimeToLive_Real_callback");
			this.register_getTimeToLive_void(this.nativeObject.pointer, "getTimeToLive_void_callback");
			this.register_getMinTimeToLive_void(this.nativeObject.pointer, "getMinTimeToLive_void_callback");
			this.register_getMaxTimeToLive_void(this.nativeObject.pointer, "getMaxTimeToLive_void_callback");
			this.register_setColour_CColourValue(this.nativeObject.pointer, "setColour_CColourValue_callback");
			this.register_setColour_CColourValue_CColourValue(this.nativeObject.pointer, "setColour_CColourValue_CColourValue_callback");
			this.register_setColourRangeStart_CColourValue(this.nativeObject.pointer, "setColourRangeStart_CColourValue_callback");
			this.register_setColourRangeEnd_CColourValue(this.nativeObject.pointer, "setColourRangeEnd_CColourValue_callback");
			this.register_getColour_void(this.nativeObject.pointer, "getColour_void_callback");
			this.register_getColourRangeStart_void(this.nativeObject.pointer, "getColourRangeStart_void_callback");
			this.register_getColourRangeEnd_void(this.nativeObject.pointer, "getColourRangeEnd_void_callback");
			this.register__getEmissionCount_Real(this.nativeObject.pointer, "_getEmissionCount_Real_callback");
			this.register__initParticle_CParticle(this.nativeObject.pointer, "_initParticle_CParticle_callback");
			this.register_setEnabled_ev_bool(this.nativeObject.pointer, "setEnabled_ev_bool_callback");
			this.register_getEnabled_void(this.nativeObject.pointer, "getEnabled_void_callback");
			this.register_setStartTime_Real(this.nativeObject.pointer, "setStartTime_Real_callback");
			this.register_getStartTime_void(this.nativeObject.pointer, "getStartTime_void_callback");
			this.register_setDuration_Real(this.nativeObject.pointer, "setDuration_Real_callback");
			this.register_getDuration_void(this.nativeObject.pointer, "getDuration_void_callback");
			this.register_setDuration_Real_Real(this.nativeObject.pointer, "setDuration_Real_Real_callback");
			this.register_setMinDuration_Real(this.nativeObject.pointer, "setMinDuration_Real_callback");
			this.register_setMaxDuration_Real(this.nativeObject.pointer, "setMaxDuration_Real_callback");
			this.register_getMinDuration_void(this.nativeObject.pointer, "getMinDuration_void_callback");
			this.register_getMaxDuration_void(this.nativeObject.pointer, "getMaxDuration_void_callback");
			this.register_setRepeatDelay_Real(this.nativeObject.pointer, "setRepeatDelay_Real_callback");
			this.register_getRepeatDelay_void(this.nativeObject.pointer, "getRepeatDelay_void_callback");
			this.register_setRepeatDelay_Real_Real(this.nativeObject.pointer, "setRepeatDelay_Real_Real_callback");
			this.register_setMinRepeatDelay_Real(this.nativeObject.pointer, "setMinRepeatDelay_Real_callback");
			this.register_setMaxRepeatDelay_Real(this.nativeObject.pointer, "setMaxRepeatDelay_Real_callback");
			this.register_getMinRepeatDelay_void(this.nativeObject.pointer, "getMinRepeatDelay_void_callback");
			this.register_getMaxRepeatDelay_void(this.nativeObject.pointer, "getMaxRepeatDelay_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_setEmittedEmitter_EVString(this.nativeObject.pointer, "setEmittedEmitter_EVString_callback");
			this.register_isEmitted_void(this.nativeObject.pointer, "isEmitted_void_callback");
			this.register_setEmitted_ev_bool(this.nativeObject.pointer, "setEmitted_ev_bool_callback");
		}
	}
	
	public static HollowEllipsoidEmitter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HollowEllipsoidEmitter obj = null;
 		if(baseObj instanceof HollowEllipsoidEmitter)
		{
			obj = (HollowEllipsoidEmitter)baseObj;
		} else {
			obj = new HollowEllipsoidEmitter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHollowEllipsoidEmitter");
			obj.increaseCast();
		}

		return obj;
	}
}
