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
			namespace Atlas
			{
			}
		}
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			public class ModelLayerEditor : EarthView.World.Spatial3D.Layer3DEditor
			{
				/// <summary>
				///  构造函数
				/// </summary>
				/// <returns></returns>
				public ModelLayerEditor() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CModelLayerEditorProxy", null);
					if (!"EarthView.World.Spatial3D.ModelLayerEditor".Equals(((Object)this).GetType().ToString()))
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
				private static extern byte EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool_NoVirtual(IntPtr pNativeObject, byte withUndo);

				/// <summary>
				///  开始编辑
				/// <param name="withUndo">是否支持撤消</param>
				/// </summary>
				/// <returns></returns>
				public new bool StartEditing_NoVirtual(bool withUndo)
				{
					byte ret=EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(withUndo));
					
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
				private static extern byte EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool(IntPtr pNativeObject, byte withUndo);

				/// <summary>
				///  开始编辑
				/// <param name="withUndo">是否支持撤消</param>
				/// </summary>
				/// <returns></returns>
				public override bool StartEditing(bool withUndo)
				{
					byte ret=EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool(this.NativeObject, Convert.ToByte(withUndo));
					
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
				private static extern void EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte isSave);

				/// <summary>
				///  停止编辑
				/// <param name="isSave">是否保存</param>
				/// </summary>
				/// <returns></returns>
				public new void StopEditing_NoVirtual(bool isSave)
				{
					EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(isSave));
					
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
				private static extern void EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool(IntPtr pNativeObject, byte isSave);

				/// <summary>
				///  停止编辑
				/// <param name="isSave">是否保存</param>
				/// </summary>
				/// <returns></returns>
				public override void StopEditing(bool isSave)
				{
					EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool(this.NativeObject, Convert.ToByte(isSave));
					
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
				private static extern void EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				///  保存
				/// </summary>
				/// <returns></returns>
				public new void SaveEditing_NoVirtual()
				{
					EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void(IntPtr pNativeObject);

				/// <summary>
				///  保存
				/// </summary>
				/// <returns></returns>
				public override void SaveEditing()
				{
					EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void(this.NativeObject);
					
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
				private static extern uint EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_NoVirtual(IntPtr pNativeObject, uint id, IntPtr matrix);

				/// <summary>
				///  添加一个可见对象
				/// <param name="id">模型库中模型ID</param>
				/// <param name="matrix">模型在球上的世界变换</param>
				/// </summary>
				/// <returns></returns>
				public new uint AddLayerObject_NoVirtual(uint id, EarthView.World.Spatial.Math.Matrix4 matrix)
				{
					uint ret=EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_NoVirtual(this.NativeObject, id, object.Equals(matrix, null) ? IntPtr.Zero : matrix.NativeObject);
					
					return ret;
					
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
				private static extern uint EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(IntPtr pNativeObject, uint id, IntPtr matrix);

				/// <summary>
				///  添加一个可见对象
				/// <param name="id">模型库中模型ID</param>
				/// <param name="matrix">模型在球上的世界变换</param>
				/// </summary>
				/// <returns></returns>
				public override uint AddLayerObject(uint id, EarthView.World.Spatial.Math.Matrix4 matrix)
				{
					uint ret=EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(this.NativeObject, id, object.Equals(matrix, null) ? IntPtr.Zero : matrix.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64(IntPtr objPtr, IntPtr oldMatrix, double oldDem);

				protected changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64 m_changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64;

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
				private static extern byte EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_NoVirtual(IntPtr pNativeObject, IntPtr objPtr, IntPtr oldMatrix, double oldDem);

				/// <summary>
				///  界面上先移动的模型，再修改对象存储
				/// 2014.1.14修改接口（没有与基类一致），解决模型mesh包围盒中心点不在原点
				/// </summary>
				/// <returns></returns>
				public virtual bool ChangeObjectPosition_NoVirtual(ref EarthView.World.Geometry3D.VisibleObjectPtr objPtr, EarthView.World.Spatial.Math.Matrix4 oldMatrix, double oldDem)
				{
					byte ret=EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_NoVirtual(this.NativeObject, object.Equals(objPtr, null) ? IntPtr.Zero : objPtr.NativeObject, object.Equals(oldMatrix, null) ? IntPtr.Zero : oldMatrix.NativeObject, oldDem);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_Function(IntPtr objPtr, IntPtr oldMatrix, double oldDem)
				{
					EarthView.World.Geometry3D.VisibleObjectPtr csobj_objPtr = new EarthView.World.Geometry3D.VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_objPtr.BindNativeObject(objPtr,"CVisibleObjectPtr");
					csobj_objPtr.Delegate = true;
					IClassFactory csobj_objPtrClassFactory = GlobalClassFactoryMap.Get(csobj_objPtr.GetCppInstanceTypeName());
					if (csobj_objPtrClassFactory != null)
					{
						csobj_objPtr.Delegate = true;
						csobj_objPtr = csobj_objPtrClassFactory.Create() as EarthView.World.Geometry3D.VisibleObjectPtr;
						csobj_objPtr.BindNativeObject(objPtr, "CVisibleObjectPtr");
						csobj_objPtr.Delegate = true;
					}
					EarthView.World.Spatial.Math.Matrix4 csobj_oldMatrix = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_oldMatrix.BindNativeObject(oldMatrix,"CMatrix4");
					csobj_oldMatrix.Delegate = true;
					IClassFactory csobj_oldMatrixClassFactory = GlobalClassFactoryMap.Get(csobj_oldMatrix.GetCppInstanceTypeName());
					if (csobj_oldMatrixClassFactory != null)
					{
						csobj_oldMatrix.Delegate = true;
						csobj_oldMatrix = csobj_oldMatrixClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
						csobj_oldMatrix.BindNativeObject(oldMatrix, "CMatrix4");
						csobj_oldMatrix.Delegate = true;
					}
					
					bool csret=ChangeObjectPosition(ref csobj_objPtr, csobj_oldMatrix, oldDem);
					
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
				private static extern byte EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64(IntPtr pNativeObject, IntPtr objPtr, IntPtr oldMatrix, double oldDem);

				/// <summary>
				///  界面上先移动的模型，再修改对象存储
				/// 2014.1.14修改接口（没有与基类一致），解决模型mesh包围盒中心点不在原点
				/// </summary>
				/// <returns></returns>
				public virtual bool ChangeObjectPosition(ref EarthView.World.Geometry3D.VisibleObjectPtr objPtr, EarthView.World.Spatial.Math.Matrix4 oldMatrix, double oldDem)
				{
					byte ret=EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64(this.NativeObject, object.Equals(objPtr, null) ? IntPtr.Zero : objPtr.NativeObject, object.Equals(oldMatrix, null) ? IntPtr.Zero : oldMatrix.NativeObject, oldDem);
					
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
				private static extern byte EarthView_World_Spatial3D_CModelLayerEditor_changeObjectAttribute_ev_bool_IFeature_IFeature(IntPtr pNativeObject, IntPtr pMeshFeature, IntPtr pOldMeshFeature);

				/// <summary>
				///  修改记录表属性（非用户属性(比如内置属性或只读属性)不会被更新）
				///  记录表属性：数据集的用户属性，可通过编辑记录表来添加用户属性
				///  pMeshFeature = entityDataset->getFeature(id)
				///  pMeshFeature->setValue(val, "customFld");
				///  注：不可用pMeshFeature = pModel->getMeshFeature，因为模型中的feature的包围盒考虑了高程，而数据库中的包围盒不考虑高程
				/// </summary>
				/// <param name="设置新属性值以后的feature">pMeshFeature</param>
				/// <param name="设置新属性值之前的">pOldMeshFeature</param>
				/// <returns></returns>
				public bool ChangeObjectAttribute(EarthView.World.Spatial.GeoDataset.Ifeature pMeshFeature, EarthView.World.Spatial.GeoDataset.Ifeature pOldMeshFeature)
				{
					byte ret=EarthView_World_Spatial3D_CModelLayerEditor_changeObjectAttribute_ev_bool_IFeature_IFeature(this.NativeObject, object.Equals(pMeshFeature, null) ? IntPtr.Zero : pMeshFeature.NativeObject, object.Equals(pOldMeshFeature, null) ? IntPtr.Zero : pOldMeshFeature.NativeObject);
					
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
				private static extern byte EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32_NoVirtual(IntPtr pNativeObject, uint id);

				/// <summary>
				///  删除对象
				/// </summary>
				/// <param name="id">图层中的ID</param>
				/// <returns></returns>
				public new bool DeleteLayerObject_NoVirtual(uint id)
				{
					byte ret=EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32_NoVirtual(this.NativeObject, id);
					
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
				private static extern byte EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32(IntPtr pNativeObject, uint id);

				/// <summary>
				///  删除对象
				/// </summary>
				/// <param name="id">图层中的ID</param>
				/// <returns></returns>
				public override bool DeleteLayerObject(uint id)
				{
					byte ret=EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32(this.NativeObject, id);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadModelLayerEditor = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadModelLayerEditor = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadModelLayerEditor = LoadDll.Load("EV_Spatial3DEngine_d.so");
						private static bool csbLoadModelLayerEditor = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

					#else 
						private static bool bLoadModelLayerEditor = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadModelLayerEditor = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadModelLayerEditor = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadModelLayerEditor = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#elif Linux 
						private static bool bLoadModelLayerEditor = LoadDll.Load("EV_Spatial3DEngine.so");
						private static bool csbLoadModelLayerEditor = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

					#else 
						private static bool bLoadModelLayerEditor = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadModelLayerEditor = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CModelLayerEditor", new ModelLayerEditorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CModelLayerEditorProxy", new ModelLayerEditorClassFactory());

				public ModelLayerEditor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64(IntPtr pObject, changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer(IntPtr pObject, setEditingLayer_CallBack_void_IGlobeLayer pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer(IntPtr pObject, getEditingLayer_CallBack_IGlobeLayer pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool(IntPtr pObject, startEditing_CallBack_ev_bool_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool(IntPtr pObject, stopEditing_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void(IntPtr pObject, saveEditing_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool(IntPtr pObject, isEditing_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool(IntPtr pObject, redo_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool(IntPtr pObject, undo_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool(IntPtr pObject, canRedo_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool(IntPtr pObject, canUndo_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(IntPtr pObject, addLayerObject_CallBack_ev_uint32_ev_uint32_CMatrix4 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(IntPtr pObject, changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32(IntPtr pObject, deleteLayerObject_CallBack_ev_bool_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener(IntPtr pObject, addListener_CallBack_void_CLayer3DEditorListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener(IntPtr pObject, removeListener_CallBack_void_CLayer3DEditorListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32(IntPtr pObject, getListener_CallBack_CLayer3DEditorListener_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32(IntPtr pObject, getNumListener_CallBack_ev_uint32 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64 = EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64_Function;
						GC.KeepAlive(m_changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64(this.NativeObject, m_changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4_ev_real64);
						m_setEditingLayer_CallBack_void_IGlobeLayer = EarthView_World_Spatial3D_CLayer3DEditor_setEditingLayer_void_IGlobeLayer_Function;
						GC.KeepAlive(m_setEditingLayer_CallBack_void_IGlobeLayer);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_setEditingLayer_void_IGlobeLayer(this.NativeObject, m_setEditingLayer_CallBack_void_IGlobeLayer);
						m_getEditingLayer_CallBack_IGlobeLayer = EarthView_World_Spatial3D_CLayer3DEditor_getEditingLayer_IGlobeLayer_Function;
						GC.KeepAlive(m_getEditingLayer_CallBack_IGlobeLayer);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_getEditingLayer_IGlobeLayer(this.NativeObject, m_getEditingLayer_CallBack_IGlobeLayer);
						m_startEditing_CallBack_ev_bool_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_startEditing_ev_bool_ev_bool_Function;
						GC.KeepAlive(m_startEditing_CallBack_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_startEditing_ev_bool_ev_bool(this.NativeObject, m_startEditing_CallBack_ev_bool_ev_bool);
						m_stopEditing_CallBack_void_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_stopEditing_void_ev_bool_Function;
						GC.KeepAlive(m_stopEditing_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_stopEditing_void_ev_bool(this.NativeObject, m_stopEditing_CallBack_void_ev_bool);
						m_saveEditing_CallBack_void = EarthView_World_Spatial3D_CLayer3DEditor_saveEditing_void_Function;
						GC.KeepAlive(m_saveEditing_CallBack_void);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_saveEditing_void(this.NativeObject, m_saveEditing_CallBack_void);
						m_isEditing_CallBack_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_isEditing_ev_bool_Function;
						GC.KeepAlive(m_isEditing_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_isEditing_ev_bool(this.NativeObject, m_isEditing_CallBack_ev_bool);
						m_redo_CallBack_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_redo_ev_bool_Function;
						GC.KeepAlive(m_redo_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_redo_ev_bool(this.NativeObject, m_redo_CallBack_ev_bool);
						m_undo_CallBack_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_undo_ev_bool_Function;
						GC.KeepAlive(m_undo_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_undo_ev_bool(this.NativeObject, m_undo_CallBack_ev_bool);
						m_canRedo_CallBack_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_canRedo_ev_bool_Function;
						GC.KeepAlive(m_canRedo_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_canRedo_ev_bool(this.NativeObject, m_canRedo_CallBack_ev_bool);
						m_canUndo_CallBack_ev_bool = EarthView_World_Spatial3D_CLayer3DEditor_canUndo_ev_bool_Function;
						GC.KeepAlive(m_canUndo_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_canUndo_ev_bool(this.NativeObject, m_canUndo_CallBack_ev_bool);
						m_addLayerObject_CallBack_ev_uint32_ev_uint32_CMatrix4 = EarthView_World_Spatial3D_CLayer3DEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4_Function;
						GC.KeepAlive(m_addLayerObject_CallBack_ev_uint32_ev_uint32_CMatrix4);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_addLayerObject_ev_uint32_ev_uint32_CMatrix4(this.NativeObject, m_addLayerObject_CallBack_ev_uint32_ev_uint32_CMatrix4);
						m_changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4 = EarthView_World_Spatial3D_CLayer3DEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4_Function;
						GC.KeepAlive(m_changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_changeObjectPosition_ev_bool_CVisibleObjectPtr_CMatrix4(this.NativeObject, m_changeObjectPosition_CallBack_ev_bool_CVisibleObjectPtr_CMatrix4);
						m_deleteLayerObject_CallBack_ev_bool_ev_uint32 = EarthView_World_Spatial3D_CLayer3DEditor_deleteLayerObject_ev_bool_ev_uint32_Function;
						GC.KeepAlive(m_deleteLayerObject_CallBack_ev_bool_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_deleteLayerObject_ev_bool_ev_uint32(this.NativeObject, m_deleteLayerObject_CallBack_ev_bool_ev_uint32);
						m_addListener_CallBack_void_CLayer3DEditorListener = EarthView_World_Spatial3D_CLayer3DEditor_addListener_void_CLayer3DEditorListener_Function;
						GC.KeepAlive(m_addListener_CallBack_void_CLayer3DEditorListener);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_addListener_void_CLayer3DEditorListener(this.NativeObject, m_addListener_CallBack_void_CLayer3DEditorListener);
						m_removeListener_CallBack_void_CLayer3DEditorListener = EarthView_World_Spatial3D_CLayer3DEditor_removeListener_void_CLayer3DEditorListener_Function;
						GC.KeepAlive(m_removeListener_CallBack_void_CLayer3DEditorListener);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_removeListener_void_CLayer3DEditorListener(this.NativeObject, m_removeListener_CallBack_void_CLayer3DEditorListener);
						m_getListener_CallBack_CLayer3DEditorListener_ev_uint32 = EarthView_World_Spatial3D_CLayer3DEditor_getListener_CLayer3DEditorListener_ev_uint32_Function;
						GC.KeepAlive(m_getListener_CallBack_CLayer3DEditorListener_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_getListener_CLayer3DEditorListener_ev_uint32(this.NativeObject, m_getListener_CallBack_CLayer3DEditorListener_ev_uint32);
						m_getNumListener_CallBack_ev_uint32 = EarthView_World_Spatial3D_CLayer3DEditor_getNumListener_ev_uint32_Function;
						GC.KeepAlive(m_getNumListener_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Spatial3D_CModelLayerEditor_getNumListener_ev_uint32(this.NativeObject, m_getNumListener_CallBack_ev_uint32);
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
				public static ModelLayerEditor FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ModelLayerEditor obj = baseObj as  ModelLayerEditor;
					if (object.Equals(obj, null))
					{
						obj = new ModelLayerEditor(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CModelLayerEditor");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ModelLayerEditorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ModelLayerEditor emptyInstance = new ModelLayerEditor(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
