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
		namespace FrameWorkProxy
		{
			public class GroupStringinterfaceMap : EarthView.World.Core.BaseObject
			{
				public class GroupStringinterface : EarthView.World.Core.BaseObject
				{
					public GroupStringinterface() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("GroupStringinterface",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					private string mKeyField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_GroupStringinterface_mKey(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_GroupStringinterface_mKey( IntPtr pObject, string value );

					public 					string MKey
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_GroupStringinterface_mKey(this.NativeObject);
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

						set
						{
							mKeyField = value;
							Set_EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_GroupStringinterface_mKey( this.NativeObject,value );
						}
					}

					private EarthView.World.Core.StringInterface mValueField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_GroupStringinterface_mValue(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_GroupStringinterface_mValue( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Core.StringInterface MValue
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_GroupStringinterface_mValue(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mValueField, null)){
								mValueField.NativeObject = __ptr;
								return mValueField;
							}
							EarthView.World.Core.StringInterface csObj = new EarthView.World.Core.StringInterface(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CStringInterface");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Core.StringInterface;
								csObj.BindNativeObject(__ptr, "CStringInterface");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mValueField = value;
							Set_EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_GroupStringinterface_mValue( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGroupStringinterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadGroupStringinterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGroupStringinterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadGroupStringinterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadGroupStringinterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadGroupStringinterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGroupStringinterface = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadGroupStringinterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadGroupStringinterface = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadGroupStringinterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadGroupStringinterface = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadGroupStringinterface = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface", new GroupStringinterfaceClassFactory());

					public GroupStringinterface(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GroupStringinterface FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GroupStringinterface obj = baseObj as  GroupStringinterface;
						if (object.Equals(obj, null))
						{
							obj = new GroupStringinterface(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "GroupStringinterface");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GroupStringinterfaceClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GroupStringinterface emptyInstance = new GroupStringinterface(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public GroupStringinterfaceMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CGroupStringinterfaceMap",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_push_back_void_GroupStringinterface(IntPtr pNativeObject, IntPtr t);

				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				public void Push_back(EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface t)
				{
					EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_push_back_void_GroupStringinterface(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_pop_back_void(IntPtr pNativeObject);

				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Pop_back()
				{
					EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_pop_back_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_front_GroupStringinterface(IntPtr pNativeObject);

				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				public EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface Front()
				{
					IntPtr __ptr = EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_front_GroupStringinterface(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface csObj = new EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "GroupStringinterface");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface;
						csObj.BindNativeObject(__ptr, "GroupStringinterface");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_back_GroupStringinterface(IntPtr pNativeObject);

				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				public EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface Back()
				{
					IntPtr __ptr = EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_back_GroupStringinterface(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface csObj = new EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "GroupStringinterface");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface;
						csObj.BindNativeObject(__ptr, "GroupStringinterface");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_insert_void_ev_uint32_GroupStringinterface(IntPtr pNativeObject, uint pos, IntPtr t);

				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				public void Insert(uint pos, EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface t)
				{
					EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_insert_void_ev_uint32_GroupStringinterface(this.NativeObject, pos, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				public void Remove(ulong pos)
				{
					EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_remove_void_ev_size_t(this.NativeObject, pos);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_empty_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				public bool Empty()
				{
					byte ret=EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_empty_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_at_GroupStringinterface_ev_size_t(IntPtr pNativeObject, ulong n);

				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				public EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface At(ulong n)
				{
					IntPtr __ptr = EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_at_GroupStringinterface_ev_size_t(this.NativeObject, n);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface csObj = new EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "GroupStringinterface");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterface;
						csObj.BindNativeObject(__ptr, "GroupStringinterface");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_size_ev_size_t(IntPtr pNativeObject);

				/// <summary>
				/// 返回元素的数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的数量大小</returns>
				public ulong Size()
				{
					ulong ret=EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_size_ev_size_t(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

				/// <summary>
				/// 改变容器中元素数量大小
				/// </summary>
				/// <param name="newSize">改变的容器中元素数量大小</param>
				/// <returns></returns>
				public void Resize(ulong newSize)
				{
					EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_resize_void_ev_size_t(this.NativeObject, newSize);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				/// <returns></returns>
				public void Reserve(ulong count)
				{
					EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_reserve_void_ev_size_t(this.NativeObject, count);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_clear_void(IntPtr pNativeObject);

				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Clear()
				{
					EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_clear_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_push_ev_bool_EVString_CStringInterface(IntPtr pNativeObject, string key, IntPtr val);

				public bool Push(string key, EarthView.World.Core.StringInterface val)
				{
					byte ret=EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_push_ev_bool_EVString_CStringInterface(this.NativeObject, key, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_getKeys_StringVector(IntPtr pNativeObject);

				public EarthView.World.Core.StringVector GetKeys()
				{
					IntPtr __ptr = EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_getKeys_StringVector(this.NativeObject);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_exist_ev_bool_EVString(IntPtr pNativeObject, string key);

				public bool Exist(string key)
				{
					byte ret=EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_exist_ev_bool_EVString(this.NativeObject, key);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_get_CStringInterface_EVString(IntPtr pNativeObject, string key);

				public EarthView.World.Core.StringInterface Get(string key)
				{
					IntPtr __ptr = EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_get_CStringInterface_EVString(this.NativeObject, key);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.StringInterface csObj = new EarthView.World.Core.StringInterface(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CStringInterface");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.StringInterface;
						csObj.BindNativeObject(__ptr, "CStringInterface");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_erase_void_EVString(IntPtr pNativeObject, string key);

				public void Erase(string key)
				{
					EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_erase_void_EVString(this.NativeObject, key);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadGroupStringinterfaceMap = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadGroupStringinterfaceMap = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadGroupStringinterfaceMap = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
						private static bool csbLoadGroupStringinterfaceMap = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

					#else 
						private static bool bLoadGroupStringinterfaceMap = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadGroupStringinterfaceMap = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadGroupStringinterfaceMap = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadGroupStringinterfaceMap = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadGroupStringinterfaceMap = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
						private static bool csbLoadGroupStringinterfaceMap = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

					#else 
						private static bool bLoadGroupStringinterfaceMap = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadGroupStringinterfaceMap = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap", new GroupStringinterfaceMapClassFactory());

				public GroupStringinterfaceMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static GroupStringinterfaceMap FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					GroupStringinterfaceMap obj = baseObj as  GroupStringinterfaceMap;
					if (object.Equals(obj, null))
					{
						obj = new GroupStringinterfaceMap(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CGroupStringinterfaceMap");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class GroupStringinterfaceMapClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					GroupStringinterfaceMap emptyInstance = new GroupStringinterfaceMap(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
