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
		namespace Spatial2D
		{
			namespace Analyst
			{
				public class RasterTileMosaic : EarthView.World.Core.AllocatedObject
				{
					public class TileMosaicListener : EarthView.World.Core.AllocatedObject
					{
						public TileMosaicListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("CTileMosaicListenerProxy", null);
							if (!"EarthView.World.Spatial2D.Analyst.RasterTileMosaic+TileMosaicListener".Equals(((Object)this).GetType().ToString()))
							{
								this.SetCustomExtend(true);
							}
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
						protected delegate void progressChanged_CallBack_void_ev_uint8(byte percent);

						protected progressChanged_CallBack_void_ev_uint8 m_progressChanged_CallBack_void_ev_uint8;

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_NoVirtual(IntPtr pNativeObject, byte percent);

						public virtual void ProgressChanged_NoVirtual(byte percent)
						{
							EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_NoVirtual(this.NativeObject, percent);
							
						}

						protected  void EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_Function(byte percent)
						{
							ProgressChanged(percent);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8(IntPtr pNativeObject, byte percent);

						public virtual void ProgressChanged(byte percent)
						{
							EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8(this.NativeObject, percent);
							
						}

						[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
						protected delegate void finished_CallBack_void();

						protected finished_CallBack_void m_finished_CallBack_void;

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_NoVirtual(IntPtr pNativeObject);

						public virtual void Finished_NoVirtual()
						{
							EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_NoVirtual(this.NativeObject);
							
						}

						protected  void EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_Function()
						{
							Finished();
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void(IntPtr pNativeObject);

						public virtual void Finished()
						{
							EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void(this.NativeObject);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadTileMosaicListener = LoadDll.Load("EV_RasterAnalysis_d.dll");
								private static bool csbLoadTileMosaicListener = LoadDll.Load("EV_RasterAnalysis_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadTileMosaicListener = LoadDll.Load("EV_RasterAnalysis_d.so");
								private static bool csbLoadTileMosaicListener = LoadDll.Load("EV_RasterAnalysis_CSharp_d.so");

							#else 
								private static bool bLoadTileMosaicListener = LoadDll.Load("EV_RasterAnalysis_d.dll");
								private static bool csbLoadTileMosaicListener = LoadDll.Load("EV_RasterAnalysis_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadTileMosaicListener = LoadDll.Load("EV_RasterAnalysis.dll");
								private static bool csbLoadTileMosaicListener = LoadDll.Load("EV_RasterAnalysis_CSharp.dll");

							#elif Linux 
								private static bool bLoadTileMosaicListener = LoadDll.Load("EV_RasterAnalysis.so");
								private static bool csbLoadTileMosaicListener = LoadDll.Load("EV_RasterAnalysis_CSharp.so");

							#else 
								private static bool bLoadTileMosaicListener = LoadDll.Load("EV_RasterAnalysis.dll");
								private static bool csbLoadTileMosaicListener = LoadDll.Load("EV_RasterAnalysis_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener", new TileMosaicListenerClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListenerProxy", new TileMosaicListenerClassFactory());

						public TileMosaicListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8(IntPtr pObject, progressChanged_CallBack_void_ev_uint8 pCallback);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void(IntPtr pObject, finished_CallBack_void pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_progressChanged_CallBack_void_ev_uint8 = EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_Function;
								GC.KeepAlive(m_progressChanged_CallBack_void_ev_uint8);
								EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8(this.NativeObject, m_progressChanged_CallBack_void_ev_uint8);
								m_finished_CallBack_void = EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_Function;
								GC.KeepAlive(m_finished_CallBack_void);
								EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void(this.NativeObject, m_finished_CallBack_void);
							}
						}
						public static TileMosaicListener FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							TileMosaicListener obj = baseObj as  TileMosaicListener;
							if (object.Equals(obj, null))
							{
								obj = new TileMosaicListener(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "CTileMosaicListener");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class TileMosaicListenerClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							TileMosaicListener emptyInstance = new TileMosaicListener(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public RasterTileMosaic() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRasterTileMosaic",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_mosaic_ev_bool_ITileDataset_IRasterDataset_CTileMosaicListener(IntPtr pNativeObject, IntPtr pTileDataset, IntPtr pDstDataset, IntPtr pListener);

					public bool Mosaic(EarthView.World.Spatial.Itiledataset pTileDataset, EarthView.World.Spatial.GeoDataset.Irasterdataset pDstDataset, EarthView.World.Spatial2D.Analyst.RasterTileMosaic.TileMosaicListener pListener)
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_mosaic_ev_bool_ITileDataset_IRasterDataset_CTileMosaicListener(this.NativeObject, object.Equals(pTileDataset, null) ? IntPtr.Zero : pTileDataset.NativeObject, object.Equals(pDstDataset, null) ? IntPtr.Zero : pDstDataset.NativeObject, object.Equals(pListener, null) ? IntPtr.Zero : pListener.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRasterTileMosaic = LoadDll.Load("EV_RasterAnalysis_d.dll");
							private static bool csbLoadRasterTileMosaic = LoadDll.Load("EV_RasterAnalysis_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRasterTileMosaic = LoadDll.Load("EV_RasterAnalysis_d.so");
							private static bool csbLoadRasterTileMosaic = LoadDll.Load("EV_RasterAnalysis_CSharp_d.so");

						#else 
							private static bool bLoadRasterTileMosaic = LoadDll.Load("EV_RasterAnalysis_d.dll");
							private static bool csbLoadRasterTileMosaic = LoadDll.Load("EV_RasterAnalysis_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRasterTileMosaic = LoadDll.Load("EV_RasterAnalysis.dll");
							private static bool csbLoadRasterTileMosaic = LoadDll.Load("EV_RasterAnalysis_CSharp.dll");

						#elif Linux 
							private static bool bLoadRasterTileMosaic = LoadDll.Load("EV_RasterAnalysis.so");
							private static bool csbLoadRasterTileMosaic = LoadDll.Load("EV_RasterAnalysis_CSharp.so");

						#else 
							private static bool bLoadRasterTileMosaic = LoadDll.Load("EV_RasterAnalysis.dll");
							private static bool csbLoadRasterTileMosaic = LoadDll.Load("EV_RasterAnalysis_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRasterTileMosaic", new RasterTileMosaicClassFactory());

					public RasterTileMosaic(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RasterTileMosaic FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RasterTileMosaic obj = baseObj as  RasterTileMosaic;
						if (object.Equals(obj, null))
						{
							obj = new RasterTileMosaic(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRasterTileMosaic");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RasterTileMosaicClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RasterTileMosaic emptyInstance = new RasterTileMosaic(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
