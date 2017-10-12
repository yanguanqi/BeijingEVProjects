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
				public class ImageCut : EarthView.World.Core.AllocatedObject
				{
					public ImageCut() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CImageCut",  null);
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
					private static extern int EarthView_World_Spatial2D_Analyst_CImageCut_ImageCutByAOI_ev_int32_char_char_char(IntPtr pNativeObject, byte[] pszSrcFile, byte[] pszDstFile, byte[] pszAOIWKT);

					///<summary>
					///图像aoi裁切（由路径）
					///<summary>
					/// <param = "pszSrcFile">输入文件路径</param>
					///<param = "pszDstFile">输出文件路径</param>
					///<param = "pszAOIWKT">裁切AOI，使用WKT字符串格式，坐标是图像行列号
					///如const char* pszAOIWKT = "POLYGON((400 500,400 1500,1400 1500,400 500))";</param>
					///<returns>返回值</returns>
					///<summary>
					public int ImageCutByAOI(byte[] pszSrcFile, byte[] pszDstFile, byte[] pszAOIWKT)
					{
						int ret=EarthView_World_Spatial2D_Analyst_CImageCut_ImageCutByAOI_ev_int32_char_char_char(this.NativeObject, pszSrcFile, pszDstFile, pszAOIWKT);
						
						return ret;
						
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
					private static extern int EarthView_World_Spatial2D_Analyst_CImageCut_ImageCutByAOIByPolygon_ev_int32_CRasterDataSet_char_CPolygon(IntPtr pNativeObject, IntPtr Dataset, byte[] pszDstFile, IntPtr polygon);

					///<summary>
					///图像aoi裁切（由数据集）
					///<summary>
					/// <param = "Dataset">待裁切的数据集</param>
					///<param = "pszDstFile">输出文件路径</param>
					///<param = "feature">要素类</param>
					///<returns>返回值</returns>
					///<summary>
					//					ev_int32 ImageCutByAOIByFeature(EarthView::World::Spatial2D::Raster::CRasterDataSet* Dataset, const char* pszDstFile,
					//EarthView::World::Spatial::GeoDataset::IFeatureClass* featureclass);
					///<summary>
					///图像aoi裁切（由数据集）
					///<summary>
					/// <param = "Dataset">待裁切的数据集</param>
					///<param = "pszDstFile">输出文件路径</param>
					///<param = "feature">多边形类</param>
					///<returns>返回值</returns>
					///<summary>
					public int ImageCutByAOIByPolygon(EarthView.World.Spatial2D.Raster.RasterDataSet Dataset, byte[] pszDstFile, EarthView.World.Spatial.Geometry.Polygon polygon)
					{
						int ret=EarthView_World_Spatial2D_Analyst_CImageCut_ImageCutByAOIByPolygon_ev_int32_CRasterDataSet_char_CPolygon(this.NativeObject, object.Equals(Dataset, null) ? IntPtr.Zero : Dataset.NativeObject, pszDstFile, object.Equals(polygon, null) ? IntPtr.Zero : polygon.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadImageCut = LoadDll.Load("EV_RasterAnalysis_d.dll");
							private static bool csbLoadImageCut = LoadDll.Load("EV_RasterAnalysis_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadImageCut = LoadDll.Load("EV_RasterAnalysis_d.so");
							private static bool csbLoadImageCut = LoadDll.Load("EV_RasterAnalysis_CSharp_d.so");

						#else 
							private static bool bLoadImageCut = LoadDll.Load("EV_RasterAnalysis_d.dll");
							private static bool csbLoadImageCut = LoadDll.Load("EV_RasterAnalysis_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadImageCut = LoadDll.Load("EV_RasterAnalysis.dll");
							private static bool csbLoadImageCut = LoadDll.Load("EV_RasterAnalysis_CSharp.dll");

						#elif Linux 
							private static bool bLoadImageCut = LoadDll.Load("EV_RasterAnalysis.so");
							private static bool csbLoadImageCut = LoadDll.Load("EV_RasterAnalysis_CSharp.so");

						#else 
							private static bool bLoadImageCut = LoadDll.Load("EV_RasterAnalysis.dll");
							private static bool csbLoadImageCut = LoadDll.Load("EV_RasterAnalysis_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CImageCut", new ImageCutClassFactory());

					public ImageCut(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ImageCut FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ImageCut obj = baseObj as  ImageCut;
						if (object.Equals(obj, null))
						{
							obj = new ImageCut(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CImageCut");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ImageCutClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ImageCut emptyInstance = new ImageCut(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
