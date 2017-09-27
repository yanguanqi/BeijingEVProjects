/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			public class MeshxgLayerEditor : EarthView.World.Spatial3D.Layer3DEditor
			{
				/// <summary>
				///  构造函数
				/// </summary>
				/// <returns></returns>
				public MeshxgLayerEditor() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CMeshxgLayerEditorProxy", null);
					if (!"EarthView.World.Spatial3D.MeshxgLayerEditor".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3D_CMeshxgLayerEditor_startEditing_ev_bool_ev_bool_NoVirtual(IntPtr pNativeObject, byte withUndo);

				/// <summary>
				///  开始编辑
				/// <param name="withUndo">是否支持撤消</param>
				/// </summary>
				/// <returns></returns>
				public new bool StartEditing_NoVirtual(bool withUndo)
				{
					byte ret=EarthView_World_Spatial3D_CMeshxgLayerEditor_startEditing_ev_bool_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(withUndo));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3D_CMeshxgLayerEditor_startEditing_ev_bool_ev_bool(IntPtr pNativeObject, byte withUndo);

				/// <summary>
				///  开始编辑
				/// <param name="withUndo">是否支持撤消</param>
				/// </summary>
				/// <returns></returns>
				public override bool StartEditing(bool withUndo)
				{
					byte ret=EarthView_World_Spatial3D_CMeshxgLayerEditor_startEditing_ev_bool_ev_bool(this.NativeObject, Convert.ToByte(withUndo));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CMeshxgLayerEditor_stopEditing_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte isSave);

				/// <summary>
				///  停止编辑
				/// <param name="isSave">是否保存</param>
				/// </summary>
				/// <returns></returns>
				public new void StopEditing_NoVirtual(bool isSave)
				{
					EarthView_World_Spatial3D_CMeshxgLayerEditor_stopEditing_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(isSave));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CMeshxgLayerEditor_stopEditing_void_ev_bool(IntPtr pNativeObject, byte isSave);

				/// <summary>
				///  停止编辑
				/// <param name="isSave">是否保存</param>
				/// </summary>
				/// <returns></returns>
				public override void StopEditing(bool isSave)
				{
					EarthView_World_Spatial3D_CMeshxgLayerEditor_stopEditing_void_ev_bool(this.NativeObject, Convert.ToByte(isSave));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CMeshxgLayerEditor_saveEditing_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				///  保存
				/// </summary>
				/// <returns></returns>
				public new void SaveEditing_NoVirtual()
				{
					EarthView_World_Spatial3D_CMeshxgLayerEditor_saveEditing_void_NoVirtual(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3D_CMeshxgLayerEditor_saveEditing_void(IntPtr pNativeObject);

				/// <summary>
				///  保存
				/// </summary>
				/// <returns></returns>
				public override void SaveEditing()
				{
					EarthView_World_Spatial3D_CMeshxgLayerEditor_saveEditing_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate uint addLayerObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(ref IntPtr meshxfile, double lat, double lon, double alt, IntPtr localScale, IntPtr localOrientation, IntPtr propertyVal);

				protected addLayerObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet m_addLayerObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial3D_CMeshxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_NoVirtual(IntPtr pNativeObject, string meshxfile, double lat, double lon, double alt, IntPtr localScale, IntPtr localOrientation, IntPtr propertyVal);

				/// <summary>
				///  添加一个可见对象
				/// <param name="meshxfile">绝对路径</param>
				/// <param name="lat">纬度</param>
				/// <param name="lon">纬度</param>
				/// <param name="alt">纬度</param>
				/// <param name="localScale">纬度</param>
				/// <param name="localOriation">纬度</param>
				/// <param name="propertyVal">属性键值对，与创建数据集时扩展属性对应。注意：propertyVal键与meshxgdatasource->createDataset时attrFields参数相同，代表扩展属性</param>
				/// </summary>
				/// <returns>返回ID是临时ID，与该模型保存后的ID不同，可以通过监听器CLayer3DEditorListener监听(onInsertMeshxg)提交后ID与这个ID关系</returns>
				public virtual uint AddLayerObject_NoVirtual(string meshxfile, double lat, double lon, double alt, EarthView.World.Spatial.Math.Vector3 localScale, EarthView.World.Spatial.Math.Quaternion localOrientation, ref EarthView.World.Spatial.GeoDataset.PropertySet propertyVal)
				{
					uint ret=EarthView_World_Spatial3D_CMeshxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_NoVirtual(this.NativeObject, meshxfile, lat, lon, alt, object.Equals(localScale, null) ? IntPtr.Zero : localScale.NativeObject, object.Equals(localOrientation, null) ? IntPtr.Zero : localOrientation.NativeObject, object.Equals(propertyVal, null) ? IntPtr.Zero : propertyVal.NativeObject);
					
					return ret;
					
				}

				protected  uint EarthView_World_Spatial3D_CMeshxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Function(ref IntPtr meshxfile, double lat, double lon, double alt, IntPtr localScale, IntPtr localOrientation, IntPtr propertyVal)
				{
					string strmeshxfile= Marshal.PtrToStringAnsi(meshxfile);
					ClassFactory.FreeString(ref meshxfile);
					EarthView.World.Spatial.Math.Vector3 csobj_localScale = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_localScale.BindNativeObject(localScale,"CVector3");
					csobj_localScale.Delegate = true;
					IClassFactory csobj_localScaleClassFactory = GlobalClassFactoryMap.Get(csobj_localScale.GetCppInstanceTypeName());
					if (csobj_localScaleClassFactory != null)
					{
						csobj_localScale.Delegate = true;
						csobj_localScale = csobj_localScaleClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csobj_localScale.BindNativeObject(localScale, "CVector3");
						csobj_localScale.Delegate = true;
					}
					EarthView.World.Spatial.Math.Quaternion csobj_localOrientation = new EarthView.World.Spatial.Math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_localOrientation.BindNativeObject(localOrientation,"CQuaternion");
					csobj_localOrientation.Delegate = true;
					IClassFactory csobj_localOrientationClassFactory = GlobalClassFactoryMap.Get(csobj_localOrientation.GetCppInstanceTypeName());
					if (csobj_localOrientationClassFactory != null)
					{
						csobj_localOrientation.Delegate = true;
						csobj_localOrientation = csobj_localOrientationClassFactory.Create() as EarthView.World.Spatial.Math.Quaternion;
						csobj_localOrientation.BindNativeObject(localOrientation, "CQuaternion");
						csobj_localOrientation.Delegate = true;
					}
					EarthView.World.Spatial.GeoDataset.PropertySet csobj_propertyVal = new EarthView.World.Spatial.GeoDataset.PropertySet(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_propertyVal.BindNativeObject(propertyVal,"CPropertySet");
					csobj_propertyVal.Delegate = true;
					IClassFactory csobj_propertyValClassFactory = GlobalClassFactoryMap.Get(csobj_propertyVal.GetCppInstanceTypeName());
					if (csobj_propertyValClassFactory != null)
					{
						csobj_propertyVal.Delegate = true;
						csobj_propertyVal = csobj_propertyValClassFactory.Create() as EarthView.World.Spatial.GeoDataset.PropertySet;
						csobj_propertyVal.BindNativeObject(propertyVal, "CPropertySet");
						csobj_propertyVal.Delegate = true;
					}
					
					uint csret=AddLayerObject(strmeshxfile,lat, lon, alt, csobj_localScale, csobj_localOrientation, ref csobj_propertyVal);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial3D_CMeshxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(IntPtr pNativeObject, string meshxfile, double lat, double lon, double alt, IntPtr localScale, IntPtr localOrientation, IntPtr propertyVal);

				/// <summary>
				///  添加一个可见对象
				/// <param name="meshxfile">绝对路径</param>
				/// <param name="lat">纬度</param>
				/// <param name="lon">纬度</param>
				/// <param name="alt">纬度</param>
				/// <param name="localScale">纬度</param>
				/// <param name="localOriation">纬度</param>
				/// <param name="propertyVal">属性键值对，与创建数据集时扩展属性对应。注意：propertyVal键与meshxgdatasource->createDataset时attrFields参数相同，代表扩展属性</param>
				/// </summary>
				/// <returns>返回ID是临时ID，与该模型保存后的ID不同，可以通过监听器CLayer3DEditorListener监听(onInsertMeshxg)提交后ID与这个ID关系</returns>
				public virtual uint AddLayerObject(string meshxfile, double lat, double lon, double alt, EarthView.World.Spatial.Math.Vector3 localScale, EarthView.World.Spatial.Math.Quaternion localOrientation, ref EarthView.World.Spatial.GeoDataset.PropertySet propertyVal)
				{
					uint ret=EarthView_World_Spatial3D_CMeshxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(this.NativeObject, meshxfile, lat, lon, alt, object.Equals(localScale, null) ? IntPtr.Zero : localScale.NativeObject, object.Equals(localOrientation, null) ? IntPtr.Zero : localOrientation.NativeObject, object.Equals(propertyVal, null) ? IntPtr.Zero : propertyVal.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate uint addInstanceObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(ref IntPtr meshxfile, double lat, double lon, double alt, IntPtr localScale, IntPtr localOrientation, IntPtr propertyVal);

				protected addInstanceObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet m_addInstanceObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial3D_CMeshxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_NoVirtual(IntPtr pNativeObject, string meshxfile, double lat, double lon, double alt, IntPtr localScale, IntPtr localOrientation, IntPtr propertyVal);

				/// <summary>
				/// 添加复用对象，同样的meshx放在不同位置，最后数据集存储只有一份
				/// </summary>
				/// <returns>返回ID是临时ID，与该模型保存后的ID不同，可以通过监听器CLayer3DEditorListener监听(onInsertMeshxg)提交后ID与这个ID关系</returns>
				public virtual uint AddInstanceObject_NoVirtual(string meshxfile, double lat, double lon, double alt, EarthView.World.Spatial.Math.Vector3 localScale, EarthView.World.Spatial.Math.Quaternion localOrientation, ref EarthView.World.Spatial.GeoDataset.PropertySet propertyVal)
				{
					uint ret=EarthView_World_Spatial3D_CMeshxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_NoVirtual(this.NativeObject, meshxfile, lat, lon, alt, object.Equals(localScale, null) ? IntPtr.Zero : localScale.NativeObject, object.Equals(localOrientation, null) ? IntPtr.Zero : localOrientation.NativeObject, object.Equals(propertyVal, null) ? IntPtr.Zero : propertyVal.NativeObject);
					
					return ret;
					
				}

				protected  uint EarthView_World_Spatial3D_CMeshxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Function(ref IntPtr meshxfile, double lat, double lon, double alt, IntPtr localScale, IntPtr localOrientation, IntPtr propertyVal)
				{
					string strmeshxfile= Marshal.PtrToStringAnsi(meshxfile);
					ClassFactory.FreeString(ref meshxfile);
					EarthView.World.Spatial.Math.Vector3 csobj_localScale = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_localScale.BindNativeObject(localScale,"CVector3");
					csobj_localScale.Delegate = true;
					IClassFactory csobj_localScaleClassFactory = GlobalClassFactoryMap.Get(csobj_localScale.GetCppInstanceTypeName());
					if (csobj_localScaleClassFactory != null)
					{
						csobj_localScale.Delegate = true;
						csobj_localScale = csobj_localScaleClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csobj_localScale.BindNativeObject(localScale, "CVector3");
						csobj_localScale.Delegate = true;
					}
					EarthView.World.Spatial.Math.Quaternion csobj_localOrientation = new EarthView.World.Spatial.Math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_localOrientation.BindNativeObject(localOrientation,"CQuaternion");
					csobj_localOrientation.Delegate = true;
					IClassFactory csobj_localOrientationClassFactory = GlobalClassFactoryMap.Get(csobj_localOrientation.GetCppInstanceTypeName());
					if (csobj_localOrientationClassFactory != null)
					{
						csobj_localOrientation.Delegate = true;
						csobj_localOrientation = csobj_localOrientationClassFactory.Create() as EarthView.World.Spatial.Math.Quaternion;
						csobj_localOrientation.BindNativeObject(localOrientation, "CQuaternion");
						csobj_localOrientation.Delegate = true;
					}
					EarthView.World.Spatial.GeoDataset.PropertySet csobj_propertyVal = new EarthView.World.Spatial.GeoDataset.PropertySet(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_propertyVal.BindNativeObject(propertyVal,"CPropertySet");
					csobj_propertyVal.Delegate = true;
					IClassFactory csobj_propertyValClassFactory = GlobalClassFactoryMap.Get(csobj_propertyVal.GetCppInstanceTypeName());
					if (csobj_propertyValClassFactory != null)
					{
						csobj_propertyVal.Delegate = true;
						csobj_propertyVal = csobj_propertyValClassFactory.Create() as EarthView.World.Spatial.GeoDataset.PropertySet;
						csobj_propertyVal.BindNativeObject(propertyVal, "CPropertySet");
						csobj_propertyVal.Delegate = true;
					}
					
					uint csret=AddInstanceObject(strmeshxfile,lat, lon, alt, csobj_localScale, csobj_localOrientation, ref csobj_propertyVal);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Spatial3D_CMeshxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(IntPtr pNativeObject, string meshxfile, double lat, double lon, double alt, IntPtr localScale, IntPtr localOrientation, IntPtr propertyVal);

				/// <summary>
				/// 添加复用对象，同样的meshx放在不同位置，最后数据集存储只有一份
				/// </summary>
				/// <returns>返回ID是临时ID，与该模型保存后的ID不同，可以通过监听器CLayer3DEditorListener监听(onInsertMeshxg)提交后ID与这个ID关系</returns>
				public virtual uint AddInstanceObject(string meshxfile, double lat, double lon, double alt, EarthView.World.Spatial.Math.Vector3 localScale, EarthView.World.Spatial.Math.Quaternion localOrientation, ref EarthView.World.Spatial.GeoDataset.PropertySet propertyVal)
				{
					uint ret=EarthView_World_Spatial3D_CMeshxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(this.NativeObject, meshxfile, lat, lon, alt, object.Equals(localScale, null) ? IntPtr.Zero : localScale.NativeObject, object.Equals(localOrientation, null) ? IntPtr.Zero : localOrientation.NativeObject, object.Equals(propertyVal, null) ? IntPtr.Zero : propertyVal.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte changeObjectPosition_CallBack_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(uint id, double lat, double lon, double alt, IntPtr localScale, IntPtr localOrientation);

				protected changeObjectPosition_CallBack_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion m_changeObjectPosition_CallBack_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3D_CMeshxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(IntPtr pNativeObject, uint id, double lat, double lon, double alt, IntPtr localScale, IntPtr localOrientation);

				/// <summary>
				///  改变模型姿态
				/// <param name="id">图层中模型ID</param>
				/// <param name="lat">纬度</param>
				/// <param name="lon">纬度</param>
				/// <param name="alt">纬度</param>
				/// <param name="localScale">纬度</param>
				/// <param name="localOriation">纬度</param>
				/// </summary>
				/// <returns></returns>
				public virtual bool ChangeObjectPosition_NoVirtual(uint id, double lat, double lon, double alt, EarthView.World.Spatial.Math.Vector3 localScale, EarthView.World.Spatial.Math.Quaternion localOrientation)
				{
					byte ret=EarthView_World_Spatial3D_CMeshxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(this.NativeObject, id, lat, lon, alt, object.Equals(localScale, null) ? IntPtr.Zero : localScale.NativeObject, object.Equals(localOrientation, null) ? IntPtr.Zero : localOrientation.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Spatial3D_CMeshxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Function(uint id, double lat, double lon, double alt, IntPtr localScale, IntPtr localOrientation)
				{
					EarthView.World.Spatial.Math.Vector3 csobj_localScale = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_localScale.BindNativeObject(localScale,"CVector3");
					csobj_localScale.Delegate = true;
					IClassFactory csobj_localScaleClassFactory = GlobalClassFactoryMap.Get(csobj_localScale.GetCppInstanceTypeName());
					if (csobj_localScaleClassFactory != null)
					{
						csobj_localScale.Delegate = true;
						csobj_localScale = csobj_localScaleClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csobj_localScale.BindNativeObject(localScale, "CVector3");
						csobj_localScale.Delegate = true;
					}
					EarthView.World.Spatial.Math.Quaternion csobj_localOrientation = new EarthView.World.Spatial.Math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_localOrientation.BindNativeObject(localOrientation,"CQuaternion");
					csobj_localOrientation.Delegate = true;
					IClassFactory csobj_localOrientationClassFactory = GlobalClassFactoryMap.Get(csobj_localOrientation.GetCppInstanceTypeName());
					if (csobj_localOrientationClassFactory != null)
					{
						csobj_localOrientation.Delegate = true;
						csobj_localOrientation = csobj_localOrientationClassFactory.Create() as EarthView.World.Spatial.Math.Quaternion;
						csobj_localOrientation.BindNativeObject(localOrientation, "CQuaternion");
						csobj_localOrientation.Delegate = true;
					}
					
					bool csret=ChangeObjectPosition(id, lat, lon, alt, csobj_localScale, csobj_localOrientation);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3D_CMeshxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(IntPtr pNativeObject, uint id, double lat, double lon, double alt, IntPtr localScale, IntPtr localOrientation);

				/// <summary>
				///  改变模型姿态
				/// <param name="id">图层中模型ID</param>
				/// <param name="lat">纬度</param>
				/// <param name="lon">纬度</param>
				/// <param name="alt">纬度</param>
				/// <param name="localScale">纬度</param>
				/// <param name="localOriation">纬度</param>
				/// </summary>
				/// <returns></returns>
				public virtual bool ChangeObjectPosition(uint id, double lat, double lon, double alt, EarthView.World.Spatial.Math.Vector3 localScale, EarthView.World.Spatial.Math.Quaternion localOrientation)
				{
					byte ret=EarthView_World_Spatial3D_CMeshxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.NativeObject, id, lat, lon, alt, object.Equals(localScale, null) ? IntPtr.Zero : localScale.NativeObject, object.Equals(localOrientation, null) ? IntPtr.Zero : localOrientation.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3D_CMeshxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32_NoVirtual(IntPtr pNativeObject, uint id);

				/// <summary>
				///  删除对象
				/// </summary>
				/// <param name="id">图层中的ID</param>
				/// <returns></returns>
				public new bool DeleteLayerObject_NoVirtual(uint id)
				{
					byte ret=EarthView_World_Spatial3D_CMeshxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32_NoVirtual(this.NativeObject, id);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3D_CMeshxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32(IntPtr pNativeObject, uint id);

				/// <summary>
				///  删除对象
				/// </summary>
				/// <param name="id">图层中的ID</param>
				/// <returns></returns>
				public override bool DeleteLayerObject(uint id)
				{
					byte ret=EarthView_World_Spatial3D_CMeshxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32(this.NativeObject, id);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadMeshxgLayerEditor = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadMeshxgLayerEditor = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadMeshxgLayerEditor = LoadDll.Load("EV_Spatial3DEngine_d.so");
						private static bool csbLoadMeshxgLayerEditor = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

					#else 
						private static bool bLoadMeshxgLayerEditor = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadMeshxgLayerEditor = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadMeshxgLayerEditor = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadMeshxgLayerEditor = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#elif Linux 
						private static bool bLoadMeshxgLayerEditor = LoadDll.Load("EV_Spatial3DEngine.so");
						private static bool csbLoadMeshxgLayerEditor = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

					#else 
						private static bool bLoadMeshxgLayerEditor = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadMeshxgLayerEditor = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CMeshxgLayerEditor", new MeshxgLayerEditorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CMeshxgLayerEditorProxy", new MeshxgLayerEditorClassFactory());

				public MeshxgLayerEditor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(IntPtr pObject, addLayerObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(IntPtr pObject, addInstanceObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(IntPtr pObject, changeObjectPosition_CallBack_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_setEditingLayer_void_IGlobeLayer(IntPtr pObject, setEditingLayer_CallBack_void_IGlobeLayer pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_getEditingLayer_IGlobeLayer(IntPtr pObject, getEditingLayer_CallBack_IGlobeLayer pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_startEditing_ev_bool_ev_bool(IntPtr pObject, startEditing_CallBack_ev_bool_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_stopEditing_void_ev_bool(IntPtr pObject, stopEditing_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_saveEditing_void(IntPtr pObject, saveEditing_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_isEditing_ev_bool(IntPtr pObject, isEditing_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_redo_ev_bool(IntPtr pObject, redo_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_undo_ev_bool(IntPtr pObject, undo_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_canRedo_ev_bool(IntPtr pObject, canRedo_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_canUndo_ev_bool(IntPtr pObject, canUndo_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(IntPtr pObject, addLayerObject_CallBack_ev_uint32_ev_uint32_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(IntPtr pObject, changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32(IntPtr pObject, deleteLayerObject_CallBack_ev_bool_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_addListener_void_CLayer3DEditorListener(IntPtr pObject, addListener_CallBack_void_CLayer3DEditorListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_removeListener_void_CLayer3DEditorListener(IntPtr pObject, removeListener_CallBack_void_CLayer3DEditorListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32(IntPtr pObject, getListener_CallBack_CLayer3DEditorListener_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_getNumListener_ev_uint32(IntPtr pObject, getNumListener_CallBack_ev_uint32 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_addLayerObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet = EarthView_World_Spatial3D_CMeshxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Function;
						GC.KeepAlive(m_addLayerObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_addLayerObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(this.NativeObject, m_addLayerObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet);
						m_addInstanceObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet = EarthView_World_Spatial3D_CMeshxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_Function;
						GC.KeepAlive(m_addInstanceObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_addInstanceObject_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(this.NativeObject, m_addInstanceObject_CallBack_ev_uint32_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet);
						m_changeObjectPosition_CallBack_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion = EarthView_World_Spatial3D_CMeshxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Function;
						GC.KeepAlive(m_changeObjectPosition_CallBack_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_changeObjectPosition_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.NativeObject, m_changeObjectPosition_CallBack_ev_bool_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion);
						m_setEditingLayer_CallBack_void_IGlobeLayer = EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer_Function;
						GC.KeepAlive(m_setEditingLayer_CallBack_void_IGlobeLayer);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_setEditingLayer_void_IGlobeLayer(this.NativeObject, m_setEditingLayer_CallBack_void_IGlobeLayer);
						m_getEditingLayer_CallBack_IGlobeLayer = EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer_Function;
						GC.KeepAlive(m_getEditingLayer_CallBack_IGlobeLayer);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_getEditingLayer_IGlobeLayer(this.NativeObject, m_getEditingLayer_CallBack_IGlobeLayer);
						m_startEditing_CallBack_ev_bool_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool_Function;
						GC.KeepAlive(m_startEditing_CallBack_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_startEditing_ev_bool_ev_bool(this.NativeObject, m_startEditing_CallBack_ev_bool_ev_bool);
						m_stopEditing_CallBack_void_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool_Function;
						GC.KeepAlive(m_stopEditing_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_stopEditing_void_ev_bool(this.NativeObject, m_stopEditing_CallBack_void_ev_bool);
						m_saveEditing_CallBack_void = EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void_Function;
						GC.KeepAlive(m_saveEditing_CallBack_void);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_saveEditing_void(this.NativeObject, m_saveEditing_CallBack_void);
						m_isEditing_CallBack_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool_Function;
						GC.KeepAlive(m_isEditing_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_isEditing_ev_bool(this.NativeObject, m_isEditing_CallBack_ev_bool);
						m_redo_CallBack_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool_Function;
						GC.KeepAlive(m_redo_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_redo_ev_bool(this.NativeObject, m_redo_CallBack_ev_bool);
						m_undo_CallBack_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool_Function;
						GC.KeepAlive(m_undo_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_undo_ev_bool(this.NativeObject, m_undo_CallBack_ev_bool);
						m_canRedo_CallBack_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool_Function;
						GC.KeepAlive(m_canRedo_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_canRedo_ev_bool(this.NativeObject, m_canRedo_CallBack_ev_bool);
						m_canUndo_CallBack_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool_Function;
						GC.KeepAlive(m_canUndo_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_canUndo_ev_bool(this.NativeObject, m_canUndo_CallBack_ev_bool);
						m_addLayerObject_CallBack_ev_uint32_ev_uint32_CMatrix4 = EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Function;
						GC.KeepAlive(m_addLayerObject_CallBack_ev_uint32_ev_uint32_CMatrix4);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(this.NativeObject, m_addLayerObject_CallBack_ev_uint32_ev_uint32_CMatrix4);
						m_changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4 = EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Function;
						GC.KeepAlive(m_changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(this.NativeObject, m_changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4);
						m_deleteLayerObject_CallBack_ev_bool_ev_uint32 = EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32_Function;
						GC.KeepAlive(m_deleteLayerObject_CallBack_ev_bool_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_deleteLayerObject_ev_bool_ev_uint32(this.NativeObject, m_deleteLayerObject_CallBack_ev_bool_ev_uint32);
						m_addListener_CallBack_void_CLayer3DEditorListener = EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener_Function;
						GC.KeepAlive(m_addListener_CallBack_void_CLayer3DEditorListener);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_addListener_void_CLayer3DEditorListener(this.NativeObject, m_addListener_CallBack_void_CLayer3DEditorListener);
						m_removeListener_CallBack_void_CLayer3DEditorListener = EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener_Function;
						GC.KeepAlive(m_removeListener_CallBack_void_CLayer3DEditorListener);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_removeListener_void_CLayer3DEditorListener(this.NativeObject, m_removeListener_CallBack_void_CLayer3DEditorListener);
						m_getListener_CallBack_CLayer3DEditorListener_ev_uint32 = EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32_Function;
						GC.KeepAlive(m_getListener_CallBack_CLayer3DEditorListener_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_getListener_CLayer3DEditorListener_ev_uint32(this.NativeObject, m_getListener_CallBack_CLayer3DEditorListener_ev_uint32);
						m_getNumListener_CallBack_ev_uint32 = EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32_Function;
						GC.KeepAlive(m_getNumListener_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3D_CMeshxgLayerEditor_getNumListener_ev_uint32(this.NativeObject, m_getNumListener_CallBack_ev_uint32);
					}
				}
				public override void SetEditingLayer(EarthView.World.Spatial3D.Atlas.Iglobelayer ref_layer)
				{
					base.SetEditingLayer_NoVirtual(ref_layer);
				}
				public override EarthView.World.Spatial3D.Atlas.Iglobelayer GetEditingLayer()
				{
					return base.GetEditingLayer_NoVirtual();
				}
				public override bool IsEditing()
				{
					return base.IsEditing_NoVirtual();
				}
				public override bool Redo()
				{
					return base.Redo_NoVirtual();
				}
				public override bool Undo()
				{
					return base.Undo_NoVirtual();
				}
				public override bool CanRedo()
				{
					return base.CanRedo_NoVirtual();
				}
				public override bool CanUndo()
				{
					return base.CanUndo_NoVirtual();
				}
				public override uint AddLayerObject(uint id, EarthView.World.Spatial.Math.Matrix4 matrix)
				{
					return base.AddLayerObject_NoVirtual(id,matrix);
				}
				public override bool ChangeObjectPosition(ref EarthView.World.Geometry3D.VisibleObjectPtr objPtr, EarthView.World.Spatial.Math.Matrix4 nwMatrix)
				{
					return base.ChangeObjectPosition_NoVirtual(ref objPtr,nwMatrix);
				}
				public override void AddListener(EarthView.World.Spatial3D.Layer3DEditorListener lis)
				{
					base.AddListener_NoVirtual(lis);
				}
				public override void RemoveListener(EarthView.World.Spatial3D.Layer3DEditorListener lis)
				{
					base.RemoveListener_NoVirtual(lis);
				}
				public override EarthView.World.Spatial3D.Layer3DEditorListener GetListener(uint index)
				{
					return base.GetListener_NoVirtual(index);
				}
				public override uint GetNumListener()
				{
					return base.GetNumListener_NoVirtual();
				}
				public static MeshxgLayerEditor FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					MeshxgLayerEditor obj = baseObj as  MeshxgLayerEditor;
					if (object.Equals(obj, null))
					{
						obj = new MeshxgLayerEditor(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CMeshxgLayerEditor");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class MeshxgLayerEditorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					MeshxgLayerEditor emptyInstance = new MeshxgLayerEditor(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
