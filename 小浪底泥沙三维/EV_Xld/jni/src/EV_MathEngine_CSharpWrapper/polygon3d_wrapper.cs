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
		namespace Spatial
		{
			namespace Math
			{
				/// <summary>
				/// 多边形类,
				/// 定义了三维空间中多边形操作
				/// </summary>
				public class Polygon3D : EarthView.World.Core.BaseObject
				{
					///typedef multimap<CVector3, CVector3>		EdgeMap;
					/// <summary>
					/// 多边形边界集合类
					/// </summary>
					public class EdgeMap : EarthView.World.Core.BaseObject
					{
						/// <summary>
						/// 默认构造函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						public EdgeMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("EdgeMap",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_push_void_CVector3_CVector3(IntPtr pNativeObject, IntPtr key, IntPtr val);

						/// <summary>
						/// 增加动画集合元素
						/// </summary>
						/// <param name="key">键</param>
						/// <param name="val">值</param>
						/// <returns>成功增加true，否则false</returns>
						public void Push(EarthView.World.Spatial.Math.Vector3 key, EarthView.World.Spatial.Math.Vector3 val)
						{
							EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_push_void_CVector3_CVector3(this.NativeObject, object.Equals(key, null) ? IntPtr.Zero : key.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern byte EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_exist_ev_bool_CVector3(IntPtr pNativeObject, IntPtr key);

						/// <summary>
						/// 判断元素是否存在
						/// </summary>
						/// <param name="key">键</param>
						/// <returns>存在true，否则false</returns>
						public bool Exist(EarthView.World.Spatial.Math.Vector3 key)
						{
							byte ret=EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_exist_ev_bool_CVector3(this.NativeObject, object.Equals(key, null) ? IntPtr.Zero : key.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_erase_void_CVector3(IntPtr pNativeObject, IntPtr key);

						/// <summary>
						/// 删除键对应的值
						/// </summary>
						/// <param name="key">键</param>
						/// <returns></returns>
						public void Erase(EarthView.World.Spatial.Math.Vector3 key)
						{
							EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_erase_void_CVector3(this.NativeObject, object.Equals(key, null) ? IntPtr.Zero : key.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern ulong EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_size_ev_size_t(IntPtr pNativeObject);

						/// <summary>
						/// 返回集合的大小
						/// </summary>
						/// <param name=""></param>
						/// <returns>集合的大小</returns>
						public ulong Size()
						{
							ulong ret=EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_size_ev_size_t(this.NativeObject);
							
							return ret;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern ulong EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_count_ev_size_t_CVector3(IntPtr pNativeObject, IntPtr key);

						/// <summary>
						/// 返回键对应值的数量
						/// </summary>
						/// <param name="key">键</param>
						/// <returns>键对应值的数量</returns>
						public ulong Count(EarthView.World.Spatial.Math.Vector3 key)
						{
							ulong ret=EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_count_ev_size_t_CVector3(this.NativeObject, object.Equals(key, null) ? IntPtr.Zero : key.NativeObject);
							
							return ret;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_get_CVector3_CVector3_ev_size_t(IntPtr pNativeObject, IntPtr key, ulong index);

						/// <summary>
						/// 获得指定键值的第几项值
						/// </summary>
						/// <param name="key">键</param>
						/// <param name="index">指定键值的第几项</param>
						/// <returns>返回指定键值的第几项值</returns>
						public EarthView.World.Spatial.Math.Vector3 Get(EarthView.World.Spatial.Math.Vector3 key, ulong index)
						{
							IntPtr __ptr = EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_get_CVector3_CVector3_ev_size_t(this.NativeObject, object.Equals(key, null) ? IntPtr.Zero : key.NativeObject, index);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CVector3");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
								csObj.BindNativeObject(__ptr, "CVector3");
								csObj.Delegate = true;
							}
							return csObj;
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_erase_void_CVector3_ev_size_t(IntPtr pNativeObject, IntPtr key, ulong index);

						/// <summary>
						/// 删除指定键值的第几项
						/// </summary>
						/// <param name="key">键</param>
						/// <param name="index">指定键值的第几项</param>
						/// <returns></returns>
						public void Erase(EarthView.World.Spatial.Math.Vector3 key, ulong index)
						{
							EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_erase_void_CVector3_ev_size_t(this.NativeObject, object.Equals(key, null) ? IntPtr.Zero : key.NativeObject, index);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_clear_void(IntPtr pNativeObject);

						/// <summary>
						/// 清空集合
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						public void Clear()
						{
							EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_clear_void(this.NativeObject);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern byte EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_empty_ev_bool(IntPtr pNativeObject);

						/// <summary>
						/// 判断集合是否为空
						/// </summary>
						/// <param name=""></param>
						/// <returns>集合为空返回true，否则false</returns>
						public bool Empty()
						{
							byte ret=EarthView_World_Spatial_Math_CPolygon3D_EdgeMap_empty_ev_bool(this.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadEdgeMap = LoadDll.Load("EV_MathEngine_d.dll");
								private static bool csbLoadEdgeMap = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadEdgeMap = LoadDll.Load("EV_MathEngine_d.so");
								private static bool csbLoadEdgeMap = LoadDll.Load("EV_MathEngine_CSharp_d.so");

							#else 
								private static bool bLoadEdgeMap = LoadDll.Load("EV_MathEngine_d.dll");
								private static bool csbLoadEdgeMap = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadEdgeMap = LoadDll.Load("EV_MathEngine.dll");
								private static bool csbLoadEdgeMap = LoadDll.Load("EV_MathEngine_CSharp.dll");

							#elif Linux 
								private static bool bLoadEdgeMap = LoadDll.Load("EV_MathEngine.so");
								private static bool csbLoadEdgeMap = LoadDll.Load("EV_MathEngine_CSharp.so");

							#else 
								private static bool bLoadEdgeMap = LoadDll.Load("EV_MathEngine.dll");
								private static bool csbLoadEdgeMap = LoadDll.Load("EV_MathEngine_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CPolygon3D::EdgeMap", new EdgeMapClassFactory());

						public EdgeMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static EdgeMap FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							EdgeMap obj = baseObj as  EdgeMap;
							if (object.Equals(obj, null))
							{
								obj = new EdgeMap(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "EdgeMap");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class EdgeMapClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							EdgeMap emptyInstance = new EdgeMap(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					///typedef std::pair< CVector3, CVector3>		Edge;
					/// <summary>
					/// 多边形边界集合对应键值对类
					/// </summary>
					public class Edge : EarthView.World.Core.BaseObject
					{
						private EarthView.World.Spatial.Math.Vector3 firstField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_Spatial_Math_CPolygon3D_Edge_first(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_Spatial_Math_CPolygon3D_Edge_first( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Spatial.Math.Vector3 First
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Spatial_Math_CPolygon3D_Edge_first(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(firstField, null)){
									firstField.NativeObject = __ptr;
									return firstField;
								}
								EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "CVector3");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
									csObj.BindNativeObject(__ptr, "CVector3");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								firstField = value;
								Set_EarthView_World_Spatial_Math_CPolygon3D_Edge_first( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						private EarthView.World.Spatial.Math.Vector3 secondField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_Spatial_Math_CPolygon3D_Edge_second(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_Spatial_Math_CPolygon3D_Edge_second( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Spatial.Math.Vector3 Second
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Spatial_Math_CPolygon3D_Edge_second(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(secondField, null)){
									secondField.NativeObject = __ptr;
									return secondField;
								}
								EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "CVector3");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
									csObj.BindNativeObject(__ptr, "CVector3");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								secondField = value;
								Set_EarthView_World_Spatial_Math_CPolygon3D_Edge_second( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="fir">键</param>
						/// <param name="sec">值</param>
						/// <returns></returns>
						public Edge(EarthView.World.Spatial.Math.Vector3 fir, EarthView.World.Spatial.Math.Vector3 sec) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valuefir = new BasePtr(fir);
							list.Add("fir", valuefir.PtrVal);
							BasePtr valuesec = new BasePtr(sec);
							list.Add("sec", valuesec.PtrVal);
							Create("Edge", list);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Spatial_Math_CPolygon3D_Edge_OperatorAssign_Edge_Edge(IntPtr pNativeObject, IntPtr other);

						/// <summary>
						/// 重载"="操作符
						/// </summary>
						/// <param name="other">其它键值对类对象</param>
						/// <returns>赋值结果</returns>
						public EarthView.World.Spatial.Math.Polygon3D.Edge OperatorAssign(EarthView.World.Spatial.Math.Polygon3D.Edge other)
						{
							IntPtr __ptr = EarthView_World_Spatial_Math_CPolygon3D_Edge_OperatorAssign_Edge_Edge(this.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
							
							EarthView.World.Spatial.Math.Polygon3D.Edge csObj = new EarthView.World.Spatial.Math.Polygon3D.Edge(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "Edge");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Polygon3D.Edge;
								csObj.BindNativeObject(__ptr, "Edge");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadEdge = LoadDll.Load("EV_MathEngine_d.dll");
								private static bool csbLoadEdge = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadEdge = LoadDll.Load("EV_MathEngine_d.so");
								private static bool csbLoadEdge = LoadDll.Load("EV_MathEngine_CSharp_d.so");

							#else 
								private static bool bLoadEdge = LoadDll.Load("EV_MathEngine_d.dll");
								private static bool csbLoadEdge = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadEdge = LoadDll.Load("EV_MathEngine.dll");
								private static bool csbLoadEdge = LoadDll.Load("EV_MathEngine_CSharp.dll");

							#elif Linux 
								private static bool bLoadEdge = LoadDll.Load("EV_MathEngine.so");
								private static bool csbLoadEdge = LoadDll.Load("EV_MathEngine_CSharp.so");

							#else 
								private static bool bLoadEdge = LoadDll.Load("EV_MathEngine.dll");
								private static bool csbLoadEdge = LoadDll.Load("EV_MathEngine_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CPolygon3D::Edge", new EdgeClassFactory());

						public Edge(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static Edge FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							Edge obj = baseObj as  Edge;
							if (object.Equals(obj, null))
							{
								obj = new Edge(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "Edge");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class EdgeClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							Edge emptyInstance = new Edge(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public Polygon3D() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CPolygon3D",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="cpy"></param>
					/// <returns></returns>
					public Polygon3D(EarthView.World.Spatial.Math.Polygon3D cpy) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuecpy = new BasePtr(cpy);
						list.Add("cpy", valuecpy.PtrVal);
						Create("CPolygon3D", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CPolygon3D_insertVertex_void_CVector3_ev_size_t(IntPtr pNativeObject, IntPtr vdata, ulong vertexIndex);

					/// <summary>
					/// 插入顶点坐标和索引（必须共面）
					/// </summary>
					/// <param name="vdata">顶点数据</param>
					/// <param name="vertexIndex">顶点索引</param>
					/// <returns></returns>
					public void InsertVertex(EarthView.World.Spatial.Math.Vector3 vdata, ulong vertexIndex)
					{
						EarthView_World_Spatial_Math_CPolygon3D_insertVertex_void_CVector3_ev_size_t(this.NativeObject, object.Equals(vdata, null) ? IntPtr.Zero : vdata.NativeObject, vertexIndex);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CPolygon3D_insertVertex_void_CVector3(IntPtr pNativeObject, IntPtr vdata);

					/// <summary>
					/// 插入顶点坐标
					/// </summary>
					/// <param name="vdata">顶点数据</param>
					/// <returns></returns>
					public void InsertVertex(EarthView.World.Spatial.Math.Vector3 vdata)
					{
						EarthView_World_Spatial_Math_CPolygon3D_insertVertex_void_CVector3(this.NativeObject, object.Equals(vdata, null) ? IntPtr.Zero : vdata.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CPolygon3D_getVertex_CVector3_ev_size_t(IntPtr pNativeObject, ulong vertex);

					/// <summary>
					/// 根据顶点索引返回顶点数据
					/// </summary>
					/// <param name="vertex">顶点索引</param>
					/// <returns>顶点数据</returns>
					public EarthView.World.Spatial.Math.Vector3 GetVertex(ulong vertex)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CPolygon3D_getVertex_CVector3_ev_size_t(this.NativeObject, vertex);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CPolygon3D_setVertex_void_CVector3_ev_size_t(IntPtr pNativeObject, IntPtr vdata, ulong vertexIndex);

					/// <summary>
					/// 根据顶点索引设置顶点坐标
					/// </summary>
					/// <param name="vdata">顶点数据</param>
					/// <param name="vertexIndex">顶点索引</param>
					/// <returns></returns>
					public void SetVertex(EarthView.World.Spatial.Math.Vector3 vdata, ulong vertexIndex)
					{
						EarthView_World_Spatial_Math_CPolygon3D_setVertex_void_CVector3_ev_size_t(this.NativeObject, object.Equals(vdata, null) ? IntPtr.Zero : vdata.NativeObject, vertexIndex);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CPolygon3D_removeDuplicates_void(IntPtr pNativeObject);

					/// <summary>
					/// 移除相等的坐标点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void RemoveDuplicates()
					{
						EarthView_World_Spatial_Math_CPolygon3D_removeDuplicates_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Spatial_Math_CPolygon3D_getVertexCount_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					///获得顶点数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回顶点数量</returns>
					public ulong GetVertexCount()
					{
						ulong ret=EarthView_World_Spatial_Math_CPolygon3D_getVertexCount_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CPolygon3D_getNormal_CVector3(IntPtr pNativeObject);

					/// <summary>
					///获得平面法线
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回平面法线向量</returns>
					public EarthView.World.Spatial.Math.Vector3 GetNormal()
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CPolygon3D_getNormal_CVector3(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CPolygon3D_deleteVertex_void_ev_size_t(IntPtr pNativeObject, ulong vertex);

					/// <summary>
					/// 根据顶点索引删除顶点数据
					/// </summary>
					/// <param name="vertex">顶点索引</param>
					/// <returns></returns>
					public void DeleteVertex(ulong vertex)
					{
						EarthView_World_Spatial_Math_CPolygon3D_deleteVertex_void_ev_size_t(this.NativeObject, vertex);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CPolygon3D_isPointInside_ev_bool_CVector3(IntPtr pNativeObject, IntPtr point);

					/// <summary>
					/// 判断点是否在多边形内
					/// </summary>
					/// <param name="point">点数据</param>
					/// <returns>在多边形内返回true，否则false</returns>
					public bool IsPointInside(EarthView.World.Spatial.Math.Vector3 point)
					{
						byte ret=EarthView_World_Spatial_Math_CPolygon3D_isPointInside_ev_bool_CVector3(this.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CPolygon3D_storeEdges_void_EdgeMap(IntPtr pNativeObject, IntPtr edgeMap);

					/// <summary>
					/// 按逆时针方向存储多边形边
					/// </summary>
					/// <param name="edgeMap">多边形边集合</param>
					/// <returns></returns>
					public void StoreEdges(EarthView.World.Spatial.Math.Polygon3D.EdgeMap edgeMap)
					{
						EarthView_World_Spatial_Math_CPolygon3D_storeEdges_void_EdgeMap(this.NativeObject, object.Equals(edgeMap, null) ? IntPtr.Zero : edgeMap.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CPolygon3D_reset_void(IntPtr pNativeObject);

					/// <summary>
					/// 重置多边形对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Reset()
					{
						EarthView_World_Spatial_Math_CPolygon3D_reset_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CPolygon3D_OperatorEquals_ev_bool_CPolygon3D(IntPtr pNativeObject, IntPtr rhs);

					/// <summary>
					/// 判断多边形是否相等
					/// </summary>
					/// <param name="rhs">多边形对象</param>
					/// <returns>相等返回true，否则false</returns>
					public 					static bool operator ==(EarthView.World.Spatial.Math.Polygon3D mCPolygon3D,EarthView.World.Spatial.Math.Polygon3D rhs)
					{
						byte ret=EarthView_World_Spatial_Math_CPolygon3D_OperatorEquals_ev_bool_CPolygon3D(mCPolygon3D.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CPolygon3D_OperatorNotEquals_ev_bool_CPolygon3D(IntPtr pNativeObject, IntPtr rhs);

					/// <summary>
					/// 判断多边形是否非相等
					/// </summary>
					/// <param name="rhs">多边形对象</param>
					/// <returns>非相等返回true，否则false</returns>
					public 					static bool operator !=(EarthView.World.Spatial.Math.Polygon3D mCPolygon3D,EarthView.World.Spatial.Math.Polygon3D rhs)
					{
						byte ret=EarthView_World_Spatial_Math_CPolygon3D_OperatorNotEquals_ev_bool_CPolygon3D(mCPolygon3D.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadPolygon3D = LoadDll.Load("EV_MathEngine_d.dll");
							private static bool csbLoadPolygon3D = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadPolygon3D = LoadDll.Load("EV_MathEngine_d.so");
							private static bool csbLoadPolygon3D = LoadDll.Load("EV_MathEngine_CSharp_d.so");

						#else 
							private static bool bLoadPolygon3D = LoadDll.Load("EV_MathEngine_d.dll");
							private static bool csbLoadPolygon3D = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadPolygon3D = LoadDll.Load("EV_MathEngine.dll");
							private static bool csbLoadPolygon3D = LoadDll.Load("EV_MathEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadPolygon3D = LoadDll.Load("EV_MathEngine.so");
							private static bool csbLoadPolygon3D = LoadDll.Load("EV_MathEngine_CSharp.so");

						#else 
							private static bool bLoadPolygon3D = LoadDll.Load("EV_MathEngine.dll");
							private static bool csbLoadPolygon3D = LoadDll.Load("EV_MathEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CPolygon3D", new Polygon3DClassFactory());

					public Polygon3D(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Polygon3D FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Polygon3D obj = baseObj as  Polygon3D;
						if (object.Equals(obj, null))
						{
							obj = new Polygon3D(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CPolygon3D");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Polygon3DClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Polygon3D emptyInstance = new Polygon3D(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
