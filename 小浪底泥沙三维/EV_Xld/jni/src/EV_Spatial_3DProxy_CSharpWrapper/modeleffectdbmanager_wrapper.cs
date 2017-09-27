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
		namespace Spatial3DProxy
		{
			public class ModelEffectDBManager : EarthView.World.Core.AllocatedObject
			{
				private EarthView.World.Graphic.RenderWindow mpRenderWindowField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_World_Spatial3DProxy_CModelEffectDBManager_mpRenderWindow(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Spatial3DProxy_CModelEffectDBManager_mpRenderWindow( IntPtr pObject, IntPtr value );

				public 				EarthView.World.Graphic.RenderWindow MpRenderWindow
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Spatial3DProxy_CModelEffectDBManager_mpRenderWindow(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						if(!object.Equals(mpRenderWindowField, null)){
							mpRenderWindowField.NativeObject = __ptr;
							return mpRenderWindowField;
						}
						EarthView.World.Graphic.RenderWindow csObj = new EarthView.World.Graphic.RenderWindow(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderWindow");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderWindow;
							csObj.BindNativeObject(__ptr, "CRenderWindow");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					set
					{
						mpRenderWindowField = value;
						Set_EarthView_World_Spatial3DProxy_CModelEffectDBManager_mpRenderWindow( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
					}
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_pDataSource">数据源句柄</param>
				/// <returns></returns>
				public ModelEffectDBManager(EarthView.World.Spatial3D.Dataset.ModelDataSource ref_pDataSource) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_pDataSource = new BasePtr(ref_pDataSource);
					list.Add("ref_pDataSource", valueref_pDataSource.PtrVal);
					Create("CModelEffectDBManager", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CModelEffectDBManager_setModelDataSource_void_CModelDataSource(IntPtr pNativeObject, IntPtr ref_pDatasource);

				/// <summary>
				/// 设置模型数据源
				/// </summary>
				/// <param name="ref_pDatasource">数据源句柄</param>
				/// <returns></returns>
				public void SetModelDataSource(EarthView.World.Spatial3D.Dataset.ModelDataSource ref_pDatasource)
				{
					EarthView_World_Spatial3DProxy_CModelEffectDBManager_setModelDataSource_void_CModelDataSource(this.NativeObject, object.Equals(ref_pDatasource, null) ? IntPtr.Zero : ref_pDatasource.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_import_ev_bool_CModelDataSource_CModelDataSource_CModelPublishToolListener_ev_bool_ev_bool(IntPtr pNativeObject, IntPtr src, IntPtr dest, IntPtr listener, byte bClear, byte bCoverOrInstead);

				/////*************************************导入导出接口***************************************//////
				/// <summary>
				/// 模型导入函数
				/// </summary>
				/// <param name="src">源数据源</param>
				/// <param name="dest">目标数据源</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <returns></returns>
				public bool Import(EarthView.World.Spatial3D.Dataset.ModelDataSource src, EarthView.World.Spatial3D.Dataset.ModelDataSource dest, EarthView.World.Spatial3D.ModelPublishToolListener listener, bool bClear, bool bCoverOrInstead)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_import_ev_bool_CModelDataSource_CModelDataSource_CModelPublishToolListener_ev_bool_ev_bool(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dest, null) ? IntPtr.Zero : dest.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject, Convert.ToByte(bClear), Convert.ToByte(bCoverOrInstead));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_import_ev_bool_CModelDataSource_CModelDataSource_CModelPublishToolListener_ev_bool_ev_bool_ModelIdAndNameMap(IntPtr pNativeObject, IntPtr src, IntPtr dest, IntPtr listener, byte bClear, byte bCoverOrInstead, IntPtr idAndNameMap);

				/// <summary>
				/// 模型导入函数
				/// </summary>
				/// <param name="src">源数据源</param>
				/// <param name="dest">目标数据源</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <param name="idAndNameMap">返回导入成功的模型id及其名称</param>
				/// <returns></returns>
				public bool Import(EarthView.World.Spatial3D.Dataset.ModelDataSource src, EarthView.World.Spatial3D.Dataset.ModelDataSource dest, EarthView.World.Spatial3D.ModelPublishToolListener listener, bool bClear, bool bCoverOrInstead, ref EarthView.World.Spatial3D.ModelIdAndNameMap idAndNameMap)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_import_ev_bool_CModelDataSource_CModelDataSource_CModelPublishToolListener_ev_bool_ev_bool_ModelIdAndNameMap(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dest, null) ? IntPtr.Zero : dest.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject, Convert.ToByte(bClear), Convert.ToByte(bCoverOrInstead), object.Equals(idAndNameMap, null) ? IntPtr.Zero : idAndNameMap.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_import_ev_bool_CModelDataSource_CModelDataSource_CModelPublishToolListener_IntVector_StringVector_CEffectInfoVector_ev_bool_ev_bool(IntPtr pNativeObject, IntPtr src, IntPtr dest, IntPtr listener, IntPtr modelIDVec, IntPtr typeCodesVec, IntPtr effectInfoVec, byte bClear, byte bCoverOrInstead);

				/// <summary>
				/// 模型导入函数
				/// </summary>
				/// <param name="src">源数据源</param>
				/// <param name="dest">目标数据源</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="modelIDVec">需要导出的模型ID集合</param>
				/// <param name="typeCodesVec">需要导出的模型分类编码集合</param>
				/// <param name="effectInfoVec">需要导出的特效信息集合</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <returns></returns>
				public bool Import(EarthView.World.Spatial3D.Dataset.ModelDataSource src, EarthView.World.Spatial3D.Dataset.ModelDataSource dest, EarthView.World.Spatial3D.ModelPublishToolListener listener, EarthView.World.Core.IntVector modelIDVec, EarthView.World.Core.StringVector typeCodesVec, EarthView.World.Spatial3D.Dataset.EffectInfoVector effectInfoVec, bool bClear, bool bCoverOrInstead)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_import_ev_bool_CModelDataSource_CModelDataSource_CModelPublishToolListener_IntVector_StringVector_CEffectInfoVector_ev_bool_ev_bool(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dest, null) ? IntPtr.Zero : dest.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject, object.Equals(modelIDVec, null) ? IntPtr.Zero : modelIDVec.NativeObject, object.Equals(typeCodesVec, null) ? IntPtr.Zero : typeCodesVec.NativeObject, object.Equals(effectInfoVec, null) ? IntPtr.Zero : effectInfoVec.NativeObject, Convert.ToByte(bClear), Convert.ToByte(bCoverOrInstead));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_import_ev_bool_CModelDataSource_CModelDataSource_CModelPublishToolListener_IntVector_StringVector_CEffectInfoVector_ev_bool_ev_bool_ModelIdAndNameMap(IntPtr pNativeObject, IntPtr src, IntPtr dest, IntPtr listener, IntPtr modelIDVec, IntPtr typeCodesVec, IntPtr effectInfoVec, byte bClear, byte bCoverOrInstead, IntPtr idAndNameMap);

				/// <summary>
				/// 模型导入函数
				/// </summary>
				/// <param name="src">源数据源</param>
				/// <param name="dest">目标数据源</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="modelIDVec">需要导出的模型ID集合</param>
				/// <param name="typeCodesVec">需要导出的模型分类编码集合</param>
				/// <param name="effectInfoVec">需要导出的特效信息集合</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <param name="idAndNameMap">返回导入成功的模型id及其名称</param>
				/// <returns></returns>
				public bool Import(EarthView.World.Spatial3D.Dataset.ModelDataSource src, EarthView.World.Spatial3D.Dataset.ModelDataSource dest, EarthView.World.Spatial3D.ModelPublishToolListener listener, EarthView.World.Core.IntVector modelIDVec, EarthView.World.Core.StringVector typeCodesVec, EarthView.World.Spatial3D.Dataset.EffectInfoVector effectInfoVec, bool bClear, bool bCoverOrInstead, ref EarthView.World.Spatial3D.ModelIdAndNameMap idAndNameMap)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_import_ev_bool_CModelDataSource_CModelDataSource_CModelPublishToolListener_IntVector_StringVector_CEffectInfoVector_ev_bool_ev_bool_ModelIdAndNameMap(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dest, null) ? IntPtr.Zero : dest.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject, object.Equals(modelIDVec, null) ? IntPtr.Zero : modelIDVec.NativeObject, object.Equals(typeCodesVec, null) ? IntPtr.Zero : typeCodesVec.NativeObject, object.Equals(effectInfoVec, null) ? IntPtr.Zero : effectInfoVec.NativeObject, Convert.ToByte(bClear), Convert.ToByte(bCoverOrInstead), object.Equals(idAndNameMap, null) ? IntPtr.Zero : idAndNameMap.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_importModelDBFromLocalFiles_ev_bool_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool(IntPtr pNativeObject, string dataFolder, IntPtr pModelDBDataSource, IntPtr mgr, IntPtr listener, byte bClear, byte bCoverOrInstead, byte bCompositorSubmesh, string userTypeNodecode, byte isLeftHand);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dataFolder">模型文件根目录</param>
				/// <param name="pModelDBDataSource">目标数据源</param>
				/// <param name="mgr">场景管理器</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <param name="userTypeNodecode">用户类别编码</param>
				/// <returns></returns>
				public bool ImportModelDBFromLocalFiles(string dataFolder, EarthView.World.Spatial3D.Dataset.ModelDataSource pModelDBDataSource, EarthView.World.Graphic.SceneManager mgr, EarthView.World.Spatial3D.ModelPublishToolListener listener, bool bClear, bool bCoverOrInstead, bool bCompositorSubmesh, string userTypeNodecode, bool isLeftHand)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_importModelDBFromLocalFiles_ev_bool_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool(this.NativeObject, dataFolder, object.Equals(pModelDBDataSource, null) ? IntPtr.Zero : pModelDBDataSource.NativeObject, object.Equals(mgr, null) ? IntPtr.Zero : mgr.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject, Convert.ToByte(bClear), Convert.ToByte(bCoverOrInstead), Convert.ToByte(bCompositorSubmesh), userTypeNodecode, Convert.ToByte(isLeftHand));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_importModelDBFromLocalFiles_ev_bool_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool_ev_bool(IntPtr pNativeObject, string dataFolder, IntPtr pModelDBDataSource, IntPtr mgr, IntPtr listener, byte bClear, byte bCoverOrInstead, byte bCompositorSubmesh, string userTypeNodecode, byte isLeftHand, byte doubleSideLight);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dataFolder">模型文件根目录</param>
				/// <param name="pModelDBDataSource">目标数据源</param>
				/// <param name="mgr">场景管理器</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <param name="userTypeNodecode">用户类别编码</param>
				/// <returns></returns>
				public bool ImportModelDBFromLocalFiles(string dataFolder, EarthView.World.Spatial3D.Dataset.ModelDataSource pModelDBDataSource, EarthView.World.Graphic.SceneManager mgr, EarthView.World.Spatial3D.ModelPublishToolListener listener, bool bClear, bool bCoverOrInstead, bool bCompositorSubmesh, string userTypeNodecode, bool isLeftHand, bool doubleSideLight)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_importModelDBFromLocalFiles_ev_bool_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool_ev_bool(this.NativeObject, dataFolder, object.Equals(pModelDBDataSource, null) ? IntPtr.Zero : pModelDBDataSource.NativeObject, object.Equals(mgr, null) ? IntPtr.Zero : mgr.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject, Convert.ToByte(bClear), Convert.ToByte(bCoverOrInstead), Convert.ToByte(bCompositorSubmesh), userTypeNodecode, Convert.ToByte(isLeftHand), Convert.ToByte(doubleSideLight));
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_importModelDBFromLocalFiles_ev_bool_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool_ModelIdAndNameMap(IntPtr pNativeObject, string dataFolder, IntPtr pModelDBDataSource, IntPtr mgr, IntPtr listener, byte bClear, byte bCoverOrInstead, byte bCompositorSubmesh, string userTypeNodecode, byte isLeftHand, IntPtr idAndNameMap);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dataFolder">模型文件根目录</param>
				/// <param name="pModelDBDataSource">目标数据源</param>
				/// <param name="mgr">场景管理器</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <param name="userTypeNodecode">用户类别编码</param>
				/// <param name="idAndNameMap">返回导入成功的模型id及其名称</param>
				/// <returns></returns>
				public bool ImportModelDBFromLocalFiles(string dataFolder, EarthView.World.Spatial3D.Dataset.ModelDataSource pModelDBDataSource, EarthView.World.Graphic.SceneManager mgr, EarthView.World.Spatial3D.ModelPublishToolListener listener, bool bClear, bool bCoverOrInstead, bool bCompositorSubmesh, string userTypeNodecode, bool isLeftHand, ref EarthView.World.Spatial3D.ModelIdAndNameMap idAndNameMap)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_importModelDBFromLocalFiles_ev_bool_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool_ModelIdAndNameMap(this.NativeObject, dataFolder, object.Equals(pModelDBDataSource, null) ? IntPtr.Zero : pModelDBDataSource.NativeObject, object.Equals(mgr, null) ? IntPtr.Zero : mgr.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject, Convert.ToByte(bClear), Convert.ToByte(bCoverOrInstead), Convert.ToByte(bCompositorSubmesh), userTypeNodecode, Convert.ToByte(isLeftHand), object.Equals(idAndNameMap, null) ? IntPtr.Zero : idAndNameMap.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CModelEffectDBManager_clearModelTemplDataSource_void(IntPtr pNativeObject);

				/// <summary>
				/// 清除模板数据源
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void ClearModelTemplDataSource()
				{
					EarthView_World_Spatial3DProxy_CModelEffectDBManager_clearModelTemplDataSource_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CModelEffectDBManager_stopImport_void(IntPtr pNativeObject);

				/// <summary>
				/// 停止导入(从数据源导入的时候停止)
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void StopImport()
				{
					EarthView_World_Spatial3DProxy_CModelEffectDBManager_stopImport_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CModelEffectDBManager_stopModelFileImport_void(IntPtr pNativeObject);

				/// <summary>
				/// 停止模型文件导入
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void StopModelFileImport()
				{
					EarthView_World_Spatial3DProxy_CModelEffectDBManager_stopModelFileImport_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CModelEffectDBManager_destroyModelFileImport_void(IntPtr pNativeObject);

				/// <summary>
				/// 销毁文件导入库工具对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void DestroyModelFileImport()
				{
					EarthView_World_Spatial3DProxy_CModelEffectDBManager_destroyModelFileImport_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getRootUserType_CUserTypeInfo(IntPtr pNativeObject);

				////////************************************模型库遍历****************************************//////
				/// <summary>
				/// 获取根用户类型信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CUserTypeInfo，根节点信息</returns>
				public EarthView.World.Spatial3D.Dataset.UserTypeInfo GetRootUserType()
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getRootUserType_CUserTypeInfo(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Dataset.UserTypeInfo csObj = new EarthView.World.Spatial3D.Dataset.UserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CUserTypeInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.UserTypeInfo;
						csObj.BindNativeObject(__ptr, "CUserTypeInfo");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectRootUserType_ev_bool_CEffectUserTypeInfo(IntPtr pNativeObject, IntPtr rootUserTypeInfo);

				/// <summary>
				/// 获取根用户类型信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo，根节点信息</returns>
				public bool GetEffectRootUserType(ref  EarthView.World.Spatial3D.Dataset.EffectUserTypeInfo rootUserTypeInfo)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectRootUserType_ev_bool_CEffectUserTypeInfo(this.NativeObject, object.Equals(rootUserTypeInfo, null) ? IntPtr.Zero : rootUserTypeInfo.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_getChildUserType_ev_bool_EVString_CUserTypeInfoList(IntPtr pNativeObject, string nodeCode, IntPtr typeList);

				/// <summary>
				/// 获取指定节点的子用户类型信息
				/// </summary>
				/// <param name="nodeCode">父节点编码</param>
				/// <param name="typeList">子节点信息存储对象</param>
				/// <returns>是返回ture，否则返回false</returns>
				public bool GetChildUserType(string nodeCode, ref  EarthView.World.Spatial3D.Dataset.UserTypeInfoList typeList)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_getChildUserType_ev_bool_EVString_CUserTypeInfoList(this.NativeObject, nodeCode, object.Equals(typeList, null) ? IntPtr.Zero : typeList.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectInfos_ev_bool_CEffectInfoVector(IntPtr pNativeObject, IntPtr vec);

				/// <summary>
				/// 获取EV_EFFECT表里所有的特效信息。
				/// </summary>
				/// <param name="vec">传出的特效信息集合</param>
				/// <returns>操作是否成功</returns>
				public bool GetEffectInfos(ref  EarthView.World.Spatial3D.Dataset.EffectInfoVector vec)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectInfos_ev_bool_CEffectInfoVector(this.NativeObject, object.Equals(vec, null) ? IntPtr.Zero : vec.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectChildUserType_ev_bool_EVString_CEffectUserTypeInfoVector(IntPtr pNativeObject, string nodeCode, IntPtr typeList);

				/// <summary>
				/// 获取指定节点的子用户类型信息
				/// </summary>
				/// <param name="nodeCode">父节点编码</param>
				/// <param name="typeList">子节点信息存储对象</param>
				/// <returns>是返回ture，否则返回false</returns>
				public bool GetEffectChildUserType(string nodeCode, ref  EarthView.World.Spatial3D.Dataset.EffectUserTypeInfoVector typeList)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectChildUserType_ev_bool_EVString_CEffectUserTypeInfoVector(this.NativeObject, nodeCode, object.Equals(typeList, null) ? IntPtr.Zero : typeList.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_createUserType_CUserTypeInfo_EVString_EVString_IFields(IntPtr pNativeObject, string parentnodeCode, string nwType, IntPtr pFilds);

				/// <summary>
				/// 在指定节点下创建新的用户信息
				/// </summary>
				/// <param name="parentnodeCode">父节点编码</param>
				/// <param name="nwType">新类型名称</param>
				/// <param name="pFilds">创建新类型的字段集</param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CUserTypeInfo，返回创建出来的类型信息</returns>
				public EarthView.World.Spatial3D.Dataset.UserTypeInfo CreateUserType(string parentnodeCode, string nwType, EarthView.World.Spatial.GeoDataset.Ifields pFilds)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_createUserType_CUserTypeInfo_EVString_EVString_IFields(this.NativeObject, parentnodeCode, nwType, object.Equals(pFilds, null) ? IntPtr.Zero : pFilds.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Dataset.UserTypeInfo csObj = new EarthView.World.Spatial3D.Dataset.UserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CUserTypeInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.UserTypeInfo;
						csObj.BindNativeObject(__ptr, "CUserTypeInfo");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteUserType_ev_bool_EVString(IntPtr pNativeObject, string nodeCode);

				/// <summary>
				/// 删除指定节点的用户信息(该节点下的子节点都会被删除)
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool DeleteUserType(string nodeCode)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteUserType_ev_bool_EVString(this.NativeObject, nodeCode);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_clearUserType_ev_bool_EVString(IntPtr pNativeObject, string nodeCode);

				/// <summary>
				/// 清除指定节点下模型(子节点信息不清除)
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool ClearUserType(string nodeCode)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_clearUserType_ev_bool_EVString(this.NativeObject, nodeCode);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteMesh_ev_bool_ev_int32(IntPtr pNativeObject, int MeshID);

				/// <summary>
				/// 删除给定id的mesh文件及相关资源
				/// </summary>
				/// <param name="MeshID">模型的InstID值</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool DeleteMesh(int MeshID)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteMesh_ev_bool_ev_int32(this.NativeObject, MeshID);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_findUserType_CUserTypeInfo_EVString(IntPtr pNativeObject, string nodeCode);

				/// <summary>
				/// 查找是否有给定节点的用户信息
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CUserTypeInfo，返回查找出来的节点信息</returns>
				public EarthView.World.Spatial3D.Dataset.UserTypeInfo FindUserType(string nodeCode)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_findUserType_CUserTypeInfo_EVString(this.NativeObject, nodeCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Dataset.UserTypeInfo csObj = new EarthView.World.Spatial3D.Dataset.UserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CUserTypeInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.UserTypeInfo;
						csObj.BindNativeObject(__ptr, "CUserTypeInfo");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_changeType_ev_bool_EVString_ev_uint32_EVString(IntPtr pNativeObject, string nodeCode, uint id, string nwNodeCode);

				/// <summary>
				/// 更新节点(将一个节点下的模型移动到另一个节点下)
				/// </summary>
				/// <param name="nodeCode">源节点</param>
				/// <param name="id">模型ID</param>
				/// <param name="nwNodeCode">需要更新为的节点</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool ChangeType(string nodeCode, uint id, string nwNodeCode)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_changeType_ev_bool_EVString_ev_uint32_EVString(this.NativeObject, nodeCode, id, nwNodeCode);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_isExist_ev_bool_EVString(IntPtr pNativeObject, string typeName);

				/// <summary>
				///判断用户类型是否存在
				/// </summary>
				/// <param name="typeName">用户类型名称</param>
				/// <returns>存在返回true，不存在返回false</returns>
				public bool IsExist(string typeName)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_isExist_ev_bool_EVString(this.NativeObject, typeName);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getMeshName_EVString_ev_uint32(IntPtr pNativeObject, uint meshID);

				/// <summary>
				/// 通过模型ID获取mesh文件的名字
				/// </summary>
				/// <param name="meshID">模型ID</param>
				/// <returns>返回模型名称</returns>
				public string GetMeshName(uint meshID)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getMeshName_EVString_ev_uint32(this.NativeObject, meshID);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getMeshTemplateName_EVString_ev_uint32(IntPtr pNativeObject, uint meshID);

				/// <summary>
				/// 通过模型ID获取模型Template文件的名字
				/// </summary>
				/// <param name="meshID">模型ID</param>
				/// <returns>返回模型Template名称</returns>
				public string GetMeshTemplateName(uint meshID)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getMeshTemplateName_EVString_ev_uint32(this.NativeObject, meshID);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_renameType_ev_bool_EVString_EVString(IntPtr pNativeObject, ref IntPtr nodecode, ref IntPtr nwTypename);

				/// <summary>
				/// 修改节点对应的属性表描述
				/// </summary>
				/// <param name="nodecode">节点编码</param>
				/// <param name="nwTypename">新的属性表名称描述</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool RenameType(ref string nodecode, ref string nwTypename)
				{
					IntPtr __ptrnodecode = Marshal.StringToHGlobalAnsi(nodecode);
					IntPtr pTmpnodecode = __ptrnodecode;
					IntPtr __ptrnwTypename = Marshal.StringToHGlobalAnsi(nwTypename);
					IntPtr pTmpnwTypename = __ptrnwTypename;
					
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_renameType_ev_bool_EVString_EVString(this.NativeObject, ref __ptrnodecode,ref __ptrnwTypename);
					
					 Marshal.FreeHGlobal(pTmpnodecode);
					nodecode= Marshal.PtrToStringAnsi(__ptrnodecode);
					ClassFactory.FreeString(ref __ptrnodecode);
					 Marshal.FreeHGlobal(pTmpnwTypename);
					nwTypename= Marshal.PtrToStringAnsi(__ptrnwTypename);
					ClassFactory.FreeString(ref __ptrnwTypename);
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_renameMeshName_ev_bool_ev_int32_EVString(IntPtr pNativeObject, int meshID, ref IntPtr nwMeshname);

				/// <summary>
				/// 修改模型名称
				/// </summary>
				/// <param name="meshID">模型ID</param>
				/// <param name="nwMeshname">新的模型名称</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool RenameMeshName(int meshID, ref string nwMeshname)
				{
					IntPtr __ptrnwMeshname = Marshal.StringToHGlobalAnsi(nwMeshname);
					IntPtr pTmpnwMeshname = __ptrnwMeshname;
					
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_renameMeshName_ev_bool_ev_int32_EVString(this.NativeObject, meshID, ref __ptrnwMeshname);
					
					 Marshal.FreeHGlobal(pTmpnwMeshname);
					nwMeshname= Marshal.PtrToStringAnsi(__ptrnwMeshname);
					ClassFactory.FreeString(ref __ptrnwMeshname);
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_renameAttachComponent_ev_bool_ev_int32_ev_int32_EVString(IntPtr pNativeObject, int evid, int mainModelId, string nwComponentName);

				/// <summary>
				/// 修改组件名称
				/// </summary>
				/// <param name="evid">组件主键</param>
				/// <param name="mainModelId">主模型ID</param>
				/// <param name="nwMeshname">新的组件名称</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool RenameAttachComponent(int evid, int mainModelId, string nwComponentName)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_renameAttachComponent_ev_bool_ev_int32_ev_int32_EVString(this.NativeObject, evid, mainModelId, nwComponentName);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getObjectIDs_IntVector_EVString(IntPtr pNativeObject, string nodecode);

				/// <summary>
				/// 获取给定节点下的所有模型id
				/// </summary>
				/// <param name="nodecode">节点编码</param>
				/// <returns>EarthView::World::Core::IntVector，返回模型ID集</returns>
				public EarthView.World.Core.IntVector GetObjectIDs(string nodecode)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getObjectIDs_IntVector_EVString(this.NativeObject, nodecode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.IntVector csObj = new EarthView.World.Core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IntVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.IntVector;
						csObj.BindNativeObject(__ptr, "IntVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CModelEffectDBManager_getObjectIDAndNames_void_EVString_ModelIdAndNameMap(IntPtr pNativeObject, string nodecode, IntPtr idAndNameMap);

				/// <summary>
				/// 获取给定节点下的所有模型id与名称
				/// </summary>
				/// <param name="nodecode">节点编码</param>
				/// <param name="idAndNameMap">ID与名称</param>
				/// <returns></returns>
				public void GetObjectIDAndNames(string nodecode, ref  EarthView.World.Spatial3D.ModelIdAndNameMap idAndNameMap)
				{
					EarthView_World_Spatial3DProxy_CModelEffectDBManager_getObjectIDAndNames_void_EVString_ModelIdAndNameMap(this.NativeObject, nodecode, object.Equals(idAndNameMap, null) ? IntPtr.Zero : idAndNameMap.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectObjectIDs_IntVector_EVString(IntPtr pNativeObject, string nodecode);

				/// <summary>
				//// 获取给定节点下的所有特效id
				//// </summary>
				//// <param name="nodecode">节点编码</param>
				//// <returns>EarthView::World::Core::IntVector，返回特效ID集</returns>
				public EarthView.World.Core.IntVector GetEffectObjectIDs(string nodecode)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectObjectIDs_IntVector_EVString(this.NativeObject, nodecode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.IntVector csObj = new EarthView.World.Core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IntVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.IntVector;
						csObj.BindNativeObject(__ptr, "IntVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectObjectIDs_void_EVString_CEffectInfoVector(IntPtr pNativeObject, string nodecode, IntPtr vec);

				/// <summary>
				//// 获取给定节点下的所有特效id与名称
				//// </summary>
				//// <param name="nodecode">节点编码</param>
				//// <param name="vec">特效信息集合</param>
				//// <returns></returns>
				public void GetEffectObjectIDs(string nodecode, ref  EarthView.World.Spatial3D.Dataset.EffectInfoVector vec)
				{
					EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectObjectIDs_void_EVString_CEffectInfoVector(this.NativeObject, nodecode, object.Equals(vec, null) ? IntPtr.Zero : vec.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3DProxy_CModelEffectDBManager_getMeshID_ev_int32_EVString(IntPtr pNativeObject, string meshName);

				/// <summary>
				/// 通过模型别名名获取模型对应的instance的ID
				/// </summary>
				/// <param name="meshName">模型别名</param>
				/// <returns>模型instance的ID</returns>
				public int GetMeshID(string meshName)
				{
					int ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_getMeshID_ev_int32_EVString(this.NativeObject, meshName);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getModelUserTypeByNodeDesc_CUserTypeInfo_EVString(IntPtr pNativeObject, string desc);

				/// <summary>
				/// 通过分类描述获取模型分类对象
				/// </summary>
				/// <param name="meshName">模型别名</param>
				/// <returns>模型instance的ID</returns>
				public EarthView.World.Spatial3D.Dataset.UserTypeInfo GetModelUserTypeByNodeDesc(string desc)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getModelUserTypeByNodeDesc_CUserTypeInfo_EVString(this.NativeObject, desc);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Dataset.UserTypeInfo csObj = new EarthView.World.Spatial3D.Dataset.UserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CUserTypeInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.UserTypeInfo;
						csObj.BindNativeObject(__ptr, "CUserTypeInfo");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getModelUserTypeByNodeCode_CUserTypeInfo_EVString(IntPtr pNativeObject, string nodeCode);

				/// <summary>
				/// 通过分类编码获得分类对象
				/// </summary>
				/// <param name="meshName">模型别名</param>
				/// <returns>模型instance的ID</returns>				
				public EarthView.World.Spatial3D.Dataset.UserTypeInfo GetModelUserTypeByNodeCode(string nodeCode)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getModelUserTypeByNodeCode_CUserTypeInfo_EVString(this.NativeObject, nodeCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Dataset.UserTypeInfo csObj = new EarthView.World.Spatial3D.Dataset.UserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CUserTypeInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.UserTypeInfo;
						csObj.BindNativeObject(__ptr, "CUserTypeInfo");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_getAttrTypeFields_ev_bool_EVString_CFields(IntPtr pNativeObject, string nodeCode, IntPtr flds);

				/// <summary>
				/// 获取指定节点所对应的属性表字段结构
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <param name="flds">传出的属性表字段结构</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool GetAttrTypeFields(string nodeCode, EarthView.World.Spatial.GeoDataset.Fields flds)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_getAttrTypeFields_ev_bool_EVString_CFields(this.NativeObject, nodeCode, object.Equals(flds, null) ? IntPtr.Zero : flds.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getMeshAttr_CPropertySet_EVString_ev_uint32(IntPtr pNativeObject, string nodeCode, uint meshID);

				/// <summary>
				/// 获取指定节点下面给定模型id的属性信息
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <param name="meshID">模型ID</param>
				/// <returns>EarthView::World::Spatial::GeoDataset::CPropertySet，模型的属性信息</returns>
				public EarthView.World.Spatial.GeoDataset.PropertySet GetMeshAttr(string nodeCode, uint meshID)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getMeshAttr_CPropertySet_EVString_ev_uint32(this.NativeObject, nodeCode, meshID);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.PropertySet csObj = new EarthView.World.Spatial.GeoDataset.PropertySet(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPropertySet");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.PropertySet;
						csObj.BindNativeObject(__ptr, "CPropertySet");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateAttrTypeFields_ev_bool_EVString_CFields(IntPtr pNativeObject, string typeName, IntPtr flds);

				/// <summary>
				/// 更新属性表字段
				/// </summary>
				/// <param name="typeName">属性表名称</param>
				/// <param name="flds">属性表新的字段结构</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool UpdateAttrTypeFields(string typeName, EarthView.World.Spatial.GeoDataset.Fields flds)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateAttrTypeFields_ev_bool_EVString_CFields(this.NativeObject, typeName, object.Equals(flds, null) ? IntPtr.Zero : flds.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateMeshAttr_ev_bool_EVString_ev_uint32_CPropertySet(IntPtr pNativeObject, string nodeCode, uint meshID, IntPtr vals);

				/// <summary>
				/// 更新模型属性信息
				/// </summary>
				/// <param name="nodeCode">模型所在的节点编码</param>
				/// <param name="meshID">模型ID</param>
				/// <param name="vals">模型属性信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool UpdateMeshAttr(string nodeCode, uint meshID, EarthView.World.Spatial.GeoDataset.PropertySet vals)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateMeshAttr_ev_bool_EVString_ev_uint32_CPropertySet(this.NativeObject, nodeCode, meshID, object.Equals(vals, null) ? IntPtr.Zero : vals.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_getModelInfoFromDB_ev_bool_ev_uint32_CVector3_CVector3_CVector3_EVString(IntPtr pNativeObject, uint id, IntPtr quater, IntPtr position, IntPtr scale, ref IntPtr nodeCode);

				/// <summary>
				/// 从数据库获取模型信息
				/// </summary>
				/// <param name="id">模型ID</param>
				/// <param name="quater">模型旋转信息</param>
				/// <param name="position">模型位置信息</param>
				/// <param name="scale">模型缩放信息</param>
				/// <param name="nodeCode">模型所在节点编码</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool GetModelInfoFromDB(uint id, ref  EarthView.World.Spatial.Math.Vector3 quater, ref  EarthView.World.Spatial.Math.Vector3 position, ref  EarthView.World.Spatial.Math.Vector3 scale, ref string nodeCode)
				{
					IntPtr __ptrnodeCode = Marshal.StringToHGlobalAnsi(nodeCode);
					IntPtr pTmpnodeCode = __ptrnodeCode;
					
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_getModelInfoFromDB_ev_bool_ev_uint32_CVector3_CVector3_CVector3_EVString(this.NativeObject, id, object.Equals(quater, null) ? IntPtr.Zero : quater.NativeObject, object.Equals(position, null) ? IntPtr.Zero : position.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, ref __ptrnodeCode);
					
					 Marshal.FreeHGlobal(pTmpnodeCode);
					nodeCode= Marshal.PtrToStringAnsi(__ptrnodeCode);
					ClassFactory.FreeString(ref __ptrnodeCode);
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_getAttachInfoFromDB_ev_bool_ev_uint32_CVector3_CVector3_CVector3(IntPtr pNativeObject, uint id, IntPtr quater, IntPtr position, IntPtr scale);

				/// <summary>
				/// 获取绑定对象信息
				/// </summary>
				/// <param name="id">该绑定的ID值</param>
				/// <param name="quater">绑定对象的旋转信息</param>
				/// <param name="position">绑定对象的位置信息</param>
				/// <param name="scale">绑定对象的缩放信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool GetAttachInfoFromDB(uint id, ref  EarthView.World.Spatial.Math.Vector3 quater, ref  EarthView.World.Spatial.Math.Vector3 position, ref  EarthView.World.Spatial.Math.Vector3 scale)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_getAttachInfoFromDB_ev_bool_ev_uint32_CVector3_CVector3_CVector3(this.NativeObject, id, object.Equals(quater, null) ? IntPtr.Zero : quater.NativeObject, object.Equals(position, null) ? IntPtr.Zero : position.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_isExistBindID_ev_bool_ev_int32_ev_int32(IntPtr pNativeObject, int mainID, int BindID);

				/// <summary>
				/// 判断是否存在绑定关系
				/// </summary>
				/// <param name="mainID">主模型ID</param>
				/// <param name="BindID">被绑定对象的ID</param>
				/// <returns>存在返回true，不存在返回false</returns>
				public bool IsExistBindID(int mainID, int BindID)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_isExistBindID_ev_bool_ev_int32_ev_int32(this.NativeObject, mainID, BindID);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_copyModel_ev_bool_EVString_ev_int32(IntPtr pNativeObject, string nodeCode, int copyID);

				/// <summary>
				/// 仅仅拷贝模型，不传出拷贝之后的模型信息
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <param name="copyID">需要拷贝的模型ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool CopyModel(string nodeCode, int copyID)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_copyModel_ev_bool_EVString_ev_int32(this.NativeObject, nodeCode, copyID);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_copyModel_ev_bool_EVString_ev_int32_ev_int32_EVString(IntPtr pNativeObject, string nodeCode, int copyID, ref int newID, ref IntPtr newName);

				/// <summary>
				/// 仅仅拷贝模型，并传出拷贝之后的模型信息
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <param name="copyID">需要拷贝的模型ID</param>
				/// <param name="nodeCode">传出新的ID</param>
				/// <param name="copyID">传出拷贝模型别名</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool CopyModel(string nodeCode, int copyID, ref int newID, ref string newName)
				{
					IntPtr __ptrnewName = Marshal.StringToHGlobalAnsi(newName);
					IntPtr pTmpnewName = __ptrnewName;
					
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_copyModel_ev_bool_EVString_ev_int32_ev_int32_EVString(this.NativeObject, nodeCode, copyID, ref newID, ref __ptrnewName);
					
					 Marshal.FreeHGlobal(pTmpnewName);
					newName= Marshal.PtrToStringAnsi(__ptrnewName);
					ClassFactory.FreeString(ref __ptrnewName);
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_copyModelAndBindInfo_ev_bool_EVString_ev_int32(IntPtr pNativeObject, string nodeCode, int copyID);

				/// <summary>
				/// 拷贝模型及其绑定信息，不传出拷贝之后模型信息
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <param name="copyID">需要拷贝的模型ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool CopyModelAndBindInfo(string nodeCode, int copyID)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_copyModelAndBindInfo_ev_bool_EVString_ev_int32(this.NativeObject, nodeCode, copyID);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_copyModelAndBindInfo_ev_bool_EVString_ev_int32_ev_int32_EVString(IntPtr pNativeObject, string nodeCode, int copyID, ref int newID, ref IntPtr newName);

				/// <summary>
				/// 拷贝模型及其绑定信息，并传出拷贝之后模型信息
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <param name="copyID">需要拷贝的模型ID</param>
				/// <param name="nodeCode">新的ID</param>
				/// <param name="copyID">拷贝模型别名</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool CopyModelAndBindInfo(string nodeCode, int copyID, ref int newID, ref string newName)
				{
					IntPtr __ptrnewName = Marshal.StringToHGlobalAnsi(newName);
					IntPtr pTmpnewName = __ptrnewName;
					
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_copyModelAndBindInfo_ev_bool_EVString_ev_int32_ev_int32_EVString(this.NativeObject, nodeCode, copyID, ref newID, ref __ptrnewName);
					
					 Marshal.FreeHGlobal(pTmpnewName);
					newName= Marshal.PtrToStringAnsi(__ptrnewName);
					ClassFactory.FreeString(ref __ptrnewName);
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getAttrTableNames_StringVector(IntPtr pNativeObject);

				/// <summary>
				/// 获取关系表名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>EarthView::World::Core::StringVector，返回关系表的集合</returns>
				public EarthView.World.Core.StringVector GetAttrTableNames()
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getAttrTableNames_StringVector(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.StringVector csObj = new EarthView.World.Core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "StringVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.StringVector;
						csObj.BindNativeObject(__ptr, "StringVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial3DProxy_CModelEffectDBManager_getAttrTableFileds_void_EVString_CFields(IntPtr pNativeObject, string typeName, IntPtr flds);

				/// <summary>
				/// 获取关联表字段信息
				/// </summary>
				/// <param name="typeName">属性关联表表名</param>
				/// <param name="flds">传出的属性关联表字段结构</param>
				/// <returns></returns>
				public void GetAttrTableFileds(string typeName, EarthView.World.Spatial.GeoDataset.Fields flds)
				{
					EarthView_World_Spatial3DProxy_CModelEffectDBManager_getAttrTableFileds_void_EVString_CFields(this.NativeObject, typeName, object.Equals(flds, null) ? IntPtr.Zero : flds.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_createModelObject_CModelBaseObject_ModelType_CSceneManager_EVString(IntPtr pNativeObject, EarthView.World.Spatial3D.MODELTYPE modelType, IntPtr pSceneManager, string meshName);

				///////*********************************模型加载****************************************/////////////////////////////
				/// <summary>
				/// 创建 模型库 中的一个模型对象
				/// </summary>
				/// <param name="modelType">创建模型的类型(MT_MODEL或者MT_INSTANCE)</param>
				/// <param name="pSceneManager">场景管理器对象</param>				
				/// <param name="meshName">模型名称</param>
				/// <returns>传入MT_MODEL，创建成功则返回CManualModelObject;传入MT_INSTANCE，创建成功则返回CManualInstanceObject;失败则返回NULL</returns>
				public EarthView.World.Spatial3D.ModelManager.ModelBaseObject CreateModelObject(EarthView.World.Spatial3D.MODELTYPE modelType, EarthView.World.Graphic.SceneManager pSceneManager, string meshName)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_createModelObject_CModelBaseObject_ModelType_CSceneManager_EVString(this.NativeObject, modelType, object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, meshName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ModelManager.ModelBaseObject csObj = new EarthView.World.Spatial3D.ModelManager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelBaseObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ModelBaseObject;
						csObj.BindNativeObject(__ptr, "CModelBaseObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_createModelObject_CModelBaseObject_ModelType_CSceneManager_ev_uint32(IntPtr pNativeObject, EarthView.World.Spatial3D.MODELTYPE modelType, IntPtr pSceneManager, uint meshID);

				/// <summary>
				/// 创建 模型库 中的一个模型对象
				/// </summary>
				/// <param name="modelType">创建模型的类型(MT_MODEL或者MT_INSTANCE)</param>
				/// <param name="pSceneManager">场景管理器对象</param>				
				/// <param name="meshID">模型id</param>
				/// <returns>传入MT_MODEL，创建成功则返回CManualModelObject;传入MT_INSTANCE，创建成功则返回CManualInstanceObject;失败则返回NULL</returns>
				public EarthView.World.Spatial3D.ModelManager.ModelBaseObject CreateModelObject(EarthView.World.Spatial3D.MODELTYPE modelType, EarthView.World.Graphic.SceneManager pSceneManager, uint meshID)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_createModelObject_CModelBaseObject_ModelType_CSceneManager_ev_uint32(this.NativeObject, modelType, object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, meshID);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ModelManager.ModelBaseObject csObj = new EarthView.World.Spatial3D.ModelManager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelBaseObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ModelBaseObject;
						csObj.BindNativeObject(__ptr, "CModelBaseObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_destroyModelObject_ev_bool_CModelBaseObject(IntPtr pNativeObject, IntPtr pModel);

				/// <summary>
				/// 销毁 模型库 中的一个模型对象
				/// </summary>
				/// <param name="pModel">模型对象</param>				
				/// <returns>失败则返回false</returns>
				public bool DestroyModelObject(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pModel)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_destroyModelObject_ev_bool_CModelBaseObject(this.NativeObject, object.Equals(pModel, null) ? IntPtr.Zero : pModel.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_createEffect_CEffect_CSceneManager_EVString(IntPtr pNativeObject, IntPtr pSceneManager, string effectName);

				/// <summary>
				/// 通过特效名字创建一个特效
				/// </summary>				
				/// <param name="pSceneManager">场景管理器对象</param>				
				/// <param name="effectName">特效名字</param>
				/// <returns>返回创建成功的特效对象</returns>
				public EarthView.World.Spatial3D.EffectManager.Effect CreateEffect(EarthView.World.Graphic.SceneManager pSceneManager, string effectName)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_createEffect_CEffect_CSceneManager_EVString(this.NativeObject, object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, effectName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.EffectManager.Effect csObj = new EarthView.World.Spatial3D.EffectManager.Effect(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEffect");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.EffectManager.Effect;
						csObj.BindNativeObject(__ptr, "CEffect");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_createEffect_CEffect_CSceneManager_ev_uint32(IntPtr pNativeObject, IntPtr pSceneManager, uint effectId);

				/// <summary>
				/// 通过特效ID创建一个特效
				/// </summary>				
				/// <param name="pSceneManager">场景管理器对象</param>				
				/// <param name="effectId">特效ID</param>
				/// <returns>返回创建成功的特效对象</returns>
				public EarthView.World.Spatial3D.EffectManager.Effect CreateEffect(EarthView.World.Graphic.SceneManager pSceneManager, uint effectId)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_createEffect_CEffect_CSceneManager_ev_uint32(this.NativeObject, object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, effectId);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.EffectManager.Effect csObj = new EarthView.World.Spatial3D.EffectManager.Effect(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEffect");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.EffectManager.Effect;
						csObj.BindNativeObject(__ptr, "CEffect");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_destroyEffect_ev_bool_CEffect(IntPtr pNativeObject, IntPtr effect);

				/// <summary>
				/// 销毁一个特效
				/// </summary>
				/// <param name="effect">需要销毁的特效对象</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool DestroyEffect(EarthView.World.Spatial3D.EffectManager.Effect effect)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_destroyEffect_ev_bool_CEffect(this.NativeObject, object.Equals(effect, null) ? IntPtr.Zero : effect.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getBindedInfo_CMeshEffectRefInfoVector_ev_uint32(IntPtr pNativeObject, uint meshID);

				///////*********************************模型绑定编辑(会更新数据库)****************************************/////////////////////////////
				/// <summary>
				/// 获取模型的绑定信息
				/// </summary>
				/// <param name="meshID">该模型ID</param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回该模型绑定的对象的信息的集合</returns>
				public EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector GetBindedInfo(uint meshID)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getBindedInfo_CMeshEffectRefInfoVector_ev_uint32(this.NativeObject, meshID);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector csObj = new EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshEffectRefInfoVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector;
						csObj.BindNativeObject(__ptr, "CMeshEffectRefInfoVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getBindedModelInfo_CMeshEffectRefInfoVector_ev_uint32(IntPtr pNativeObject, uint meshID);

				/// <summary>
				/// 获取模型绑定子模型信息
				/// </summary>
				/// <param name="meshID">该模型ID</param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回该模型绑定的对象的信息的集合</returns>
				public EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector GetBindedModelInfo(uint meshID)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getBindedModelInfo_CMeshEffectRefInfoVector_ev_uint32(this.NativeObject, meshID);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector csObj = new EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshEffectRefInfoVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector;
						csObj.BindNativeObject(__ptr, "CMeshEffectRefInfoVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getBindedEffectInfo_CMeshEffectRefInfoVector_ev_uint32(IntPtr pNativeObject, uint meshID);

				/// <summary>
				/// 获取模型绑定特效信息
				/// </summary>
				/// <param name="meshID">该模型ID</param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回该模型绑定的对象的信息的集合</returns>
				public EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector GetBindedEffectInfo(uint meshID)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getBindedEffectInfo_CMeshEffectRefInfoVector_ev_uint32(this.NativeObject, meshID);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector csObj = new EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshEffectRefInfoVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector;
						csObj.BindNativeObject(__ptr, "CMeshEffectRefInfoVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_getBindedLightInfo_CMeshEffectRefInfoVector_ev_uint32(IntPtr pNativeObject, uint meshID);

				/// <summary>
				/// 获取模型绑定光源信息
				/// </summary>
				/// <param name="meshID">该模型ID</param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回该模型绑定的对象的信息的集合</returns>
				public EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector GetBindedLightInfo(uint meshID)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_getBindedLightInfo_CMeshEffectRefInfoVector_ev_uint32(this.NativeObject, meshID);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector csObj = new EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshEffectRefInfoVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.MeshEffectRefInfoVector;
						csObj.BindNativeObject(__ptr, "CMeshEffectRefInfoVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_insertBindedInfo_ev_bool_ev_uint32_CMeshEffectRefInfo(IntPtr pNativeObject, uint meshID, IntPtr info);

				/// <summary>
				/// 插入模型绑定信息
				/// </summary>
				/// <param name="meshID">主模型ID</param>
				/// <param name="meshID">绑定信息位置名称</param>
				/// <param name="meshID">需要绑定的信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool InsertBindedInfo(uint meshID, EarthView.World.Spatial3D.Dataset.MeshEffectRefInfo info)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_insertBindedInfo_ev_bool_ev_uint32_CMeshEffectRefInfo(this.NativeObject, meshID, object.Equals(info, null) ? IntPtr.Zero : info.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteBindedInfoByEVID_ev_bool_ev_uint32(IntPtr pNativeObject, uint evID);

				/// <summary>
				/// 根据主键删除一条模型绑定信息
				/// </summary>
				/// <param name="meshID">主键ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool DeleteBindedInfoByEVID(uint evID)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteBindedInfoByEVID_ev_bool_ev_uint32(this.NativeObject, evID);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteBindedInfo_ev_bool_ev_uint32(IntPtr pNativeObject, uint meshID);

				/// <summary>
				/// 根据主模型ID删除模型绑定信息
				/// </summary>
				/// <param name="meshID">主模型ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool DeleteBindedInfo(uint meshID)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteBindedInfo_ev_bool_ev_uint32(this.NativeObject, meshID);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteBindedModelInfo_ev_bool_ev_uint32(IntPtr pNativeObject, uint meshID);

				/// <summary>
				/// 删除模型绑定仅子模型信息
				/// </summary>
				/// <param name="meshID">主模型ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool DeleteBindedModelInfo(uint meshID)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteBindedModelInfo_ev_bool_ev_uint32(this.NativeObject, meshID);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteBindedEffectInfo_ev_bool_ev_uint32(IntPtr pNativeObject, uint meshID);

				/// <summary>
				/// 删除模型绑定特效信息
				/// </summary>
				/// <param name="meshID">主模型ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool DeleteBindedEffectInfo(uint meshID)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteBindedEffectInfo_ev_bool_ev_uint32(this.NativeObject, meshID);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindModelAtSubEntity_CModelBaseObject_CModelBaseObject_ev_uint32_ev_uint32_CMatrix4(IntPtr pNativeObject, IntPtr pMainObj, uint bindedMeshID, uint subEntityIndex, IntPtr mat4);

				/// <summary>
				/// 在subentity上绑定一个模型
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="bindedMeshID">需要绑定的模型ID</param>
				/// <param name="subEntityIndex">主模型对象中的subEntity的索引</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::ModelManager::CModelBaseObject，返回创建绑定的模型</returns>
				public EarthView.World.Spatial3D.ModelManager.ModelBaseObject BindModelAtSubEntity(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, uint bindedMeshID, uint subEntityIndex, EarthView.World.Spatial.Math.Matrix4 mat4)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindModelAtSubEntity_CModelBaseObject_CModelBaseObject_ev_uint32_ev_uint32_CMatrix4(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, bindedMeshID, subEntityIndex, object.Equals(mat4, null) ? IntPtr.Zero : mat4.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ModelManager.ModelBaseObject csObj = new EarthView.World.Spatial3D.ModelManager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelBaseObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ModelBaseObject;
						csObj.BindNativeObject(__ptr, "CModelBaseObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindModelAtBone_CModelBaseObject_CModelBaseObject_ev_uint32_EVString_CMatrix4(IntPtr pNativeObject, IntPtr pMainObj, uint bindedMeshID, string boneName, IntPtr mat4);

				/// <summary>
				/// 在模型骨头上进行绑定一个模型
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="bindedMeshID">需要绑定的模型ID</param>
				/// <param name="boneName">主模型对象中的骨头名称</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::ModelManager::CModelBaseObject，返回创建绑定的模型</returns>
				public EarthView.World.Spatial3D.ModelManager.ModelBaseObject BindModelAtBone(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, uint bindedMeshID, string boneName, EarthView.World.Spatial.Math.Matrix4 mat4)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindModelAtBone_CModelBaseObject_CModelBaseObject_ev_uint32_EVString_CMatrix4(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, bindedMeshID, boneName, object.Equals(mat4, null) ? IntPtr.Zero : mat4.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ModelManager.ModelBaseObject csObj = new EarthView.World.Spatial3D.ModelManager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelBaseObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ModelBaseObject;
						csObj.BindNativeObject(__ptr, "CModelBaseObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindModelAtNode_CModelBaseObject_CModelBaseObject_ev_uint32_EVString_CMatrix4(IntPtr pNativeObject, IntPtr pMainObj, uint bindedMeshID, string nodeName, IntPtr mat4);

				/// <summary>
				/// 在模型节点上进行绑定一个模型
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="bindedMeshID">需要绑定的模型ID</param>
				/// <param name="nodeName">主模型对象中的节点名称</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::ModelManager::CModelBaseObject，返回创建绑定的模型</returns>
				public EarthView.World.Spatial3D.ModelManager.ModelBaseObject BindModelAtNode(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, uint bindedMeshID, string nodeName, EarthView.World.Spatial.Math.Matrix4 mat4)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindModelAtNode_CModelBaseObject_CModelBaseObject_ev_uint32_EVString_CMatrix4(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, bindedMeshID, nodeName, object.Equals(mat4, null) ? IntPtr.Zero : mat4.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.ModelManager.ModelBaseObject csObj = new EarthView.World.Spatial3D.ModelManager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelBaseObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ModelBaseObject;
						csObj.BindNativeObject(__ptr, "CModelBaseObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindEffectAtSubEntity_CEffect_CModelBaseObject_ev_uint32_ev_uint32_CMatrix4(IntPtr pNativeObject, IntPtr pMainObj, uint bindedEffectID, uint subEntityIndex, IntPtr mat4);

				/// <summary>
				/// 在模型subentity上绑定特效
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="bindedEffectID">需要绑定的特效ID</param>
				/// <param name="subEntityIndex">主模型对象中的subEntity的索引</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::EffectManager::CEffect，返回创建绑定的特效</returns>
				public EarthView.World.Spatial3D.EffectManager.Effect BindEffectAtSubEntity(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, uint bindedEffectID, uint subEntityIndex, EarthView.World.Spatial.Math.Matrix4 mat4)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindEffectAtSubEntity_CEffect_CModelBaseObject_ev_uint32_ev_uint32_CMatrix4(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, bindedEffectID, subEntityIndex, object.Equals(mat4, null) ? IntPtr.Zero : mat4.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.EffectManager.Effect csObj = new EarthView.World.Spatial3D.EffectManager.Effect(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEffect");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.EffectManager.Effect;
						csObj.BindNativeObject(__ptr, "CEffect");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindLightAtSubEntity_ev_int32_CModelBaseObject_CLight_ev_uint32_ev_uint32_CMatrix4(IntPtr pNativeObject, IntPtr pMainObj, IntPtr l, uint bindedLightID, uint subEntityIndex, IntPtr mat4);

				/// <summary>
				/// 在模型subentity上绑定光源
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="l">需绑定的光源对象</param>
				/// <param name="bindedEffectID">需要绑定的特效ID</param>
				/// <param name="subEntityIndex">主模型对象中的subEntity的索引</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::EffectManager::CEffect，返回创建绑定的特效</returns>
				public int BindLightAtSubEntity(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, EarthView.World.Graphic.Light l, uint bindedLightID, uint subEntityIndex, EarthView.World.Spatial.Math.Matrix4 mat4)
				{
					int ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindLightAtSubEntity_ev_int32_CModelBaseObject_CLight_ev_uint32_ev_uint32_CMatrix4(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, object.Equals(l, null) ? IntPtr.Zero : l.NativeObject, bindedLightID, subEntityIndex, object.Equals(mat4, null) ? IntPtr.Zero : mat4.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindEffectAtBone_CEffect_CModelBaseObject_ev_uint32_EVString_CMatrix4(IntPtr pNativeObject, IntPtr pMainObj, uint bindedEffectID, string boneName, IntPtr mat4);

				/// <summary>
				/// 在模型骨头上绑定特效
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="bindedEffectID">需要绑定的特效ID</param>
				/// <param name="boneName">主模型对象中的骨头名称</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::EffectManager::CEffect，返回创建绑定的特效</returns>
				public EarthView.World.Spatial3D.EffectManager.Effect BindEffectAtBone(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, uint bindedEffectID, string boneName, EarthView.World.Spatial.Math.Matrix4 mat4)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindEffectAtBone_CEffect_CModelBaseObject_ev_uint32_EVString_CMatrix4(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, bindedEffectID, boneName, object.Equals(mat4, null) ? IntPtr.Zero : mat4.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.EffectManager.Effect csObj = new EarthView.World.Spatial3D.EffectManager.Effect(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEffect");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.EffectManager.Effect;
						csObj.BindNativeObject(__ptr, "CEffect");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindEffectAtNode_CEffect_CModelBaseObject_ev_uint32_EVString_CMatrix4(IntPtr pNativeObject, IntPtr pMainObj, uint bindedEffectID, string nodeName, IntPtr mat4);

				/// <summary>
				/// 在模型骨头上绑定特效
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="bindedEffectID">需要绑定的特效ID</param>
				/// <param name="nodeName">主模型对象中的节点名称</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::EffectManager::CEffect，返回创建绑定的特效</returns>
				public EarthView.World.Spatial3D.EffectManager.Effect BindEffectAtNode(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, uint bindedEffectID, string nodeName, EarthView.World.Spatial.Math.Matrix4 mat4)
				{
					IntPtr __ptr = EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindEffectAtNode_CEffect_CModelBaseObject_ev_uint32_EVString_CMatrix4(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, bindedEffectID, nodeName, object.Equals(mat4, null) ? IntPtr.Zero : mat4.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.EffectManager.Effect csObj = new EarthView.World.Spatial3D.EffectManager.Effect(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEffect");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.EffectManager.Effect;
						csObj.BindNativeObject(__ptr, "CEffect");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_unBindAndDestoryModel_ev_bool_CModelBaseObject_CModelBaseObject(IntPtr pNativeObject, IntPtr pMainObj, IntPtr pBindedObj);

				/// <summary>
				/// 取消绑定的模型并销毁
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定模型对象</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool UnBindAndDestoryModel(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, EarthView.World.Spatial3D.ModelManager.ModelBaseObject pBindedObj)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_unBindAndDestoryModel_ev_bool_CModelBaseObject_CModelBaseObject(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, object.Equals(pBindedObj, null) ? IntPtr.Zero : pBindedObj.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_unBindAndDestoryEffect_ev_bool_CModelBaseObject_CEffect(IntPtr pNativeObject, IntPtr pMainObj, IntPtr pBindedObj);

				/// <summary>
				/// 取消绑定的特效并销毁
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定特效对象</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool UnBindAndDestoryEffect(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, EarthView.World.Spatial3D.EffectManager.Effect pBindedObj)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_unBindAndDestoryEffect_ev_bool_CModelBaseObject_CEffect(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, object.Equals(pBindedObj, null) ? IntPtr.Zero : pBindedObj.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_unBindAndDestoryLight_ev_bool_CModelBaseObject_CLight_ev_uint32(IntPtr pNativeObject, IntPtr pMainObj, IntPtr pBindedObj, uint bindID);

				/// <summary>
				/// 取消绑定的光源并销毁
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定光源对象</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool UnBindAndDestoryLight(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, EarthView.World.Graphic.Light pBindedObj, uint bindID)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_unBindAndDestoryLight_ev_bool_CModelBaseObject_CLight_ev_uint32(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, object.Equals(pBindedObj, null) ? IntPtr.Zero : pBindedObj.NativeObject, bindID);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateBindedModelPosition_ev_bool_CModelBaseObject_CModelBaseObject_CVector3_CVector3_CVector3(IntPtr pNativeObject, IntPtr pMainObj, IntPtr pBindedObj, IntPtr pos, IntPtr scale, IntPtr rotate);

				/// <summary>
				/// 更新绑定的模型的姿态
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定模型对象</param>
				/// <param name="pos">绑定模型位置信息</param>
				/// <param name="scale">绑定模型缩放信息</param>
				/// <param name="rotate">绑定模型旋转信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool UpdateBindedModelPosition(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, EarthView.World.Spatial3D.ModelManager.ModelBaseObject pBindedObj, EarthView.World.Spatial.Math.Vector3 pos, EarthView.World.Spatial.Math.Vector3 scale, EarthView.World.Spatial.Math.Vector3 rotate)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateBindedModelPosition_ev_bool_CModelBaseObject_CModelBaseObject_CVector3_CVector3_CVector3(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, object.Equals(pBindedObj, null) ? IntPtr.Zero : pBindedObj.NativeObject, object.Equals(pos, null) ? IntPtr.Zero : pos.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(rotate, null) ? IntPtr.Zero : rotate.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateBindedEffectPosition_ev_bool_CModelBaseObject_CEffect_CVector3_CVector3_CVector3(IntPtr pNativeObject, IntPtr pMainObj, IntPtr pBindedObj, IntPtr pos, IntPtr scale, IntPtr rotate);

				/// <summary>
				/// 更新绑定的特效的姿态
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定特效对象</param>
				/// <param name="pos">绑定特效位置信息</param>
				/// <param name="scale">绑定特效缩放信息</param>
				/// <param name="rotate">绑定特效旋转信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool UpdateBindedEffectPosition(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, EarthView.World.Spatial3D.EffectManager.Effect pBindedObj, EarthView.World.Spatial.Math.Vector3 pos, EarthView.World.Spatial.Math.Vector3 scale, EarthView.World.Spatial.Math.Vector3 rotate)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateBindedEffectPosition_ev_bool_CModelBaseObject_CEffect_CVector3_CVector3_CVector3(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, object.Equals(pBindedObj, null) ? IntPtr.Zero : pBindedObj.NativeObject, object.Equals(pos, null) ? IntPtr.Zero : pos.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(rotate, null) ? IntPtr.Zero : rotate.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateBindedLightPosition_ev_bool_CModelBaseObject_ev_uint32_CVector3_CVector3_CVector3(IntPtr pNativeObject, IntPtr pMainObj, uint bindID, IntPtr pos, IntPtr scale, IntPtr rotate);

				/// <summary>
				/// 更新绑定的光源的姿态
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定光源对象</param>
				/// <param name="pos">绑定光源位置信息</param>
				/// <param name="scale">绑定光源缩放信息</param>
				/// <param name="rotate">绑定光源旋转信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool UpdateBindedLightPosition(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, uint bindID, EarthView.World.Spatial.Math.Vector3 pos, EarthView.World.Spatial.Math.Vector3 scale, EarthView.World.Spatial.Math.Vector3 rotate)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateBindedLightPosition_ev_bool_CModelBaseObject_ev_uint32_CVector3_CVector3_CVector3(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, bindID, object.Equals(pos, null) ? IntPtr.Zero : pos.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(rotate, null) ? IntPtr.Zero : rotate.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateBindedLightProperty_ev_bool_ev_uint32_CLight(IntPtr pNativeObject, uint bindID, IntPtr l);

				/// <summary>
				/// 更新绑定的光源的属性
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定光源对象</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool UpdateBindedLightProperty(uint bindID, EarthView.World.Graphic.Light l)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateBindedLightProperty_ev_bool_ev_uint32_CLight(this.NativeObject, bindID, object.Equals(l, null) ? IntPtr.Zero : l.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateMainModelLocalMatrix_ev_bool_CModelBaseObject_CVector3_CVector3_CVector3(IntPtr pNativeObject, IntPtr pMainObj, IntPtr pos, IntPtr scale, IntPtr rotate);

				/// <summary>
				/// 更新主模型的姿态
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pos">模型位置信息</param>
				/// <param name="scale">模型缩放信息</param>
				/// <param name="rotate">模型旋转信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool UpdateMainModelLocalMatrix(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pMainObj, EarthView.World.Spatial.Math.Vector3 pos, EarthView.World.Spatial.Math.Vector3 scale, EarthView.World.Spatial.Math.Vector3 rotate)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateMainModelLocalMatrix_ev_bool_CModelBaseObject_CVector3_CVector3_CVector3(this.NativeObject, object.Equals(pMainObj, null) ? IntPtr.Zero : pMainObj.NativeObject, object.Equals(pos, null) ? IntPtr.Zero : pos.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(rotate, null) ? IntPtr.Zero : rotate.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateMaterial_ev_bool_CModelBaseObject_CMaterialPtr_StringVector_StringVector(IntPtr pNativeObject, IntPtr pModel, IntPtr matPtr, IntPtr replacedTextures, IntPtr newTextureFilesPath);

				//////**********************************材质编辑**************************************////////////////
				/// <summary>
				/// 更新模型材质
				/// </summary>
				/// <param name="pModel">模型对象</param>
				/// <param name="matPtr">需要更新的模型材质</param>
				/// <returns>成功返回true，失败返回false</returns>
				public bool UpdateMaterial(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pModel, ref EarthView.World.Graphic.MaterialPtr matPtr, EarthView.World.Core.StringVector replacedTextures, EarthView.World.Core.StringVector newTextureFilesPath)
				{
					byte ret=EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateMaterial_ev_bool_CModelBaseObject_CMaterialPtr_StringVector_StringVector(this.NativeObject, object.Equals(pModel, null) ? IntPtr.Zero : pModel.NativeObject, object.Equals(matPtr, null) ? IntPtr.Zero : matPtr.NativeObject, object.Equals(replacedTextures, null) ? IntPtr.Zero : replacedTextures.NativeObject, object.Equals(newTextureFilesPath, null) ? IntPtr.Zero : newTextureFilesPath.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadModelEffectDBManager = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
						private static bool csbLoadModelEffectDBManager = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadModelEffectDBManager = LoadDll.Load("EV_Spatial_3DProxy_d.so");
						private static bool csbLoadModelEffectDBManager = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.so");

					#else 
						private static bool bLoadModelEffectDBManager = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
						private static bool csbLoadModelEffectDBManager = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadModelEffectDBManager = LoadDll.Load("EV_Spatial_3DProxy.dll");
						private static bool csbLoadModelEffectDBManager = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadModelEffectDBManager = LoadDll.Load("EV_Spatial_3DProxy.so");
						private static bool csbLoadModelEffectDBManager = LoadDll.Load("EV_Spatial_3DProxy_CSharp.so");

					#else 
						private static bool bLoadModelEffectDBManager = LoadDll.Load("EV_Spatial_3DProxy.dll");
						private static bool csbLoadModelEffectDBManager = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CModelEffectDBManager", new ModelEffectDBManagerClassFactory());

				public ModelEffectDBManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ModelEffectDBManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ModelEffectDBManager obj = baseObj as  ModelEffectDBManager;
					if (object.Equals(obj, null))
					{
						obj = new ModelEffectDBManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CModelEffectDBManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ModelEffectDBManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ModelEffectDBManager emptyInstance = new ModelEffectDBManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
