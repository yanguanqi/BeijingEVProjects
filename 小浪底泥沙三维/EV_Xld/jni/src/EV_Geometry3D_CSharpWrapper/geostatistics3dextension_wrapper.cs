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
		namespace Geometry3D
		{
			/// <summary>
			/// 三维统计专题图扩展类
			/// </summary>
			public class GeoStatistics3DExtension : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 存放符号和偏移矩阵的结构体
				/// </summary>
				public class TagSymbolTransform : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public TagSymbolTransform() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("TagSymbolTransform",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					private EarthView.World.Spatial.Display.Isymbol mpSymbolField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Geometry3D_CGeoStatistics3DExtension_TagSymbolTransform_mpSymbol(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Geometry3D_CGeoStatistics3DExtension_TagSymbolTransform_mpSymbol( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Display.Isymbol MpSymbol
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Geometry3D_CGeoStatistics3DExtension_TagSymbolTransform_mpSymbol(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mpSymbolField, null)){
								mpSymbolField.NativeObject = __ptr;
								return mpSymbolField;
							}
							EarthView.World.Spatial.Display.Isymbol csObj = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "ISymbol");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
								csObj.BindNativeObject(__ptr, "ISymbol");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mpSymbolField = value;
							Set_EarthView_World_Geometry3D_CGeoStatistics3DExtension_TagSymbolTransform_mpSymbol( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.Spatial.Math.Matrix4 mMatrix4Field;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Geometry3D_CGeoStatistics3DExtension_TagSymbolTransform_mMatrix4(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Geometry3D_CGeoStatistics3DExtension_TagSymbolTransform_mMatrix4( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Matrix4 MMatrix4
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Geometry3D_CGeoStatistics3DExtension_TagSymbolTransform_mMatrix4(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mMatrix4Field, null)){
								mMatrix4Field.NativeObject = __ptr;
								return mMatrix4Field;
							}
							EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CMatrix4");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
								csObj.BindNativeObject(__ptr, "CMatrix4");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mMatrix4Field = value;
							Set_EarthView_World_Geometry3D_CGeoStatistics3DExtension_TagSymbolTransform_mMatrix4( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTagSymbolTransform = LoadDll.Load("EV_Geometry3D_d.dll");
							private static bool csbLoadTagSymbolTransform = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTagSymbolTransform = LoadDll.Load("EV_Geometry3D_d.so");
							private static bool csbLoadTagSymbolTransform = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

						#else 
							private static bool bLoadTagSymbolTransform = LoadDll.Load("EV_Geometry3D_d.dll");
							private static bool csbLoadTagSymbolTransform = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTagSymbolTransform = LoadDll.Load("EV_Geometry3D.dll");
							private static bool csbLoadTagSymbolTransform = LoadDll.Load("EV_Geometry3D_CSharp.dll");

						#elif Linux 
							private static bool bLoadTagSymbolTransform = LoadDll.Load("EV_Geometry3D.so");
							private static bool csbLoadTagSymbolTransform = LoadDll.Load("EV_Geometry3D_CSharp.so");

						#else 
							private static bool bLoadTagSymbolTransform = LoadDll.Load("EV_Geometry3D.dll");
							private static bool csbLoadTagSymbolTransform = LoadDll.Load("EV_Geometry3D_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform", new TagSymbolTransformClassFactory());

					public TagSymbolTransform(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static TagSymbolTransform FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TagSymbolTransform obj = baseObj as  TagSymbolTransform;
						if (object.Equals(obj, null))
						{
							obj = new TagSymbolTransform(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "TagSymbolTransform");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TagSymbolTransformClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TagSymbolTransform emptyInstance = new TagSymbolTransform(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="smg">场景管理器</param>
				/// <returns></returns>
				public GeoStatistics3DExtension(EarthView.World.Graphic.SceneManager smg) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuesmg = new BasePtr(smg);
					list.Add("smg", valuesmg.PtrVal);
					Create("CGeoStatistics3DExtensionProxy", list);
					if (!"EarthView.World.Geometry3D.GeoStatistics3DExtension".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CGeoStatistics3DExtension_addSymbolTransform_void_ISymbol_CMatrix4(IntPtr pNativeObject, IntPtr symbol, IntPtr matrix);

				/// <summary>
				/// 添加符号、偏移矩阵
				/// </summary>
				/// <param name="symbol">符号</param>
				/// <param name="matrix">偏移矩阵</param>
				/// <returns></returns>
				public void AddSymbolTransform(EarthView.World.Spatial.Display.Isymbol symbol, EarthView.World.Spatial.Math.Matrix4 matrix)
				{
					EarthView_World_Geometry3D_CGeoStatistics3DExtension_addSymbolTransform_void_ISymbol_CMatrix4(this.NativeObject, object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject, object.Equals(matrix, null) ? IntPtr.Zero : matrix.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CGeoStatistics3DExtension_setSymbolTransform_void_ev_uint32_ISymbol_CMatrix4(IntPtr pNativeObject, uint index, IntPtr symbol, IntPtr matrix);

				/// <summary>
				/// 设置符号、偏移矩阵
				/// </summary>
				/// <param name="index">索引</param>
				/// <param name="symbol">符号</param>
				/// <param name="matrix">矩阵</param>
				/// <returns></returns>
				public void SetSymbolTransform(uint index, EarthView.World.Spatial.Display.Isymbol symbol, EarthView.World.Spatial.Math.Matrix4 matrix)
				{
					EarthView_World_Geometry3D_CGeoStatistics3DExtension_setSymbolTransform_void_ev_uint32_ISymbol_CMatrix4(this.NativeObject, index, object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject, object.Equals(matrix, null) ? IntPtr.Zero : matrix.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Geometry3D_CGeoStatistics3DExtension_getSymbolTransformCount_ev_uint32(IntPtr pNativeObject);

				/// <summary>
				/// 获取符号偏移矩阵个数
				/// </summary>
				/// <param name="index"></param>
				/// <returns>个数</returns>
				public uint GetSymbolTransformCount()
				{
					uint ret=EarthView_World_Geometry3D_CGeoStatistics3DExtension_getSymbolTransformCount_ev_uint32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Geometry3D_CGeoStatistics3DExtension_getTransformMatrix_CMatrix4_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取符号偏移矩阵
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>偏移矩阵</returns>
				public EarthView.World.Spatial.Math.Matrix4 GetTransformMatrix(uint index)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CGeoStatistics3DExtension_getTransformMatrix_CMatrix4_ev_uint32(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMatrix4");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
						csObj.BindNativeObject(__ptr, "CMatrix4");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Geometry3D_CGeoStatistics3DExtension_getSymbol_ISymbol_ev_uint32(IntPtr pNativeObject, uint index);

				/// <summary>
				/// 获取符号
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>符号</returns>
				public EarthView.World.Spatial.Display.Isymbol GetSymbol(uint index)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CGeoStatistics3DExtension_getSymbol_ISymbol_ev_uint32(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Display.Isymbol csObj = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ISymbol");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
						csObj.BindNativeObject(__ptr, "ISymbol");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CGeoStatistics3DExtension_setPosition_void_CVector3(IntPtr pNativeObject, IntPtr position);

				/// <summary>
				/// 设置八叉树索引的中心点位置
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>符号</returns>
				public void SetPosition(EarthView.World.Spatial.Math.Vector3 position)
				{
					EarthView_World_Geometry3D_CGeoStatistics3DExtension_setPosition_void_CVector3(this.NativeObject, object.Equals(position, null) ? IntPtr.Zero : position.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CGeoStatistics3DExtension_build_void(IntPtr pNativeObject);

				/// <summary>
				/// 建立三维统计专题图扩展对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Build()
				{
					EarthView_World_Geometry3D_CGeoStatistics3DExtension_build_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CGeoStatistics3DExtension_render_void(IntPtr pNativeObject);

				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Render()
				{
					EarthView_World_Geometry3D_CGeoStatistics3DExtension_render_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Geometry3D_CGeoStatistics3DExtension_updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool_ISymbol(IntPtr pNativeObject, byte resetTextStyle, byte derenderTxt, byte reCreate, byte attachLabel, IntPtr psymbol);

				/// <summary>
				/// 更新字体注记
				/// </summary>
				/// <param name="resetTextStyle">是否重置字体的样式</param>
				/// <param name="derenderTxt">是否不渲染字体</param>
				/// <param name="reCreate">是否重新创建</param>
				/// <param name="attachLabel">是否挂接</param>
				/// <param name="psymbol">存放字体风格的符号</param>
				/// <returns>如果返回true，则更新字体成功，否则失败</returns>
				public bool UpdateLabel(bool resetTextStyle, bool derenderTxt, bool reCreate, bool attachLabel, EarthView.World.Spatial.Display.Isymbol psymbol)
				{
					byte ret=EarthView_World_Geometry3D_CGeoStatistics3DExtension_updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool_ISymbol(this.NativeObject, Convert.ToByte(resetTextStyle), Convert.ToByte(derenderTxt), Convert.ToByte(reCreate), Convert.ToByte(attachLabel), object.Equals(psymbol, null) ? IntPtr.Zero : psymbol.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CGeoStatistics3DExtension_derender_void(IntPtr pNativeObject);

				/// <summary>
				/// 不渲染字体以及扩展对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Derender()
				{
					EarthView_World_Geometry3D_CGeoStatistics3DExtension_derender_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CGeoStatistics3DExtension_layoutLabels_void(IntPtr pNativeObject);

				public void LayoutLabels()
				{
					EarthView_World_Geometry3D_CGeoStatistics3DExtension_layoutLabels_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setLabelVisibleDistance_CallBack_void_ev_real64(double dis);

				protected setLabelVisibleDistance_CallBack_void_ev_real64 m_setLabelVisibleDistance_CallBack_void_ev_real64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_NoVirtual(IntPtr pNativeObject, double dis);

				/// <summary>
				/// 设置注记可见距离
				/// </summary>
				/// <param name="dis">可见距离</param>
				/// <returns></returns>
				public virtual void SetLabelVisibleDistance_NoVirtual(double dis)
				{
					EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_NoVirtual(this.NativeObject, dis);
					
				}

				protected  void EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_Function(double dis)
				{
					SetLabelVisibleDistance(dis);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64(IntPtr pNativeObject, double dis);

				/// <summary>
				/// 设置注记可见距离
				/// </summary>
				/// <param name="dis">可见距离</param>
				/// <returns></returns>
				public virtual void SetLabelVisibleDistance(double dis)
				{
					EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64(this.NativeObject, dis);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte setInvisibleIndices_CallBack_ev_bool_IntVector(IntPtr indices);

				protected setInvisibleIndices_CallBack_ev_bool_IntVector m_setInvisibleIndices_CallBack_ev_bool_IntVector;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_NoVirtual(IntPtr pNativeObject, IntPtr indices);

				/// <summary>
				/// 设置不可见索引
				/// </summary>
				/// <param name="indices">不可见索引</param>
				/// <returns></returns>
				public virtual bool SetInvisibleIndices_NoVirtual(EarthView.World.Core.IntVector indices)
				{
					byte ret=EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_NoVirtual(this.NativeObject, object.Equals(indices, null) ? IntPtr.Zero : indices.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_Function(IntPtr indices)
				{
					EarthView.World.Core.IntVector csobj_indices = new EarthView.World.Core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_indices.BindNativeObject(indices,"IntVector");
					IClassFactory csobj_indicesClassFactory = GlobalClassFactoryMap.Get(csobj_indices.GetCppInstanceTypeName());
					if (csobj_indicesClassFactory != null)
					{
						csobj_indices.Delegate = true;
						csobj_indices = csobj_indicesClassFactory.Create() as EarthView.World.Core.IntVector;
						csobj_indices.BindNativeObject(indices, "IntVector");
					}
					
					bool csret=SetInvisibleIndices(csobj_indices);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector(IntPtr pNativeObject, IntPtr indices);

				/// <summary>
				/// 设置不可见索引
				/// </summary>
				/// <param name="indices">不可见索引</param>
				/// <returns></returns>
				public virtual bool SetInvisibleIndices(EarthView.World.Core.IntVector indices)
				{
					byte ret=EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector(this.NativeObject, object.Equals(indices, null) ? IntPtr.Zero : indices.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadGeoStatistics3DExtension = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadGeoStatistics3DExtension = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadGeoStatistics3DExtension = LoadDll.Load("EV_Geometry3D_d.so");
						private static bool csbLoadGeoStatistics3DExtension = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

					#else 
						private static bool bLoadGeoStatistics3DExtension = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadGeoStatistics3DExtension = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadGeoStatistics3DExtension = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadGeoStatistics3DExtension = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#elif Linux 
						private static bool bLoadGeoStatistics3DExtension = LoadDll.Load("EV_Geometry3D.so");
						private static bool csbLoadGeoStatistics3DExtension = LoadDll.Load("EV_Geometry3D_CSharp.so");

					#else 
						private static bool bLoadGeoStatistics3DExtension = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadGeoStatistics3DExtension = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoStatistics3DExtension", new GeoStatistics3DExtensionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoStatistics3DExtensionProxy", new GeoStatistics3DExtensionClassFactory());

				public GeoStatistics3DExtension(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64(IntPtr pObject, setLabelVisibleDistance_CallBack_void_ev_real64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector(IntPtr pObject, setInvisibleIndices_CallBack_ev_bool_IntVector pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_setLabelVisibleDistance_CallBack_void_ev_real64 = EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_Function;
						GC.KeepAlive(m_setLabelVisibleDistance_CallBack_void_ev_real64);
						EV_RegisterCallback_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64(this.NativeObject, m_setLabelVisibleDistance_CallBack_void_ev_real64);
						m_setInvisibleIndices_CallBack_ev_bool_IntVector = EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_Function;
						GC.KeepAlive(m_setInvisibleIndices_CallBack_ev_bool_IntVector);
						EV_RegisterCallback_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector(this.NativeObject, m_setInvisibleIndices_CallBack_ev_bool_IntVector);
					}
				}
				public static GeoStatistics3DExtension FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					GeoStatistics3DExtension obj = baseObj as  GeoStatistics3DExtension;
					if (object.Equals(obj, null))
					{
						obj = new GeoStatistics3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CGeoStatistics3DExtension");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class GeoStatistics3DExtensionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					GeoStatistics3DExtension emptyInstance = new GeoStatistics3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
