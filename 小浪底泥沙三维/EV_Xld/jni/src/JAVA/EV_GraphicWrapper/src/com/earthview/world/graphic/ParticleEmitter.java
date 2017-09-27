package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象类，定义粒子发射器
 */
public class ParticleEmitter extends com.earthview.world.graphic.Particle {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleEmitter", new ParticleEmitterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCParticleEmitterProxy", new ParticleEmitterClassFactory());
	}

	public static class ParticleEmitterInternalStringInterface extends com.earthview.world.core.StringInterface {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface", new ParticleEmitterInternalStringInterfaceClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleEmitter::JCParticleEmitterInternalStringInterfaceProxy", new ParticleEmitterInternalStringInterfaceClassFactory());
		}

		/**
		 * 
		 * @param parent 
		 */
		public ParticleEmitterInternalStringInterface(com.earthview.world.graphic.ParticleEmitter ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCParticleEmitterInternalStringInterfaceProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ParticleEmitter$ParticleEmitterInternalStringInterface".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		public ParticleEmitterInternalStringInterface(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ParticleEmitterInternalStringInterface(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		public boolean setParameter(String name, String value)
		{
			return super.setParameter_NoVirtual(name, value);
		}
		public boolean setParameter(String name, boolean readOnly, boolean enable)
		{
			return super.setParameter_NoVirtual(name, readOnly, enable);
		}
		public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
		{
			super.setParameterList_NoVirtual(paramList);
		}
		public String getParameter(String name)
		{
			return super.getParameter_NoVirtual(name);
		}
		public void copyParametersTo(com.earthview.world.core.StringInterface dest)
		{
			super.copyParametersTo_NoVirtual(dest);
		}
		
		native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
		native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
		native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
		native protected void register_getParameter_EVString(long pNativeObject, String method);
		native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
				this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
				this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
				this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
				this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
			}
		}
		
		public static ParticleEmitterInternalStringInterface fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ParticleEmitterInternalStringInterface obj = null;
 			if(baseObj instanceof ParticleEmitterInternalStringInterface)
			{
				obj = (ParticleEmitterInternalStringInterface)baseObj;
			} else {
				obj = new ParticleEmitterInternalStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CParticleEmitterInternalStringInterface");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ParticleEmitterInternalStringInterfaceClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ParticleEmitterInternalStringInterface emptyInstance = new ParticleEmitterInternalStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long getStringInterfacePtr_void_callback()
	{
		com.earthview.world.graphic.ParticleEmitter.ParticleEmitterInternalStringInterface returnValue = getStringInterfacePtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getStringInterfacePtr_void(long pNativeObject);
	/**
	 * 获得内部类的指针
	 * @param  
	 */
	public com.earthview.world.graphic.ParticleEmitter.ParticleEmitterInternalStringInterface getStringInterfacePtr()
	{
		long returnValue = getStringInterfacePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleEmitter.ParticleEmitterInternalStringInterface __returnValue = new com.earthview.world.graphic.ParticleEmitter.ParticleEmitterInternalStringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CParticleEmitterInternalStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleEmitter.ParticleEmitterInternalStringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleEmitterInternalStringInterface");
		}
		return __returnValue;
	}
	native private long getStringInterfacePtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ParticleEmitter.ParticleEmitterInternalStringInterface getStringInterfacePtr_NoVirtual()
	{
		long returnValue = getStringInterfacePtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleEmitter.ParticleEmitterInternalStringInterface __returnValue = new com.earthview.world.graphic.ParticleEmitter.ParticleEmitterInternalStringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CParticleEmitterInternalStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleEmitter.ParticleEmitterInternalStringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleEmitterInternalStringInterface");
		}
		return __returnValue;
	}

	protected  void genEmissionDirectionNoRandom_CVector3_callback(long destVector)
	{
		com.earthview.world.spatial.math.Vector3 destVectorParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		destVectorParamValue.setDelegate(true);
		destVectorParamValue.setInstancePointer(new InstancePointer(destVector));
		IClassFactory destVectorParamValueClassFactory = GlobalClassFactoryMap.get(destVectorParamValue.getCppInstanceTypeName());
		if (destVectorParamValueClassFactory != null)
		{
			destVectorParamValue.setDelegate(true);
			destVectorParamValue = (com.earthview.world.spatial.math.Vector3)destVectorParamValueClassFactory.create();
			destVectorParamValue.setDelegate(true);
			destVectorParamValue.setInstancePointer(new InstancePointer(destVector));
		}
		genEmissionDirectionNoRandom(destVectorParamValue);
	}

	native private void genEmissionDirectionNoRandom_CVector3(long pNativeObject, long destVector);
	/**
	 * 计算粒子发射方向
	 * @param destVector 新方向的向量
	 */
	public void genEmissionDirectionNoRandom(com.earthview.world.spatial.math.Vector3 destVector)
	{
		long destVectorParamValue = destVector.nativeObject.pointer;
		genEmissionDirectionNoRandom_CVector3(this.nativeObject.pointer, destVectorParamValue);
	}
	native private void genEmissionDirectionNoRandom_CVector3_NoVirtual(long pNativeObject, long destVector);
	protected void genEmissionDirectionNoRandom_NoVirtual(com.earthview.world.spatial.math.Vector3 destVector)
	{
		long destVectorParamValue = destVector.nativeObject.pointer;
		genEmissionDirectionNoRandom_CVector3_NoVirtual(this.nativeObject.pointer, destVectorParamValue);
	}

	protected  void genEmissionDirection_CVector3_callback(long destVector)
	{
		com.earthview.world.spatial.math.Vector3 destVectorParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		destVectorParamValue.setDelegate(true);
		destVectorParamValue.setInstancePointer(new InstancePointer(destVector));
		IClassFactory destVectorParamValueClassFactory = GlobalClassFactoryMap.get(destVectorParamValue.getCppInstanceTypeName());
		if (destVectorParamValueClassFactory != null)
		{
			destVectorParamValue.setDelegate(true);
			destVectorParamValue = (com.earthview.world.spatial.math.Vector3)destVectorParamValueClassFactory.create();
			destVectorParamValue.setDelegate(true);
			destVectorParamValue.setInstancePointer(new InstancePointer(destVector));
		}
		genEmissionDirection(destVectorParamValue);
	}

	native private void genEmissionDirection_CVector3(long pNativeObject, long destVector);
	/**
	 * 计算粒子随机发射方向
	 * @param destVector 新方向的向量
	 */
	public void genEmissionDirection(com.earthview.world.spatial.math.Vector3 destVector)
	{
		long destVectorParamValue = destVector.nativeObject.pointer;
		genEmissionDirection_CVector3(this.nativeObject.pointer, destVectorParamValue);
	}
	native private void genEmissionDirection_CVector3_NoVirtual(long pNativeObject, long destVector);
	protected void genEmissionDirection_NoVirtual(com.earthview.world.spatial.math.Vector3 destVector)
	{
		long destVectorParamValue = destVector.nativeObject.pointer;
		genEmissionDirection_CVector3_NoVirtual(this.nativeObject.pointer, destVectorParamValue);
	}

	protected  void genEmissionVelocity_CVector3_callback(long destVector)
	{
		com.earthview.world.spatial.math.Vector3 destVectorParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		destVectorParamValue.setDelegate(true);
		destVectorParamValue.setInstancePointer(new InstancePointer(destVector));
		IClassFactory destVectorParamValueClassFactory = GlobalClassFactoryMap.get(destVectorParamValue.getCppInstanceTypeName());
		if (destVectorParamValueClassFactory != null)
		{
			destVectorParamValue.setDelegate(true);
			destVectorParamValue = (com.earthview.world.spatial.math.Vector3)destVectorParamValueClassFactory.create();
			destVectorParamValue.setDelegate(true);
			destVectorParamValue.setInstancePointer(new InstancePointer(destVector));
		}
		genEmissionVelocity(destVectorParamValue);
	}

	native private void genEmissionVelocity_CVector3(long pNativeObject, long destVector);
	/**
	 * 计算粒子的速度
	 * @param destVector 放射方向上的向量
	 */
	public void genEmissionVelocity(com.earthview.world.spatial.math.Vector3 destVector)
	{
		long destVectorParamValue = destVector.nativeObject.pointer;
		genEmissionVelocity_CVector3(this.nativeObject.pointer, destVectorParamValue);
	}
	native private void genEmissionVelocity_CVector3_NoVirtual(long pNativeObject, long destVector);
	protected void genEmissionVelocity_NoVirtual(com.earthview.world.spatial.math.Vector3 destVector)
	{
		long destVectorParamValue = destVector.nativeObject.pointer;
		genEmissionVelocity_CVector3_NoVirtual(this.nativeObject.pointer, destVectorParamValue);
	}

	protected  double genEmissionTTL_void_callback()
	{
		double returnValue = genEmissionTTL();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double genEmissionTTL_void(long pNativeObject);
	/**
	 * 计算粒子生命周期
	 * @param  
	 */
	public double genEmissionTTL()
	{
		double returnValue = genEmissionTTL_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double genEmissionTTL_void_NoVirtual(long pNativeObject);
	protected double genEmissionTTL_NoVirtual()
	{
		double returnValue = genEmissionTTL_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void genEmissionColour_CColourValue_callback(long destColour)
	{
		com.earthview.world.graphic.ColourValue destColourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		destColourParamValue.setDelegate(true);
		destColourParamValue.setInstancePointer(new InstancePointer(destColour));
		IClassFactory destColourParamValueClassFactory = GlobalClassFactoryMap.get(destColourParamValue.getCppInstanceTypeName());
		if (destColourParamValueClassFactory != null)
		{
			destColourParamValue.setDelegate(true);
			destColourParamValue = (com.earthview.world.graphic.ColourValue)destColourParamValueClassFactory.create();
			destColourParamValue.setDelegate(true);
			destColourParamValue.setInstancePointer(new InstancePointer(destColour));
		}
		genEmissionColour(destColourParamValue);
	}

	native private void genEmissionColour_CColourValue(long pNativeObject, long destColour);
	/**
	 * 计算粒子颜色
	 * @param destVector 放射方向上的向量
	 */
	public void genEmissionColour(com.earthview.world.graphic.ColourValue destColour)
	{
		long destColourParamValue = destColour.nativeObject.pointer;
		genEmissionColour_CColourValue(this.nativeObject.pointer, destColourParamValue);
	}
	native private void genEmissionColour_CColourValue_NoVirtual(long pNativeObject, long destColour);
	protected void genEmissionColour_NoVirtual(com.earthview.world.graphic.ColourValue destColour)
	{
		long destColourParamValue = destColour.nativeObject.pointer;
		genEmissionColour_CColourValue_NoVirtual(this.nativeObject.pointer, destColourParamValue);
	}

	protected  int genConstantEmissionCount_Real_callback(double timeElapsed)
	{
		double timeElapsedParamValue = timeElapsed;
		int returnValue = genConstantEmissionCount(timeElapsedParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int genConstantEmissionCount_Real(long pNativeObject, double timeElapsed);
	/**
	 * 计算常量的发射速率,发射数量
	 * @param timeElapsed 消耗的时间
	 */
	public int genConstantEmissionCount(double timeElapsed)
	{
		double timeElapsedParamValue = timeElapsed;
		int returnValue = genConstantEmissionCount_Real(this.nativeObject.pointer, timeElapsedParamValue);
		return returnValue;
	}
	native private int genConstantEmissionCount_Real_NoVirtual(long pNativeObject, double timeElapsed);
	protected int genConstantEmissionCount_NoVirtual(double timeElapsed)
	{
		double timeElapsedParamValue = timeElapsed;
		int returnValue = genConstantEmissionCount_Real_NoVirtual(this.nativeObject.pointer, timeElapsedParamValue);
		return returnValue;
	}

	native private void addBaseParameters_void(long pNativeObject);
	/**
	 * 内部方法为子类设定基本的参数定义
	 * @param  
	 */
	public void addBaseParameters()
	{
		addBaseParameters_void(this.nativeObject.pointer);
	}
	/**
	 * 
	 * @param psys 
	 */
	public ParticleEmitter(com.earthview.world.graphic.ParticleSystem ref_psys) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_psysPtr = new BasePointer(ref_psys);
		list.add("ref_psys", ref_psysPtr.get());
		Create("JCParticleEmitterProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ParticleEmitter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setPosition_CVector3_callback(long pos)
	{
		com.earthview.world.spatial.math.Vector3 posParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		posParamValue.setDelegate(true);
		posParamValue.setInstancePointer(new InstancePointer(pos));
		IClassFactory posParamValueClassFactory = GlobalClassFactoryMap.get(posParamValue.getCppInstanceTypeName());
		if (posParamValueClassFactory != null)
		{
			posParamValue.setDelegate(true);
			posParamValue = (com.earthview.world.spatial.math.Vector3)posParamValueClassFactory.create();
			posParamValue.setDelegate(true);
			posParamValue.setInstancePointer(new InstancePointer(pos));
		}
		setPosition(posParamValue);
	}

	native private void setPosition_CVector3(long pNativeObject, long pos);
	/**
	 * 设置粒子发射相对于粒子系统中心的位置
	 * @param pos 
	 */
	public void setPosition(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		setPosition_CVector3(this.nativeObject.pointer, posParamValue);
	}
	native private void setPosition_CVector3_NoVirtual(long pNativeObject, long pos);
	protected void setPosition_NoVirtual(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		setPosition_CVector3_NoVirtual(this.nativeObject.pointer, posParamValue);
	}

	protected  long getPosition_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getPosition();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPosition_void(long pNativeObject);
	/**
	 * 获得粒子发射相对于粒子系统中心的位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		long returnValue = getPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getPosition_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getPosition_NoVirtual()
	{
		long returnValue = getPosition_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}

	protected  void setDirection_CVector3_callback(long direction)
	{
		com.earthview.world.spatial.math.Vector3 directionParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		directionParamValue.setDelegate(true);
		directionParamValue.setInstancePointer(new InstancePointer(direction));
		IClassFactory directionParamValueClassFactory = GlobalClassFactoryMap.get(directionParamValue.getCppInstanceTypeName());
		if (directionParamValueClassFactory != null)
		{
			directionParamValue.setDelegate(true);
			directionParamValue = (com.earthview.world.spatial.math.Vector3)directionParamValueClassFactory.create();
			directionParamValue.setDelegate(true);
			directionParamValue.setInstancePointer(new InstancePointer(direction));
		}
		setDirection(directionParamValue);
	}

	native private void setDirection_CVector3(long pNativeObject, long direction);
	/**
	 * 设置发射方向
	 * @param direction 粒子发射基本方向
	 */
	public void setDirection(com.earthview.world.spatial.math.Vector3 direction)
	{
		long directionParamValue = direction.nativeObject.pointer;
		setDirection_CVector3(this.nativeObject.pointer, directionParamValue);
	}
	native private void setDirection_CVector3_NoVirtual(long pNativeObject, long direction);
	protected void setDirection_NoVirtual(com.earthview.world.spatial.math.Vector3 direction)
	{
		long directionParamValue = direction.nativeObject.pointer;
		setDirection_CVector3_NoVirtual(this.nativeObject.pointer, directionParamValue);
	}

	protected  long getDirection_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getDirection();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDirection_void(long pNativeObject);
	/**
	 * 返回发射方向
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getDirection()
	{
		long returnValue = getDirection_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getDirection_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getDirection_NoVirtual()
	{
		long returnValue = getDirection_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}

	protected  void setUp_CVector3_callback(long up)
	{
		com.earthview.world.spatial.math.Vector3 upParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		upParamValue.setDelegate(true);
		upParamValue.setInstancePointer(new InstancePointer(up));
		IClassFactory upParamValueClassFactory = GlobalClassFactoryMap.get(upParamValue.getCppInstanceTypeName());
		if (upParamValueClassFactory != null)
		{
			upParamValue.setDelegate(true);
			upParamValue = (com.earthview.world.spatial.math.Vector3)upParamValueClassFactory.create();
			upParamValue.setDelegate(true);
			upParamValue.setInstancePointer(new InstancePointer(up));
		}
		setUp(upParamValue);
	}

	native private void setUp_CVector3(long pNativeObject, long up);
	/**
	 * 设置上方向
	 * @param  
	 */
	public void setUp(com.earthview.world.spatial.math.Vector3 up)
	{
		long upParamValue = up.nativeObject.pointer;
		setUp_CVector3(this.nativeObject.pointer, upParamValue);
	}
	native private void setUp_CVector3_NoVirtual(long pNativeObject, long up);
	protected void setUp_NoVirtual(com.earthview.world.spatial.math.Vector3 up)
	{
		long upParamValue = up.nativeObject.pointer;
		setUp_CVector3_NoVirtual(this.nativeObject.pointer, upParamValue);
	}

	protected  long getUp_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getUp();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getUp_void(long pNativeObject);
	/**
	 * 返回上方向
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getUp()
	{
		long returnValue = getUp_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getUp_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getUp_NoVirtual()
	{
		long returnValue = getUp_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}

	protected  void setAngle_CRadian_callback(long angle)
	{
		com.earthview.world.spatial.math.Radian angleParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		angleParamValue.setDelegate(true);
		angleParamValue.setInstancePointer(new InstancePointer(angle));
		IClassFactory angleParamValueClassFactory = GlobalClassFactoryMap.get(angleParamValue.getCppInstanceTypeName());
		if (angleParamValueClassFactory != null)
		{
			angleParamValue.setDelegate(true);
			angleParamValue = (com.earthview.world.spatial.math.Radian)angleParamValueClassFactory.create();
			angleParamValue.setDelegate(true);
			angleParamValue.setInstancePointer(new InstancePointer(angle));
		}
		setAngle(angleParamValue);
	}

	native private void setAngle_CRadian(long pNativeObject, long angle);
	/**
	 * 设置偏离粒子发射方向角度
	 * @param angle 角度
	 */
	public void setAngle(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		setAngle_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private void setAngle_CRadian_NoVirtual(long pNativeObject, long angle);
	protected void setAngle_NoVirtual(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		setAngle_CRadian_NoVirtual(this.nativeObject.pointer, angleParamValue);
	}

	protected  long getAngle_void_callback()
	{
		com.earthview.world.spatial.math.Radian returnValue = getAngle();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAngle_void(long pNativeObject);
	/**
	 * 返回偏离粒子发射方向角度
	 * @param  
	 */
	public com.earthview.world.spatial.math.Radian getAngle()
	{
		long returnValue = getAngle_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private long getAngle_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Radian getAngle_NoVirtual()
	{
		long returnValue = getAngle_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}

	protected  void setParticleVelocity_Real_callback(double speed)
	{
		double speedParamValue = speed;
		setParticleVelocity(speedParamValue);
	}

	native private void setParticleVelocity_Real(long pNativeObject, double speed);
	/**
	 * 设置粒子发射的初始速度
	 * @param speed 初始速度
	 */
	public void setParticleVelocity(double speed)
	{
		double speedParamValue = speed;
		setParticleVelocity_Real(this.nativeObject.pointer, speedParamValue);
	}
	native private void setParticleVelocity_Real_NoVirtual(long pNativeObject, double speed);
	protected void setParticleVelocity_NoVirtual(double speed)
	{
		double speedParamValue = speed;
		setParticleVelocity_Real_NoVirtual(this.nativeObject.pointer, speedParamValue);
	}

	protected  void setParticleVelocity_Real_Real_callback(double min, double max)
	{
		double minParamValue = min;
		double maxParamValue = max;
		setParticleVelocity(minParamValue, maxParamValue);
	}

	native private void setParticleVelocity_Real_Real(long pNativeObject, double min, double max);
	/**
	 * 设置粒子发射初始速度范围
	 * @param min 最小速度
	 * @param max 最大速度
	 */
	public void setParticleVelocity(double min, double max)
	{
		double minParamValue = min;
		double maxParamValue = max;
		setParticleVelocity_Real_Real(this.nativeObject.pointer, minParamValue, maxParamValue);
	}
	native private void setParticleVelocity_Real_Real_NoVirtual(long pNativeObject, double min, double max);
	protected void setParticleVelocity_NoVirtual(double min, double max)
	{
		double minParamValue = min;
		double maxParamValue = max;
		setParticleVelocity_Real_Real_NoVirtual(this.nativeObject.pointer, minParamValue, maxParamValue);
	}

	protected  void setMinParticleVelocity_Real_callback(double min)
	{
		double minParamValue = min;
		setMinParticleVelocity(minParamValue);
	}

	native private void setMinParticleVelocity_Real(long pNativeObject, double min);
	/**
	 * 返回粒子的最小速度
	 * @param min 最小速度
	 */
	public void setMinParticleVelocity(double min)
	{
		double minParamValue = min;
		setMinParticleVelocity_Real(this.nativeObject.pointer, minParamValue);
	}
	native private void setMinParticleVelocity_Real_NoVirtual(long pNativeObject, double min);
	protected void setMinParticleVelocity_NoVirtual(double min)
	{
		double minParamValue = min;
		setMinParticleVelocity_Real_NoVirtual(this.nativeObject.pointer, minParamValue);
	}

	protected  void setMaxParticleVelocity_Real_callback(double max)
	{
		double maxParamValue = max;
		setMaxParticleVelocity(maxParamValue);
	}

	native private void setMaxParticleVelocity_Real(long pNativeObject, double max);
	/**
	 * 返回粒子的最大速度
	 * @param max 最大速度
	 */
	public void setMaxParticleVelocity(double max)
	{
		double maxParamValue = max;
		setMaxParticleVelocity_Real(this.nativeObject.pointer, maxParamValue);
	}
	native private void setMaxParticleVelocity_Real_NoVirtual(long pNativeObject, double max);
	protected void setMaxParticleVelocity_NoVirtual(double max)
	{
		double maxParamValue = max;
		setMaxParticleVelocity_Real_NoVirtual(this.nativeObject.pointer, maxParamValue);
	}

	protected  double getParticleVelocity_void_callback()
	{
		double returnValue = getParticleVelocity();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getParticleVelocity_void(long pNativeObject);
	/**
	 * 获得粒子发射的初始速度
	 * @param  
	 */
	public double getParticleVelocity()
	{
		double returnValue = getParticleVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getParticleVelocity_void_NoVirtual(long pNativeObject);
	protected double getParticleVelocity_NoVirtual()
	{
		double returnValue = getParticleVelocity_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getMinParticleVelocity_void_callback()
	{
		double returnValue = getMinParticleVelocity();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMinParticleVelocity_void(long pNativeObject);
	/**
	 * 获得粒子发射的最小速度
	 * @param  
	 */
	public double getMinParticleVelocity()
	{
		double returnValue = getMinParticleVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinParticleVelocity_void_NoVirtual(long pNativeObject);
	protected double getMinParticleVelocity_NoVirtual()
	{
		double returnValue = getMinParticleVelocity_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getMaxParticleVelocity_void_callback()
	{
		double returnValue = getMaxParticleVelocity();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMaxParticleVelocity_void(long pNativeObject);
	/**
	 * 获得粒子发射的最大速度
	 * @param  
	 */
	public double getMaxParticleVelocity()
	{
		double returnValue = getMaxParticleVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxParticleVelocity_void_NoVirtual(long pNativeObject);
	protected double getMaxParticleVelocity_NoVirtual()
	{
		double returnValue = getMaxParticleVelocity_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setEmissionRate_Real_callback(double particlesPerSecond)
	{
		double particlesPerSecondParamValue = particlesPerSecond;
		setEmissionRate(particlesPerSecondParamValue);
	}

	native private void setEmissionRate_Real(long pNativeObject, double particlesPerSecond);
	/**
	 * 设置发射效率告诉发射器每秒发射多少个粒子
	 * @param particlesPerSecond 每秒发射粒子数量
	 */
	public void setEmissionRate(double particlesPerSecond)
	{
		double particlesPerSecondParamValue = particlesPerSecond;
		setEmissionRate_Real(this.nativeObject.pointer, particlesPerSecondParamValue);
	}
	native private void setEmissionRate_Real_NoVirtual(long pNativeObject, double particlesPerSecond);
	protected void setEmissionRate_NoVirtual(double particlesPerSecond)
	{
		double particlesPerSecondParamValue = particlesPerSecond;
		setEmissionRate_Real_NoVirtual(this.nativeObject.pointer, particlesPerSecondParamValue);
	}

	protected  double getEmissionRate_void_callback()
	{
		double returnValue = getEmissionRate();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getEmissionRate_void(long pNativeObject);
	/**
	 * 获得发射效率
	 * @param  
	 */
	public double getEmissionRate()
	{
		double returnValue = getEmissionRate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getEmissionRate_void_NoVirtual(long pNativeObject);
	protected double getEmissionRate_NoVirtual()
	{
		double returnValue = getEmissionRate_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setTimeToLive_Real_callback(double ttl)
	{
		double ttlParamValue = ttl;
		setTimeToLive(ttlParamValue);
	}

	native private void setTimeToLive_Real(long pNativeObject, double ttl);
	/**
	 * 设置发射粒子生命周期
	 * @param ttl 生命周期
	 */
	public void setTimeToLive(double ttl)
	{
		double ttlParamValue = ttl;
		setTimeToLive_Real(this.nativeObject.pointer, ttlParamValue);
	}
	native private void setTimeToLive_Real_NoVirtual(long pNativeObject, double ttl);
	protected void setTimeToLive_NoVirtual(double ttl)
	{
		double ttlParamValue = ttl;
		setTimeToLive_Real_NoVirtual(this.nativeObject.pointer, ttlParamValue);
	}

	protected  void setTimeToLive_Real_Real_callback(double minTtl, double maxTtl)
	{
		double minTtlParamValue = minTtl;
		double maxTtlParamValue = maxTtl;
		setTimeToLive(minTtlParamValue, maxTtlParamValue);
	}

	native private void setTimeToLive_Real_Real(long pNativeObject, double minTtl, double maxTtl);
	/**
	 * 设置发射粒子生命周期范围
	 * @param minTtl 每个粒子生存最短的时间
	 * @param maxTtl 每个粒子生存最长的时间
	 */
	public void setTimeToLive(double minTtl, double maxTtl)
	{
		double minTtlParamValue = minTtl;
		double maxTtlParamValue = maxTtl;
		setTimeToLive_Real_Real(this.nativeObject.pointer, minTtlParamValue, maxTtlParamValue);
	}
	native private void setTimeToLive_Real_Real_NoVirtual(long pNativeObject, double minTtl, double maxTtl);
	protected void setTimeToLive_NoVirtual(double minTtl, double maxTtl)
	{
		double minTtlParamValue = minTtl;
		double maxTtlParamValue = maxTtl;
		setTimeToLive_Real_Real_NoVirtual(this.nativeObject.pointer, minTtlParamValue, maxTtlParamValue);
	}

	protected  void setMinTimeToLive_Real_callback(double min)
	{
		double minParamValue = min;
		setMinTimeToLive(minParamValue);
	}

	native private void setMinTimeToLive_Real(long pNativeObject, double min);
	/**
	 * 设置每个粒子生存的最短的时间
	 * @param min 生存最短的时间
	 */
	public void setMinTimeToLive(double min)
	{
		double minParamValue = min;
		setMinTimeToLive_Real(this.nativeObject.pointer, minParamValue);
	}
	native private void setMinTimeToLive_Real_NoVirtual(long pNativeObject, double min);
	protected void setMinTimeToLive_NoVirtual(double min)
	{
		double minParamValue = min;
		setMinTimeToLive_Real_NoVirtual(this.nativeObject.pointer, minParamValue);
	}

	protected  void setMaxTimeToLive_Real_callback(double max)
	{
		double maxParamValue = max;
		setMaxTimeToLive(maxParamValue);
	}

	native private void setMaxTimeToLive_Real(long pNativeObject, double max);
	/**
	 * 设置每个粒子生存的最长的时间
	 * @param max 生存最长的时间
	 */
	public void setMaxTimeToLive(double max)
	{
		double maxParamValue = max;
		setMaxTimeToLive_Real(this.nativeObject.pointer, maxParamValue);
	}
	native private void setMaxTimeToLive_Real_NoVirtual(long pNativeObject, double max);
	protected void setMaxTimeToLive_NoVirtual(double max)
	{
		double maxParamValue = max;
		setMaxTimeToLive_Real_NoVirtual(this.nativeObject.pointer, maxParamValue);
	}

	protected  double getTimeToLive_void_callback()
	{
		double returnValue = getTimeToLive();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getTimeToLive_void(long pNativeObject);
	/**
	 * 获得每个粒子生存时间
	 * @param  
	 */
	public double getTimeToLive()
	{
		double returnValue = getTimeToLive_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getTimeToLive_void_NoVirtual(long pNativeObject);
	protected double getTimeToLive_NoVirtual()
	{
		double returnValue = getTimeToLive_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getMinTimeToLive_void_callback()
	{
		double returnValue = getMinTimeToLive();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMinTimeToLive_void(long pNativeObject);
	/**
	 * 获得每个粒子生存最短的时间
	 * @param  
	 */
	public double getMinTimeToLive()
	{
		double returnValue = getMinTimeToLive_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinTimeToLive_void_NoVirtual(long pNativeObject);
	protected double getMinTimeToLive_NoVirtual()
	{
		double returnValue = getMinTimeToLive_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getMaxTimeToLive_void_callback()
	{
		double returnValue = getMaxTimeToLive();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMaxTimeToLive_void(long pNativeObject);
	/**
	 * 获得每个粒子生存最长的时间
	 * @param  
	 */
	public double getMaxTimeToLive()
	{
		double returnValue = getMaxTimeToLive_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxTimeToLive_void_NoVirtual(long pNativeObject);
	protected double getMaxTimeToLive_NoVirtual()
	{
		double returnValue = getMaxTimeToLive_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setColour_CColourValue_callback(long colour)
	{
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		setColour(colourParamValue);
	}

	native private void setColour_CColourValue(long pNativeObject, long colour);
	/**
	 * 设置发射粒子初始颜色
	 * @param colour 所有将要发射的粒子赋予颜色
	 */
	public void setColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private void setColour_CColourValue_NoVirtual(long pNativeObject, long colour);
	protected void setColour_NoVirtual(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setColour_CColourValue_NoVirtual(this.nativeObject.pointer, colourParamValue);
	}

	protected  void setColour_CColourValue_CColourValue_callback(long colourStart, long colourEnd)
	{
		com.earthview.world.graphic.ColourValue colourStartParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourStartParamValue.setDelegate(true);
		colourStartParamValue.setInstancePointer(new InstancePointer(colourStart));
		IClassFactory colourStartParamValueClassFactory = GlobalClassFactoryMap.get(colourStartParamValue.getCppInstanceTypeName());
		if (colourStartParamValueClassFactory != null)
		{
			colourStartParamValue.setDelegate(true);
			colourStartParamValue = (com.earthview.world.graphic.ColourValue)colourStartParamValueClassFactory.create();
			colourStartParamValue.setDelegate(true);
			colourStartParamValue.setInstancePointer(new InstancePointer(colourStart));
		}
		com.earthview.world.graphic.ColourValue colourEndParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourEndParamValue.setDelegate(true);
		colourEndParamValue.setInstancePointer(new InstancePointer(colourEnd));
		IClassFactory colourEndParamValueClassFactory = GlobalClassFactoryMap.get(colourEndParamValue.getCppInstanceTypeName());
		if (colourEndParamValueClassFactory != null)
		{
			colourEndParamValue.setDelegate(true);
			colourEndParamValue = (com.earthview.world.graphic.ColourValue)colourEndParamValueClassFactory.create();
			colourEndParamValue.setDelegate(true);
			colourEndParamValue.setInstancePointer(new InstancePointer(colourEnd));
		}
		setColour(colourStartParamValue, colourEndParamValue);
	}

	native private void setColour_CColourValue_CColourValue(long pNativeObject, long colourStart, long colourEnd);
	/**
	 * 设置发射粒子颜色范围
	 * @param colourStart 颜色范围
	 * @param colourEnd 颜色范围
	 */
	public void setColour(com.earthview.world.graphic.ColourValue colourStart, com.earthview.world.graphic.ColourValue colourEnd)
	{
		long colourStartParamValue = colourStart.nativeObject.pointer;
		long colourEndParamValue = colourEnd.nativeObject.pointer;
		setColour_CColourValue_CColourValue(this.nativeObject.pointer, colourStartParamValue, colourEndParamValue);
	}
	native private void setColour_CColourValue_CColourValue_NoVirtual(long pNativeObject, long colourStart, long colourEnd);
	protected void setColour_NoVirtual(com.earthview.world.graphic.ColourValue colourStart, com.earthview.world.graphic.ColourValue colourEnd)
	{
		long colourStartParamValue = colourStart.nativeObject.pointer;
		long colourEndParamValue = colourEnd.nativeObject.pointer;
		setColour_CColourValue_CColourValue_NoVirtual(this.nativeObject.pointer, colourStartParamValue, colourEndParamValue);
	}

	protected  void setColourRangeStart_CColourValue_callback(long colour)
	{
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		setColourRangeStart(colourParamValue);
	}

	native private void setColourRangeStart_CColourValue(long pNativeObject, long colour);
	/**
	 * 设置发射粒子起始颜色
	 * @param colour 颜色
	 */
	public void setColourRangeStart(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setColourRangeStart_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private void setColourRangeStart_CColourValue_NoVirtual(long pNativeObject, long colour);
	protected void setColourRangeStart_NoVirtual(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setColourRangeStart_CColourValue_NoVirtual(this.nativeObject.pointer, colourParamValue);
	}

	protected  void setColourRangeEnd_CColourValue_callback(long colour)
	{
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		setColourRangeEnd(colourParamValue);
	}

	native private void setColourRangeEnd_CColourValue(long pNativeObject, long colour);
	/**
	 * 设置发射粒子终止颜色
	 * @param colour 颜色
	 */
	public void setColourRangeEnd(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setColourRangeEnd_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private void setColourRangeEnd_CColourValue_NoVirtual(long pNativeObject, long colour);
	protected void setColourRangeEnd_NoVirtual(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setColourRangeEnd_CColourValue_NoVirtual(this.nativeObject.pointer, colourParamValue);
	}

	protected  long getColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getColour_void(long pNativeObject);
	/**
	 * 获得发射粒子颜色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getColour()
	{
		long returnValue = getColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getColour_NoVirtual()
	{
		long returnValue = getColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  long getColourRangeStart_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getColourRangeStart();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getColourRangeStart_void(long pNativeObject);
	/**
	 * 获得发射粒子起始颜色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getColourRangeStart()
	{
		long returnValue = getColourRangeStart_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getColourRangeStart_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getColourRangeStart_NoVirtual()
	{
		long returnValue = getColourRangeStart_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  long getColourRangeEnd_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getColourRangeEnd();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getColourRangeEnd_void(long pNativeObject);
	/**
	 * 获得发射粒子终止颜色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getColourRangeEnd()
	{
		long returnValue = getColourRangeEnd_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getColourRangeEnd_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getColourRangeEnd_NoVirtual()
	{
		long returnValue = getColourRangeEnd_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  int _getEmissionCount_Real_callback(double timeElapsed)
	{
		double timeElapsedParamValue = timeElapsed;
		int returnValue = _getEmissionCount(timeElapsedParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int _getEmissionCount_Real(long pNativeObject, double timeElapsed);
	/**
	 * 获得发射器基于消耗的时间发射的粒子数
	 * @param timeElapsed 消耗的时间
	 */
	public int _getEmissionCount(double timeElapsed)
	{
		double timeElapsedParamValue = timeElapsed;
		int returnValue = _getEmissionCount_Real(this.nativeObject.pointer, timeElapsedParamValue);
		return returnValue;
	}
	native private int _getEmissionCount_Real_NoVirtual(long pNativeObject, double timeElapsed);
	protected int _getEmissionCount_NoVirtual(double timeElapsed)
	{
		double timeElapsedParamValue = timeElapsed;
		int returnValue = _getEmissionCount_Real_NoVirtual(this.nativeObject.pointer, timeElapsedParamValue);
		return returnValue;
	}

	protected  void _initParticle_CParticle_callback(long pParticle)
	{
		com.earthview.world.graphic.Particle pParticleParamValue = (pParticle == 0L ? null : new com.earthview.world.graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate));
		if(pParticleParamValue != null)
		{
		pParticleParamValue.setDelegate(true);
		pParticleParamValue.setInstancePointer(new InstancePointer(pParticle));
		IClassFactory pParticleParamValueClassFactory = GlobalClassFactoryMap.get(pParticleParamValue.getCppInstanceTypeName());
		if (pParticleParamValueClassFactory != null)
		{
			pParticleParamValue.setDelegate(true);
			pParticleParamValue = (com.earthview.world.graphic.Particle)pParticleParamValueClassFactory.create();
			pParticleParamValue.setDelegate(true);
			pParticleParamValue.setInstancePointer(new InstancePointer(pParticle));
		}
		}
		_initParticle(pParticleParamValue);
	}

	native private void _initParticle_CParticle(long pNativeObject, long pParticle);
	/**
	 * 基于发射器的方法和参数初始化粒子
	 * @param pParticle 指向粒子指针
	 */
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

	native private long getType_void(long pNativeObject);
	/**
	 * 获得发射器的名称
	 * @param  
	 */
	public StringPointer getType()
	{
		long returnValue = getType_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  void setEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled(enabledParamValue);
	}

	native private void setEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否是可用的
	 * @param enabled 打开发射器设置为true,关闭发射器设置为false
	 */
	public void setEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  boolean getEnabled_void_callback()
	{
		boolean returnValue = getEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getEnabled_void(long pNativeObject);
	/**
	 * 判断是否可用
	 * @param  
	 * @return 可用返回true，不可用返回false
	 */
	public boolean getEnabled()
	{
		boolean returnValue = getEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getEnabled_void_NoVirtual(long pNativeObject);
	protected boolean getEnabled_NoVirtual()
	{
		boolean returnValue = getEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setStartTime_Real_callback(double startTime)
	{
		double startTimeParamValue = startTime;
		setStartTime(startTimeParamValue);
	}

	native private void setStartTime_Real(long pNativeObject, double startTime);
	/**
	 * 设置发射器起始的时间
	 * @param startTime 
	 */
	public void setStartTime(double startTime)
	{
		double startTimeParamValue = startTime;
		setStartTime_Real(this.nativeObject.pointer, startTimeParamValue);
	}
	native private void setStartTime_Real_NoVirtual(long pNativeObject, double startTime);
	protected void setStartTime_NoVirtual(double startTime)
	{
		double startTimeParamValue = startTime;
		setStartTime_Real_NoVirtual(this.nativeObject.pointer, startTimeParamValue);
	}

	protected  double getStartTime_void_callback()
	{
		double returnValue = getStartTime();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getStartTime_void(long pNativeObject);
	/**
	 * 获得发射器开始的时间
	 * @param  
	 */
	public double getStartTime()
	{
		double returnValue = getStartTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getStartTime_void_NoVirtual(long pNativeObject);
	protected double getStartTime_NoVirtual()
	{
		double returnValue = getStartTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDuration_Real_callback(double duration)
	{
		double durationParamValue = duration;
		setDuration(durationParamValue);
	}

	native private void setDuration_Real(long pNativeObject, double duration);
	/**
	 * 设置发射器的持续时间
	 * @param duration 持续时间
	 */
	public void setDuration(double duration)
	{
		double durationParamValue = duration;
		setDuration_Real(this.nativeObject.pointer, durationParamValue);
	}
	native private void setDuration_Real_NoVirtual(long pNativeObject, double duration);
	protected void setDuration_NoVirtual(double duration)
	{
		double durationParamValue = duration;
		setDuration_Real_NoVirtual(this.nativeObject.pointer, durationParamValue);
	}

	protected  double getDuration_void_callback()
	{
		double returnValue = getDuration();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getDuration_void(long pNativeObject);
	/**
	 * 获得发射器的持续时间
	 * @param  
	 */
	public double getDuration()
	{
		double returnValue = getDuration_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDuration_void_NoVirtual(long pNativeObject);
	protected double getDuration_NoVirtual()
	{
		double returnValue = getDuration_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDuration_Real_Real_callback(double min, double max)
	{
		double minParamValue = min;
		double maxParamValue = max;
		setDuration(minParamValue, maxParamValue);
	}

	native private void setDuration_Real_Real(long pNativeObject, double min, double max);
	/**
	 * 设置发射器持续时间的范围
	 * @param min 最短的持续时间
	 * @param max 最长的持续时间
	 */
	public void setDuration(double min, double max)
	{
		double minParamValue = min;
		double maxParamValue = max;
		setDuration_Real_Real(this.nativeObject.pointer, minParamValue, maxParamValue);
	}
	native private void setDuration_Real_Real_NoVirtual(long pNativeObject, double min, double max);
	protected void setDuration_NoVirtual(double min, double max)
	{
		double minParamValue = min;
		double maxParamValue = max;
		setDuration_Real_Real_NoVirtual(this.nativeObject.pointer, minParamValue, maxParamValue);
	}

	protected  void setMinDuration_Real_callback(double min)
	{
		double minParamValue = min;
		setMinDuration(minParamValue);
	}

	native private void setMinDuration_Real(long pNativeObject, double min);
	/**
	 * 设置发射器最短的持续时间
	 * @param min 最短的持续时间
	 */
	public void setMinDuration(double min)
	{
		double minParamValue = min;
		setMinDuration_Real(this.nativeObject.pointer, minParamValue);
	}
	native private void setMinDuration_Real_NoVirtual(long pNativeObject, double min);
	protected void setMinDuration_NoVirtual(double min)
	{
		double minParamValue = min;
		setMinDuration_Real_NoVirtual(this.nativeObject.pointer, minParamValue);
	}

	protected  void setMaxDuration_Real_callback(double max)
	{
		double maxParamValue = max;
		setMaxDuration(maxParamValue);
	}

	native private void setMaxDuration_Real(long pNativeObject, double max);
	/**
	 * 设置发射器最长的持续时间
	 * @param max 最长的持续时间
	 */
	public void setMaxDuration(double max)
	{
		double maxParamValue = max;
		setMaxDuration_Real(this.nativeObject.pointer, maxParamValue);
	}
	native private void setMaxDuration_Real_NoVirtual(long pNativeObject, double max);
	protected void setMaxDuration_NoVirtual(double max)
	{
		double maxParamValue = max;
		setMaxDuration_Real_NoVirtual(this.nativeObject.pointer, maxParamValue);
	}

	protected  double getMinDuration_void_callback()
	{
		double returnValue = getMinDuration();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMinDuration_void(long pNativeObject);
	/**
	 * 获得发射器最短的持续时间
	 * @param  
	 */
	public double getMinDuration()
	{
		double returnValue = getMinDuration_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinDuration_void_NoVirtual(long pNativeObject);
	protected double getMinDuration_NoVirtual()
	{
		double returnValue = getMinDuration_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getMaxDuration_void_callback()
	{
		double returnValue = getMaxDuration();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMaxDuration_void(long pNativeObject);
	/**
	 * 获得发射器最长的持续时间
	 * @param  
	 */
	public double getMaxDuration()
	{
		double returnValue = getMaxDuration_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxDuration_void_NoVirtual(long pNativeObject);
	protected double getMaxDuration_NoVirtual()
	{
		double returnValue = getMaxDuration_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setRepeatDelay_Real_callback(double duration)
	{
		double durationParamValue = duration;
		setRepeatDelay(durationParamValue);
	}

	native private void setRepeatDelay_Real(long pNativeObject, double duration);
	/**
	 * 设置发射器重复发射间隔的时间
	 * @param duration 持续时间
	 */
	public void setRepeatDelay(double duration)
	{
		double durationParamValue = duration;
		setRepeatDelay_Real(this.nativeObject.pointer, durationParamValue);
	}
	native private void setRepeatDelay_Real_NoVirtual(long pNativeObject, double duration);
	protected void setRepeatDelay_NoVirtual(double duration)
	{
		double durationParamValue = duration;
		setRepeatDelay_Real_NoVirtual(this.nativeObject.pointer, durationParamValue);
	}

	protected  double getRepeatDelay_void_callback()
	{
		double returnValue = getRepeatDelay();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRepeatDelay_void(long pNativeObject);
	/**
	 * 获得发射器重复发射间隔的时间
	 * @param  
	 */
	public double getRepeatDelay()
	{
		double returnValue = getRepeatDelay_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRepeatDelay_void_NoVirtual(long pNativeObject);
	protected double getRepeatDelay_NoVirtual()
	{
		double returnValue = getRepeatDelay_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setRepeatDelay_Real_Real_callback(double min, double max)
	{
		double minParamValue = min;
		double maxParamValue = max;
		setRepeatDelay(minParamValue, maxParamValue);
	}

	native private void setRepeatDelay_Real_Real(long pNativeObject, double min, double max);
	/**
	 * 设置发射器重复发射间隔时间的范围
	 * @param min 最短的间隔时间
	 * @param max 最长的间隔时间
	 */
	public void setRepeatDelay(double min, double max)
	{
		double minParamValue = min;
		double maxParamValue = max;
		setRepeatDelay_Real_Real(this.nativeObject.pointer, minParamValue, maxParamValue);
	}
	native private void setRepeatDelay_Real_Real_NoVirtual(long pNativeObject, double min, double max);
	protected void setRepeatDelay_NoVirtual(double min, double max)
	{
		double minParamValue = min;
		double maxParamValue = max;
		setRepeatDelay_Real_Real_NoVirtual(this.nativeObject.pointer, minParamValue, maxParamValue);
	}

	protected  void setMinRepeatDelay_Real_callback(double min)
	{
		double minParamValue = min;
		setMinRepeatDelay(minParamValue);
	}

	native private void setMinRepeatDelay_Real(long pNativeObject, double min);
	/**
	 * 设置发射器重复发射的最间隔时间
	 * @param min 最短的间隔时间
	 */
	public void setMinRepeatDelay(double min)
	{
		double minParamValue = min;
		setMinRepeatDelay_Real(this.nativeObject.pointer, minParamValue);
	}
	native private void setMinRepeatDelay_Real_NoVirtual(long pNativeObject, double min);
	protected void setMinRepeatDelay_NoVirtual(double min)
	{
		double minParamValue = min;
		setMinRepeatDelay_Real_NoVirtual(this.nativeObject.pointer, minParamValue);
	}

	protected  void setMaxRepeatDelay_Real_callback(double max)
	{
		double maxParamValue = max;
		setMaxRepeatDelay(maxParamValue);
	}

	native private void setMaxRepeatDelay_Real(long pNativeObject, double max);
	/**
	 * 设置发射器重复发射的最长的间隔时间
	 * @param min 最长的间隔时间
	 */
	public void setMaxRepeatDelay(double max)
	{
		double maxParamValue = max;
		setMaxRepeatDelay_Real(this.nativeObject.pointer, maxParamValue);
	}
	native private void setMaxRepeatDelay_Real_NoVirtual(long pNativeObject, double max);
	protected void setMaxRepeatDelay_NoVirtual(double max)
	{
		double maxParamValue = max;
		setMaxRepeatDelay_Real_NoVirtual(this.nativeObject.pointer, maxParamValue);
	}

	protected  double getMinRepeatDelay_void_callback()
	{
		double returnValue = getMinRepeatDelay();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMinRepeatDelay_void(long pNativeObject);
	/**
	 * 获得发射器重复发射的最短的间隔时间
	 * @param  
	 */
	public double getMinRepeatDelay()
	{
		double returnValue = getMinRepeatDelay_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinRepeatDelay_void_NoVirtual(long pNativeObject);
	protected double getMinRepeatDelay_NoVirtual()
	{
		double returnValue = getMinRepeatDelay_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getMaxRepeatDelay_void_callback()
	{
		double returnValue = getMaxRepeatDelay();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMaxRepeatDelay_void(long pNativeObject);
	/// <summary>
	/// 获得发射器重复发射的最长的间隔时间
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns
	public double getMaxRepeatDelay()
	{
		double returnValue = getMaxRepeatDelay_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxRepeatDelay_void_NoVirtual(long pNativeObject);
	protected double getMaxRepeatDelay_NoVirtual()
	{
		double returnValue = getMaxRepeatDelay_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获得发射器的名称
	 * @param  
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  void setName_EVString_callback(String newName)
	{
		String newNameParamValue = newName;
		setName(newNameParamValue);
	}

	native private void setName_EVString(long pNativeObject, String newName);
	/**
	 * 设置发射器的名称
	 * @param  
	 */
	public void setName(String newName)
	{
		String newNameParamValue = newName;
		setName_EVString(this.nativeObject.pointer, newNameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String newName);
	protected void setName_NoVirtual(String newName)
	{
		String newNameParamValue = newName;
		setName_EVString_NoVirtual(this.nativeObject.pointer, newNameParamValue);
	}

	native private long getEmittedEmitter_void(long pNativeObject);
	/**
	 * 获得发射粒子的发射器名称
	 * @param  
	 */
	public StringPointer getEmittedEmitter()
	{
		long returnValue = getEmittedEmitter_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  void setEmittedEmitter_EVString_callback(String emittedEmitter)
	{
		String emittedEmitterParamValue = emittedEmitter;
		setEmittedEmitter(emittedEmitterParamValue);
	}

	native private void setEmittedEmitter_EVString(long pNativeObject, String emittedEmitter);
	/**
	 * 设置发射粒子的发射器名称
	 * @param emittedEmitter 发射器的名称
	 */
	public void setEmittedEmitter(String emittedEmitter)
	{
		String emittedEmitterParamValue = emittedEmitter;
		setEmittedEmitter_EVString(this.nativeObject.pointer, emittedEmitterParamValue);
	}
	native private void setEmittedEmitter_EVString_NoVirtual(long pNativeObject, String emittedEmitter);
	protected void setEmittedEmitter_NoVirtual(String emittedEmitter)
	{
		String emittedEmitterParamValue = emittedEmitter;
		setEmittedEmitter_EVString_NoVirtual(this.nativeObject.pointer, emittedEmitterParamValue);
	}

	protected  boolean isEmitted_void_callback()
	{
		boolean returnValue = isEmitted();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isEmitted_void(long pNativeObject);
	/**
	 * 判断发射器是否被另一个发射器发射
	 * @param  
	 * @return 如果被另一个发射器发射返回ture，否则返回false
	 */
	public boolean isEmitted()
	{
		boolean returnValue = isEmitted_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEmitted_void_NoVirtual(long pNativeObject);
	protected boolean isEmitted_NoVirtual()
	{
		boolean returnValue = isEmitted_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setEmitted_ev_bool_callback(boolean emitted)
	{
		boolean emittedParamValue = emitted;
		setEmitted(emittedParamValue);
	}

	native private void setEmitted_ev_bool(long pNativeObject, boolean emitted);
	/**
	 * 设置发射器是否被另一个发射器发射
	 * @param emitted 
	 */
	public void setEmitted(boolean emitted)
	{
		boolean emittedParamValue = emitted;
		setEmitted_ev_bool(this.nativeObject.pointer, emittedParamValue);
	}
	native private void setEmitted_ev_bool_NoVirtual(long pNativeObject, boolean emitted);
	protected void setEmitted_NoVirtual(boolean emitted)
	{
		boolean emittedParamValue = emitted;
		setEmitted_ev_bool_NoVirtual(this.nativeObject.pointer, emittedParamValue);
	}

	public ParticleEmitter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleEmitter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static ParticleEmitter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleEmitter obj = null;
 		if(baseObj instanceof ParticleEmitter)
		{
			obj = (ParticleEmitter)baseObj;
		} else {
			obj = new ParticleEmitter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticleEmitter");
			obj.increaseCast();
		}

		return obj;
	}
}
