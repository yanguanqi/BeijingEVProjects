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
		namespace Graphic
		{
			public enum RENDERQUEUEGROUPID
			{
						RENDER_QUEUE_BACKGROUND = 0,
						RENDER_QUEUE_SKIES_EARLY = 5,
						RENDER_QUEUE_1 = 10,
						RENDER_QUEUE_2 = 20,
						RENDER_QUEUE_WORLD_GEOMETRY_1 = 25,
						RENDER_QUEUE_3 = 30,
						RENDER_QUEUE_4 = 40,
						RENDER_QUEUE_MAIN = 50,
						RENDER_QUEUE_6 = 60,
						RENDER_QUEUE_7 = 70,
						RENDER_QUEUE_WORLD_GEOMETRY_2 = 75,
						RENDER_QUEUE_8 = 80,
						RENDER_QUEUE_9 = 90,
						RENDER_QUEUE_TRANSPARENT = 94,
						RENDER_QUEUE_SKIES_LATE = 95,
						RENDER_QUEUE_OVERLAY = 100,
						RENDER_QUEUE_MAX = 105
			
			}

			/// <summary>
			/// 管理渲染队列中的场景对象
			/// </summary>
			public class RenderQueue : EarthView.World.Core.AllocatedObject
			{
				public class RenderQueueGroupMap : EarthView.World.Core.BaseObject
				{
					public class RenderQueueGroupPair : EarthView.World.Core.BaseObject
					{
						public RenderQueueGroupPair(byte f, EarthView.World.Graphic.RenderQueueGroup ref_s) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valuef = new BasePtr(f);
							list.Add("f", valuef.PtrVal);
							BasePtr valueref_s = new BasePtr(ref_s);
							list.Add("ref_s", valueref_s.PtrVal);
							Create("RenderQueueGroupPair", list);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						public RenderQueueGroupPair() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("RenderQueueGroupPair",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern byte Get_EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupPair_first(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupPair_first( IntPtr pObject, byte value );

						public 						byte First
						{
							get
							{
								byte ret=Get_EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupPair_first(this.NativeObject);
								
								return ret;
								
							}

							set
							{
								Set_EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupPair_first(this.NativeObject,value);
							}
						}

						private EarthView.World.Graphic.RenderQueueGroup secondField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupPair_second(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupPair_second( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Graphic.RenderQueueGroup Second
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupPair_second(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(secondField, null)){
									secondField.NativeObject = __ptr;
									return secondField;
								}
								EarthView.World.Graphic.RenderQueueGroup csObj = new EarthView.World.Graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "CRenderQueueGroup");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup;
									csObj.BindNativeObject(__ptr, "CRenderQueueGroup");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								secondField = value;
								Set_EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupPair_second( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadRenderQueueGroupPair = LoadDll.Load("EV_Graphic_d.dll");
								private static bool csbLoadRenderQueueGroupPair = LoadDll.Load("EV_Graphic_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadRenderQueueGroupPair = LoadDll.Load("EV_Graphic_d.so");
								private static bool csbLoadRenderQueueGroupPair = LoadDll.Load("EV_Graphic_CSharp_d.so");

							#else 
								private static bool bLoadRenderQueueGroupPair = LoadDll.Load("EV_Graphic_d.dll");
								private static bool csbLoadRenderQueueGroupPair = LoadDll.Load("EV_Graphic_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadRenderQueueGroupPair = LoadDll.Load("EV_Graphic.dll");
								private static bool csbLoadRenderQueueGroupPair = LoadDll.Load("EV_Graphic_CSharp.dll");

							#elif Linux 
								private static bool bLoadRenderQueueGroupPair = LoadDll.Load("EV_Graphic.so");
								private static bool csbLoadRenderQueueGroupPair = LoadDll.Load("EV_Graphic_CSharp.so");

							#else 
								private static bool bLoadRenderQueueGroupPair = LoadDll.Load("EV_Graphic.dll");
								private static bool csbLoadRenderQueueGroupPair = LoadDll.Load("EV_Graphic_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair", new RenderQueueGroupPairClassFactory());

						public RenderQueueGroupPair(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static RenderQueueGroupPair FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							RenderQueueGroupPair obj = baseObj as  RenderQueueGroupPair;
							if (object.Equals(obj, null))
							{
								obj = new RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "RenderQueueGroupPair");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class RenderQueueGroupPairClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							RenderQueueGroupPair emptyInstance = new RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class RenderQueueGroupIterator : EarthView.World.Core.BaseObject
					{
						public RenderQueueGroupIterator() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("RenderQueueGroupIterator",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						public RenderQueueGroupIterator(EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap ref_renderQueueGroupMap, byte index) : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							NameValuePairList list = new NameValuePairList();
							BasePtr valueref_renderQueueGroupMap = new BasePtr(ref_renderQueueGroupMap);
							list.Add("ref_renderQueueGroupMap", valueref_renderQueueGroupMap.PtrVal);
							BasePtr valueindex = new BasePtr(index);
							list.Add("index", valueindex.PtrVal);
							Create("RenderQueueGroupIterator", list);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern byte EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupIterator_OperatorNotEquals_bool_RenderQueueGroupIterator(IntPtr pNativeObject, IntPtr o);

						public 						static bool operator !=(EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator mRenderQueueGroupIterator,EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator o)
						{
							byte ret=EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupIterator_OperatorNotEquals_bool_RenderQueueGroupIterator(mRenderQueueGroupIterator.NativeObject, object.Equals(o, null) ? IntPtr.Zero : o.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern byte EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupIterator_OperatorEquals_bool_RenderQueueGroupIterator(IntPtr pNativeObject, IntPtr o);

						public 						static bool operator ==(EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator mRenderQueueGroupIterator,EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator o)
						{
							byte ret=EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupIterator_OperatorEquals_bool_RenderQueueGroupIterator(mRenderQueueGroupIterator.NativeObject, object.Equals(o, null) ? IntPtr.Zero : o.NativeObject);
							
							return Convert.ToBoolean(ret);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupIterator_getValue_RenderQueueGroupPair(IntPtr pNativeObject);

						public EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair GetValue()
						{
							IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupIterator_getValue_RenderQueueGroupPair(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair csObj = new EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair;
								csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadRenderQueueGroupIterator = LoadDll.Load("EV_Graphic_d.dll");
								private static bool csbLoadRenderQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadRenderQueueGroupIterator = LoadDll.Load("EV_Graphic_d.so");
								private static bool csbLoadRenderQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp_d.so");

							#else 
								private static bool bLoadRenderQueueGroupIterator = LoadDll.Load("EV_Graphic_d.dll");
								private static bool csbLoadRenderQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadRenderQueueGroupIterator = LoadDll.Load("EV_Graphic.dll");
								private static bool csbLoadRenderQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

							#elif Linux 
								private static bool bLoadRenderQueueGroupIterator = LoadDll.Load("EV_Graphic.so");
								private static bool csbLoadRenderQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp.so");

							#else 
								private static bool bLoadRenderQueueGroupIterator = LoadDll.Load("EV_Graphic.dll");
								private static bool csbLoadRenderQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator", new RenderQueueGroupIteratorClassFactory());

						public RenderQueueGroupIterator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static RenderQueueGroupIterator FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							RenderQueueGroupIterator obj = baseObj as  RenderQueueGroupIterator;
							if (object.Equals(obj, null))
							{
								obj = new RenderQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "RenderQueueGroupIterator");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class RenderQueueGroupIteratorClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							RenderQueueGroupIterator emptyInstance = new RenderQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public RenderQueueGroupMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("RenderQueueGroupMap",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_insert_void_RenderQueueGroupPair(IntPtr pNativeObject, IntPtr v);

					public void Insert(EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair v)
					{
						EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_insert_void_RenderQueueGroupPair(this.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_find_RenderQueueGroupIterator_ev_uint8(IntPtr pNativeObject, byte key);

					public EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator Find(byte key)
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_find_RenderQueueGroupIterator_ev_uint8(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator csObj = new EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RenderQueueGroupIterator");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator;
							csObj.BindNativeObject(__ptr, "RenderQueueGroupIterator");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_begin_RenderQueueGroupIterator(IntPtr pNativeObject);

					public EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator Begin()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_begin_RenderQueueGroupIterator(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator csObj = new EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RenderQueueGroupIterator");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator;
							csObj.BindNativeObject(__ptr, "RenderQueueGroupIterator");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_end_RenderQueueGroupIterator(IntPtr pNativeObject);

					public EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator End()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_end_RenderQueueGroupIterator(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator csObj = new EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RenderQueueGroupIterator");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupIterator;
							csObj.BindNativeObject(__ptr, "RenderQueueGroupIterator");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_clear_void(IntPtr pNativeObject);

					public void Clear()
					{
						EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_clear_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRenderQueueGroupMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadRenderQueueGroupMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRenderQueueGroupMap = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadRenderQueueGroupMap = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadRenderQueueGroupMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadRenderQueueGroupMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRenderQueueGroupMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadRenderQueueGroupMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadRenderQueueGroupMap = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadRenderQueueGroupMap = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadRenderQueueGroupMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadRenderQueueGroupMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap", new RenderQueueGroupMapClassFactory());

					public RenderQueueGroupMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RenderQueueGroupMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RenderQueueGroupMap obj = baseObj as  RenderQueueGroupMap;
						if (object.Equals(obj, null))
						{
							obj = new RenderQueueGroupMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "RenderQueueGroupMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RenderQueueGroupMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RenderQueueGroupMap emptyInstance = new RenderQueueGroupMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				///class EV_GRAPHIC_DLL RenderQueueGroupPair : public EarthView::World::Core::CBaseObject
				///{
				///      ev_private:
				///	// <summary>
				///	// 构造函数
				///	// </summary>
				///	// <param name="pList">构造函数参数键值对表</param>
				///	// <returns></returns>
				///	RenderQueueGroupPair(_in	EarthView::World::Core::CNameValuePairList*pList);
				///public:
				///	// <summary>
				///	// 默认构造函数
				///	// </summary>
				///	// <param name=""></param>
				///	// <returns></returns>
				///	RenderQueueGroupPair();
				///	ev_uint8 first;
				///	EarthView::World::Graphic::CRenderQueueGroup* second;
				///};
				public class QueueGroupIterator : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="lst">迭代器对应集合</param>
					/// <returns></returns>
					public QueueGroupIterator(ref EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap lst) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelst = new BasePtr(lst);
						list.Add("lst", valuelst.PtrVal);
						Create("QueueGroupIterator", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="other">其它迭代器</param>
					/// <returns></returns>
					public QueueGroupIterator(EarthView.World.Graphic.RenderQueue.QueueGroupIterator other) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueother = new BasePtr(other);
						list.Add("other", valueother.PtrVal);
						Create("QueueGroupIterator", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_hasMoreElements_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 判断迭代器是否到达容器末尾
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true，否则false</returns>
					public bool HasMoreElements()
					{
						byte ret=EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_hasMoreElements_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_moveNext_void(IntPtr pNativeObject);

					/// <summary>
					/// 迭代器位置后移
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void MoveNext()
					{
						EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_moveNext_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ushort EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_nextKey_ev_uint16(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的键
					/// </summary>
					/// <param name=""></param>
					/// <returns>键</returns>
					public ushort NextKey()
					{
						ushort ret=EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_nextKey_ev_uint16(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_nextValue_CRenderQueueGroup(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的值
					/// </summary>
					/// <param name=""></param>
					/// <returns>值</returns>
					public EarthView.World.Graphic.RenderQueueGroup NextValue()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_nextValue_CRenderQueueGroup(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueueGroup csObj = new EarthView.World.Graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderQueueGroup");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup;
							csObj.BindNativeObject(__ptr, "CRenderQueueGroup");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr[] EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_nextValuePtr_CRenderQueueGroup(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的值指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>值地址</returns>
					public EarthView.World.Graphic.RenderQueueGroup[] NextValuePtr()
					{
						IntPtr[] ret=EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_nextValuePtr_CRenderQueueGroup(this.NativeObject);
						
						EarthView.World.Graphic.RenderQueueGroup[] csObjs=new EarthView.World.Graphic.RenderQueueGroup[ret.Length];
						for (int i = 0; i < ret.Length; i++)
						{
						EarthView.World.Graphic.RenderQueueGroup csObj = new EarthView.World.Graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(ret[i], "CRenderQueueGroup");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup;
							csObj.BindNativeObject(ret[i], "CRenderQueueGroup");
						}
						csObjs[i]=csObj;
						}
						return csObjs;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_next_CRenderQueueGroup(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的值
					/// </summary>
					/// <param name=""></param>
					/// <returns>值</returns>
					public EarthView.World.Graphic.RenderQueueGroup Next()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_next_CRenderQueueGroup(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueueGroup csObj = new EarthView.World.Graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderQueueGroup");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup;
							csObj.BindNativeObject(__ptr, "CRenderQueueGroup");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_getBegin_RenderQueueGroupPair(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器首键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>首键值对</returns>
					public EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair GetBegin()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_getBegin_RenderQueueGroupPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair csObj = new EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair;
							csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_getEnd_RenderQueueGroupPair(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器尾键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>尾键值对</returns>
					public EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair GetEnd()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_getEnd_RenderQueueGroupPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair csObj = new EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair;
							csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_getCurrent_RenderQueueGroupPair(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>当前键值对</returns>
					public EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair GetCurrent()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_getCurrent_RenderQueueGroupPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair csObj = new EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair;
							csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadQueueGroupIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadQueueGroupIterator = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadQueueGroupIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadQueueGroupIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadQueueGroupIterator = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadQueueGroupIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueue::QueueGroupIterator", new QueueGroupIteratorClassFactory());

					public QueueGroupIterator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static QueueGroupIterator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						QueueGroupIterator obj = baseObj as  QueueGroupIterator;
						if (object.Equals(obj, null))
						{
							obj = new QueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "QueueGroupIterator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class QueueGroupIteratorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						QueueGroupIterator emptyInstance = new QueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ConstQueueGroupIterator : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="lst">迭代器对应集合</param>
					/// <returns></returns>
					public ConstQueueGroupIterator(ref EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap lst) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelst = new BasePtr(lst);
						list.Add("lst", valuelst.PtrVal);
						Create("ConstQueueGroupIterator", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="other">其它迭代器</param>
					/// <returns></returns>
					public ConstQueueGroupIterator(EarthView.World.Graphic.RenderQueue.ConstQueueGroupIterator other) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueother = new BasePtr(other);
						list.Add("other", valueother.PtrVal);
						Create("ConstQueueGroupIterator", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_OperatorAssign_ConstQueueGroupIterator_ConstQueueGroupIterator(IntPtr pNativeObject, IntPtr other);

					/// <summary>
					/// 赋值符号"="的重载
					/// </summary>
					/// <param name="other">NodeTrackIterator类的引用</param>
					/// <returns>返回赋值后的引用</returns>
					public EarthView.World.Graphic.RenderQueue.ConstQueueGroupIterator OperatorAssign(EarthView.World.Graphic.RenderQueue.ConstQueueGroupIterator other)
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_OperatorAssign_ConstQueueGroupIterator_ConstQueueGroupIterator(this.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
						EarthView.World.Graphic.RenderQueue.ConstQueueGroupIterator csObj = new EarthView.World.Graphic.RenderQueue.ConstQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ConstQueueGroupIterator");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.ConstQueueGroupIterator;
							csObj.BindNativeObject(__ptr, "ConstQueueGroupIterator");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_hasMoreElements_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 判断迭代器是否到达容器末尾
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true，否则false</returns>
					public bool HasMoreElements()
					{
						byte ret=EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_hasMoreElements_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_moveNext_void(IntPtr pNativeObject);

					/// <summary>
					/// 迭代器位置后移
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void MoveNext()
					{
						EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_moveNext_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ushort EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_nextKey_ev_uint16(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的键
					/// </summary>
					/// <param name=""></param>
					/// <returns>键</returns>
					public ushort NextKey()
					{
						ushort ret=EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_nextKey_ev_uint16(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_nextValue_CRenderQueueGroup(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的值
					/// </summary>
					/// <param name=""></param>
					/// <returns>值</returns>
					public EarthView.World.Graphic.RenderQueueGroup NextValue()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_nextValue_CRenderQueueGroup(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueueGroup csObj = new EarthView.World.Graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderQueueGroup");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup;
							csObj.BindNativeObject(__ptr, "CRenderQueueGroup");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr[] EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_nextValuePtr_CRenderQueueGroup(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的值指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>值地址</returns>
					public EarthView.World.Graphic.RenderQueueGroup[] NextValuePtr()
					{
						IntPtr[] ret=EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_nextValuePtr_CRenderQueueGroup(this.NativeObject);
						
						EarthView.World.Graphic.RenderQueueGroup[] csObjs=new EarthView.World.Graphic.RenderQueueGroup[ret.Length];
						for (int i = 0; i < ret.Length; i++)
						{
						EarthView.World.Graphic.RenderQueueGroup csObj = new EarthView.World.Graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(ret[i], "CRenderQueueGroup");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup;
							csObj.BindNativeObject(ret[i], "CRenderQueueGroup");
						}
						csObjs[i]=csObj;
						}
						return csObjs;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_next_CRenderQueueGroup(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前的值
					/// </summary>
					/// <param name=""></param>
					/// <returns>值</returns>
					public EarthView.World.Graphic.RenderQueueGroup Next()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_next_CRenderQueueGroup(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueueGroup csObj = new EarthView.World.Graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderQueueGroup");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup;
							csObj.BindNativeObject(__ptr, "CRenderQueueGroup");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_getBegin_RenderQueueGroupPair(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器首键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>首键值对</returns>
					public EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair GetBegin()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_getBegin_RenderQueueGroupPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair csObj = new EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair;
							csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_getEnd_RenderQueueGroupPair(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器尾键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>尾键值对</returns>
					public EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair GetEnd()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_getEnd_RenderQueueGroupPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair csObj = new EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair;
							csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_getCurrent_RenderQueueGroupPair(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器当前键值对
					/// </summary>
					/// <param name=""></param>
					/// <returns>当前键值对</returns>
					public EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair GetCurrent()
					{
						IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_getCurrent_RenderQueueGroupPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair csObj = new EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.RenderQueueGroupMap.RenderQueueGroupPair;
							csObj.BindNativeObject(__ptr, "RenderQueueGroupPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadConstQueueGroupIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadConstQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadConstQueueGroupIterator = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadConstQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadConstQueueGroupIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadConstQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadConstQueueGroupIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadConstQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadConstQueueGroupIterator = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadConstQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadConstQueueGroupIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadConstQueueGroupIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator", new ConstQueueGroupIteratorClassFactory());

					public ConstQueueGroupIterator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ConstQueueGroupIterator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ConstQueueGroupIterator obj = baseObj as  ConstQueueGroupIterator;
						if (object.Equals(obj, null))
						{
							obj = new ConstQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ConstQueueGroupIterator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ConstQueueGroupIteratorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ConstQueueGroupIterator emptyInstance = new ConstQueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 监听被加入渲染队列中的消息
				/// </summary>
				public class RenderableListener : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public RenderableListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRenderableListenerProxy", null);
						if (!"EarthView.World.Graphic.RenderQueue+RenderableListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte renderableQueued_CallBack_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue(IntPtr rend, byte groupID, ushort priority, IntPtr[] ppTech, IntPtr pQueue);

					protected renderableQueued_CallBack_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue m_renderableQueued_CallBack_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_NoVirtual(IntPtr pNativeObject, IntPtr rend, byte groupID, ushort priority, ref IntPtr[] ppTech, IntPtr pQueue);

					/// <summary>
					/// 当渲染接口被加到队列中时调用该方法
					/// </summary>
					/// <param name="rend">渲染接口</param>
					/// <param name="groupID">渲染队列的ID号</param>
					/// <param name="priority">渲染接口给的优先权</param>
					/// <param name="ppTech">技术指针的指针</param>
					/// <param name="pQueue">加入对象指向渲染队列的指针</param>
					/// <returns>允许渲染接口加入队列时返回true，否则返回false</returns>
					public virtual bool RenderableQueued_NoVirtual(EarthView.World.Graphic.Renderable rend, byte groupID, ushort priority, ref EarthView.World.Graphic.Technique[] ppTech, EarthView.World.Graphic.RenderQueue pQueue)
					{
						IntPtr[] ptrsppTech = new IntPtr[ppTech.Length];
						for (int i = 0; i < ppTech.Length; i++)
						{
						ptrsppTech[i]=ppTech[i].NativeObject;
						}
						
						byte ret=EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_NoVirtual(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, groupID, priority, ref ptrsppTech,object.Equals(pQueue, null) ? IntPtr.Zero : pQueue.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_Function(IntPtr rend, byte groupID, ushort priority, IntPtr[] ppTech, IntPtr pQueue)
					{
						EarthView.World.Graphic.Renderable csobj_rend = new EarthView.World.Graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_rend.BindNativeObject(rend,"CRenderable");
						csobj_rend.Delegate = true;
						IClassFactory csobj_rendClassFactory = GlobalClassFactoryMap.Get(csobj_rend.GetCppInstanceTypeName());
						if (csobj_rendClassFactory != null)
						{
							csobj_rend.Delegate = true;
							csobj_rend = csobj_rendClassFactory.Create() as EarthView.World.Graphic.Renderable;
							csobj_rend.BindNativeObject(rend, "CRenderable");
							csobj_rend.Delegate = true;
						}
						EarthView.World.Graphic.Technique[] csObjsppTech=new EarthView.World.Graphic.Technique[ppTech.Length];
						for (int i = 0; i < ppTech.Length; i++)
						{
						EarthView.World.Graphic.Technique csObj = new EarthView.World.Graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(ppTech[i], "CTechnique");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Technique;
							csObj.BindNativeObject(ppTech[i], "CTechnique");
						}
						csObjsppTech[i]=csObj;
						}
						EarthView.World.Graphic.RenderQueue csobj_pQueue = new EarthView.World.Graphic.RenderQueue(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pQueue.BindNativeObject(pQueue,"CRenderQueue");
						csobj_pQueue.Delegate = true;
						IClassFactory csobj_pQueueClassFactory = GlobalClassFactoryMap.Get(csobj_pQueue.GetCppInstanceTypeName());
						if (csobj_pQueueClassFactory != null)
						{
							csobj_pQueue.Delegate = true;
							csobj_pQueue = csobj_pQueueClassFactory.Create() as EarthView.World.Graphic.RenderQueue;
							csobj_pQueue.BindNativeObject(pQueue, "CRenderQueue");
							csobj_pQueue.Delegate = true;
						}
						
						bool csret=RenderableQueued(csobj_rend, groupID, priority, ref csObjsppTech, csobj_pQueue);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue(IntPtr pNativeObject, IntPtr rend, byte groupID, ushort priority, ref IntPtr[] ppTech, IntPtr pQueue);

					/// <summary>
					/// 当渲染接口被加到队列中时调用该方法
					/// </summary>
					/// <param name="rend">渲染接口</param>
					/// <param name="groupID">渲染队列的ID号</param>
					/// <param name="priority">渲染接口给的优先权</param>
					/// <param name="ppTech">技术指针的指针</param>
					/// <param name="pQueue">加入对象指向渲染队列的指针</param>
					/// <returns>允许渲染接口加入队列时返回true，否则返回false</returns>
					public virtual bool RenderableQueued(EarthView.World.Graphic.Renderable rend, byte groupID, ushort priority, ref EarthView.World.Graphic.Technique[] ppTech, EarthView.World.Graphic.RenderQueue pQueue)
					{
						IntPtr[] ptrsppTech = new IntPtr[ppTech.Length];
						for (int i = 0; i < ppTech.Length; i++)
						{
						ptrsppTech[i]=ppTech[i].NativeObject;
						}
						
						byte ret=EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue(this.NativeObject, object.Equals(rend, null) ? IntPtr.Zero : rend.NativeObject, groupID, priority, ref ptrsppTech,object.Equals(pQueue, null) ? IntPtr.Zero : pQueue.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRenderableListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadRenderableListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRenderableListener = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadRenderableListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadRenderableListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadRenderableListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRenderableListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadRenderableListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadRenderableListener = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadRenderableListener = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadRenderableListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadRenderableListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueue::CRenderableListener", new RenderableListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueue::CRenderableListenerProxy", new RenderableListenerClassFactory());

					public RenderableListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue(IntPtr pObject, renderableQueued_CallBack_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_renderableQueued_CallBack_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue = EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_Function;
							GC.KeepAlive(m_renderableQueued_CallBack_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue);
							EV_RegisterCallback_EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue(this.NativeObject, m_renderableQueued_CallBack_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue);
						}
					}
					public static RenderableListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RenderableListener obj = baseObj as  RenderableListener;
						if (object.Equals(obj, null))
						{
							obj = new RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRenderableListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RenderableListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RenderableListener emptyInstance = new RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public RenderQueue() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CRenderQueue",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_clear_void_ev_bool(IntPtr pNativeObject, byte destroyPassMaps);

				/// <summary>
				/// 清空队列
				/// </summary>
				/// <param name="destroyPassMaps"></param>
				/// <returns></returns>
				public void Clear(bool destroyPassMaps)
				{
					EarthView_World_Graphic_CRenderQueue_clear_void_ev_bool(this.NativeObject, Convert.ToByte(destroyPassMaps));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_clear_void(IntPtr pNativeObject);

				/// <summary>
				/// 清空队列
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Clear()
				{
					EarthView_World_Graphic_CRenderQueue_clear_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CRenderQueue_getQueueGroup_CRenderQueueGroup_ev_uint8(IntPtr pNativeObject, byte qid);

				/// <summary>
				/// 获得渲染队列组
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Graphic.RenderQueueGroup GetQueueGroup(byte qid)
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_getQueueGroup_CRenderQueueGroup_ev_uint8(this.NativeObject, qid);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderQueueGroup csObj = new EarthView.World.Graphic.RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRenderQueueGroup");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueueGroup;
						csObj.BindNativeObject(__ptr, "CRenderQueueGroup");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_addRenderable_void_CRenderable_ev_uint8_ev_uint16(IntPtr pNativeObject, IntPtr ref_pRend, byte groupID, ushort priority);

				/// <summary>
				/// 向队列中添加一个渲染对象
				/// </summary>
				/// <param name="pRend">指针指向添加到队列中的对象</param>
				/// <param name="groupID">组的ID号</param>
				/// <param name="priority">队列组中渲染对象的属性</param>
				/// <returns></returns>
				public void AddRenderable(EarthView.World.Graphic.Renderable ref_pRend, byte groupID, ushort priority)
				{
					EarthView_World_Graphic_CRenderQueue_addRenderable_void_CRenderable_ev_uint8_ev_uint16(this.NativeObject, object.Equals(ref_pRend, null) ? IntPtr.Zero : ref_pRend.NativeObject, groupID, priority);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_addRenderable_void_CRenderable_ev_uint8(IntPtr pNativeObject, IntPtr ref_pRend, byte groupId);

				/// <summary>
				/// 向队列中添加一个渲染对象
				/// </summary>
				/// <param name="pRend">指针指向添加到队列中的对象</param>
				/// <param name="groupID">组的ID号</param>
				/// <returns></returns>
				public void AddRenderable(EarthView.World.Graphic.Renderable ref_pRend, byte groupId)
				{
					EarthView_World_Graphic_CRenderQueue_addRenderable_void_CRenderable_ev_uint8(this.NativeObject, object.Equals(ref_pRend, null) ? IntPtr.Zero : ref_pRend.NativeObject, groupId);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_addRenderable_void_CRenderable(IntPtr pNativeObject, IntPtr ref_pRend);

				/// <summary>
				/// 向队列中添加一个渲染对象
				/// </summary>
				/// <param name="pRend">指针指向添加到队列中的对象</param>
				/// <returns></returns>
				public void AddRenderable(EarthView.World.Graphic.Renderable ref_pRend)
				{
					EarthView_World_Graphic_CRenderQueue_addRenderable_void_CRenderable(this.NativeObject, object.Equals(ref_pRend, null) ? IntPtr.Zero : ref_pRend.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CRenderQueue_existRenderable_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 判断队列中是否存在渲染对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public bool ExistRenderable()
				{
					byte ret=EarthView_World_Graphic_CRenderQueue_existRenderable_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CRenderQueue_getDefaultQueueGroup_ev_uint8(IntPtr pNativeObject);

				/// <summary>
				/// 获得当前默认的队列组
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public byte GetDefaultQueueGroup()
				{
					byte ret=EarthView_World_Graphic_CRenderQueue_getDefaultQueueGroup_ev_uint8(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_setDefaultRenderablePriority_void_ev_uint16(IntPtr pNativeObject, ushort priority);

				/// <summary>
				/// 设置当前默认的渲染属性
				/// </summary>
				/// <param name="priority">渲染对象的属性</param>
				/// <returns></returns>
				public void SetDefaultRenderablePriority(ushort priority)
				{
					EarthView_World_Graphic_CRenderQueue_setDefaultRenderablePriority_void_ev_uint16(this.NativeObject, priority);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Graphic_CRenderQueue_getDefaultRenderablePriority_ev_uint16(IntPtr pNativeObject);

				/// <summary>
				/// 获得当前默认的渲染属性
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public ushort GetDefaultRenderablePriority()
				{
					ushort ret=EarthView_World_Graphic_CRenderQueue_getDefaultRenderablePriority_ev_uint16(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_setDefaultQueueGroup_void_ev_uint8(IntPtr pNativeObject, byte grp);

				/// <summary>
				/// 设置当前默认的队列组
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void SetDefaultQueueGroup(byte grp)
				{
					EarthView_World_Graphic_CRenderQueue_setDefaultQueueGroup_void_ev_uint8(this.NativeObject, grp);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CRenderQueue__getQueueGroupIterator_QueueGroupIterator(IntPtr pNativeObject);

				/// <summary>
				/// 内部方法，返回一个队列组的迭代器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Graphic.RenderQueue.QueueGroupIterator _getQueueGroupIterator()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderQueue__getQueueGroupIterator_QueueGroupIterator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderQueue.QueueGroupIterator csObj = new EarthView.World.Graphic.RenderQueue.QueueGroupIterator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "QueueGroupIterator");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.QueueGroupIterator;
						csObj.BindNativeObject(__ptr, "QueueGroupIterator");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_setSplitPassesByLightingType_void_ev_bool(IntPtr pNativeObject, byte split);

				/// <summary>
				/// 设置是否队列通过它们的光照类型划分通路
				/// </summary>
				/// <param name="split"></param>
				/// <returns></returns>
				public void SetSplitPassesByLightingType(bool split)
				{
					EarthView_World_Graphic_CRenderQueue_setSplitPassesByLightingType_void_ev_bool(this.NativeObject, Convert.ToByte(split));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CRenderQueue_getSplitPassesByLightingType_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获得是否队列通过它们的光照类型划分通路
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public bool GetSplitPassesByLightingType()
				{
					byte ret=EarthView_World_Graphic_CRenderQueue_getSplitPassesByLightingType_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_setSplitNoShadowPasses_void_ev_bool(IntPtr pNativeObject, byte split);

				/// <summary>
				/// 设置队列是否对有当某个阴影技术被使用时需要的阴影而已经关闭的通路进行划分划分
				/// </summary>
				/// <param name="split"></param>
				/// <returns></returns>
				public void SetSplitNoShadowPasses(bool split)
				{
					EarthView_World_Graphic_CRenderQueue_setSplitNoShadowPasses_void_ev_bool(this.NativeObject, Convert.ToByte(split));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CRenderQueue_getSplitNoShadowPasses_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获得队列是否对有当某个阴影技术被使用时需要的阴影而已经关闭的通路进行划分划分
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public bool GetSplitNoShadowPasses()
				{
					byte ret=EarthView_World_Graphic_CRenderQueue_getSplitNoShadowPasses_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_setShadowCastersCannotBeReceivers_void_ev_bool(IntPtr pNativeObject, byte ind);

				/// <summary>
				/// 设置是否投射阴影的实体被视为不接收阴影
				/// </summary>
				/// <param name="ind"></param>
				/// <returns></returns>
				public void SetShadowCastersCannotBeReceivers(bool ind)
				{
					EarthView_World_Graphic_CRenderQueue_setShadowCastersCannotBeReceivers_void_ev_bool(this.NativeObject, Convert.ToByte(ind));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CRenderQueue_getShadowCastersCannotBeReceivers_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获得是否投射阴影的实体被视为不接收阴影
				/// </summary>
				/// <param name="ind"></param>
				/// <returns></returns>
				public bool GetShadowCastersCannotBeReceivers()
				{
					byte ret=EarthView_World_Graphic_CRenderQueue_getShadowCastersCannotBeReceivers_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_setRenderableListener_void_CRenderableListener(IntPtr pNativeObject, IntPtr ref_listener);

				/// <summary>
				/// 在队列上设置一个渲染接口监听器
				/// </summary>
				/// <param name="listener">监听器</param>
				/// <returns></returns>
				public void SetRenderableListener(EarthView.World.Graphic.RenderQueue.RenderableListener ref_listener)
				{
					EarthView_World_Graphic_CRenderQueue_setRenderableListener_void_CRenderableListener(this.NativeObject, object.Equals(ref_listener, null) ? IntPtr.Zero : ref_listener.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CRenderQueue_getRenderableListener_CRenderableListener(IntPtr pNativeObject);

				public EarthView.World.Graphic.RenderQueue.RenderableListener GetRenderableListener()
				{
					IntPtr __ptr = EarthView_World_Graphic_CRenderQueue_getRenderableListener_CRenderableListener(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderQueue.RenderableListener csObj = new EarthView.World.Graphic.RenderQueue.RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRenderableListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderQueue.RenderableListener;
						csObj.BindNativeObject(__ptr, "CRenderableListener");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_merge_void_CRenderQueue(IntPtr pNativeObject, IntPtr rhs);

				/// <summary>
				/// 合并渲染队列
				/// </summary>
				/// <param name="rhs"></param>
				/// <returns></returns>
				public void Merge(EarthView.World.Graphic.RenderQueue rhs)
				{
					EarthView_World_Graphic_CRenderQueue_merge_void_CRenderQueue(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CRenderQueue_processVisibleObject_void_CMovableObject_CCamera_ev_bool_VisibleObjectsBoundsInfo(IntPtr pNativeObject, IntPtr mo, IntPtr cam, byte onlyShadowCasters, IntPtr visibleBounds);

				/// <summary>
				/// 获得一个可见的实体添加到队列中
				/// </summary>
				/// <param name="mo"></param>
				/// <param name="cam"></param>
				/// <param name="onlyShadowCasters"></param>
				/// <param name="visibleBounds"></param>
				/// <returns></returns>
				public void ProcessVisibleObject(EarthView.World.Graphic.MovableObject mo, EarthView.World.Graphic.Camera cam, bool onlyShadowCasters, EarthView.World.Graphic.VisibleObjectsBoundsInfo visibleBounds)
				{
					EarthView_World_Graphic_CRenderQueue_processVisibleObject_void_CMovableObject_CCamera_ev_bool_VisibleObjectsBoundsInfo(this.NativeObject, object.Equals(mo, null) ? IntPtr.Zero : mo.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject, Convert.ToByte(onlyShadowCasters), object.Equals(visibleBounds, null) ? IntPtr.Zero : visibleBounds.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadRenderQueue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderQueue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRenderQueue = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadRenderQueue = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadRenderQueue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadRenderQueue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRenderQueue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderQueue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadRenderQueue = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadRenderQueue = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadRenderQueue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadRenderQueue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CRenderQueue", new RenderQueueClassFactory());

				public RenderQueue(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static RenderQueue FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RenderQueue obj = baseObj as  RenderQueue;
					if (object.Equals(obj, null))
					{
						obj = new RenderQueue(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CRenderQueue");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RenderQueueClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RenderQueue emptyInstance = new RenderQueue(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
