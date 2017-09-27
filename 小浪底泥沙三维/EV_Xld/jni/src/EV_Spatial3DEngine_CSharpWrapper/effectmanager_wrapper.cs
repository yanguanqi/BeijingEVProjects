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
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace EffectManager
			{
				/// <summary>
				/// 特效管理析类
				/// </summary>
				public class EffectManager : EarthView.World.Core.AllocatedObject
				{

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
					private static extern IntPtr EarthView_World_Spatial3D_EffectManager_CEffectManager_getSingletonPtr_CEffectManager();

					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <returns>CModelDataSourceFactory，失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.EffectManager.EffectManager GetSingletonPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_EffectManager_CEffectManager_getSingletonPtr_CEffectManager();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.EffectManager.EffectManager csObj = new EarthView.World.Spatial3D.EffectManager.EffectManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEffectManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.EffectManager.EffectManager;
							csObj.BindNativeObject(__ptr, "CEffectManager");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern byte EarthView_World_Spatial3D_EffectManager_CEffectManager_clearEffectAll_ev_bool_CSqlDatabase(IntPtr pNativeObject, IntPtr db);

					/// <summary>
					/// 清除所有特效
					/// </summary>
					/// <param name="EarthView::World::Core::Database::CSqlDatabase">数据库连接</param>
					/// <returns>是否清除成功</returns>
					public bool ClearEffectAll(EarthView.World.Core.Database.SqlDatabase db)
					{
						byte ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_clearEffectAll_ev_bool_CSqlDatabase(this.NativeObject, object.Equals(db, null) ? IntPtr.Zero : db.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_EffectManager_CEffectManager_existEffect_ev_bool_CEffectDataSource_EVString_ev_uint32(IntPtr pNativeObject, IntPtr src, string effectName, ref uint effectId);

					/// <summary>
					/// 判断特效是否存在
					/// </summary>
					/// <param name="src">数据源指针</param>
					/// <param name="effectName">特效名称</param>
					/// <param name="effectId">要判断的特效ID</param>
					/// <returns>特效是否存在</returns>
					public bool ExistEffect(EarthView.World.Spatial3D.Dataset.EffectDataSource src, string effectName, ref uint effectId)
					{
						byte ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_existEffect_ev_bool_CEffectDataSource_EVString_ev_uint32(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, effectName, ref effectId);
						
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
					private static extern int EarthView_World_Spatial3D_EffectManager_CEffectManager_import_ev_int32_CEffectInfo_CEffectDataSource_CEffectDataSource_ev_bool_CModelPublishToolListener(IntPtr pNativeObject, IntPtr info, IntPtr src, IntPtr dest, byte isOverwrite, IntPtr listener);

					/// <summary>
					/// 将一条特效从一个数据源，导到另外一个数据源
					/// </summary>
					/// <param name="info">特效信息</param>
					/// <param name="src">源数据源指针</param>
					/// <param name="dest">目标数据源指针</param>
					/// <param name="isOverwrite">是否覆盖同名特效</param>
					/// <param name="listener">导入的监听</param>
					/// <returns>返回导入的新特效ID，没导入成功返回0</returns>
					public int Import(ref EarthView.World.Spatial3D.Dataset.EffectInfo info, EarthView.World.Spatial3D.Dataset.EffectDataSource src, EarthView.World.Spatial3D.Dataset.EffectDataSource dest, bool isOverwrite, EarthView.World.Spatial3D.ModelPublishToolListener listener)
					{
						int ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_import_ev_int32_CEffectInfo_CEffectDataSource_CEffectDataSource_ev_bool_CModelPublishToolListener(this.NativeObject, object.Equals(info, null) ? IntPtr.Zero : info.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dest, null) ? IntPtr.Zero : dest.NativeObject, Convert.ToByte(isOverwrite), object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_EffectManager_CEffectManager_copyNewEffect_CEffectInfo_CEffectDataSource_ev_uint32_EVString(IntPtr pNativeObject, IntPtr datasource, uint effectId, string newName);

					/// <summary>
					/// 将现有特效和资源全部拷贝一份为新的
					/// </summary>
					/// <param name="datasource">数据源指针</param>
					/// <param name="effectId">要拷贝的特效ID</param>
					/// <param name="newName">特效新名称</param>
					/// <returns>返回新的EarthView::World::Spatial3D::Dataset::CEffectInfo，失败则返回NULL</returns>
					public EarthView.World.Spatial3D.Dataset.EffectInfo CopyNewEffect(EarthView.World.Spatial3D.Dataset.EffectDataSource datasource, uint effectId, string newName)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_EffectManager_CEffectManager_copyNewEffect_CEffectInfo_CEffectDataSource_ev_uint32_EVString(this.NativeObject, object.Equals(datasource, null) ? IntPtr.Zero : datasource.NativeObject, effectId, newName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.EffectInfo csObj = new EarthView.World.Spatial3D.Dataset.EffectInfo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEffectInfo");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectInfo;
							csObj.BindNativeObject(__ptr, "CEffectInfo");
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial3D_EffectManager_CEffectManager_createUserType_CEffectUserTypeInfo_CEffectDataSource_EVString_EVString(IntPtr pNativeObject, IntPtr datasource, string parentCode, string newUserTypeName);

					/// <summary>
					/// 创建用户分类
					/// </summary>
					/// <param name="datasource">数据源指针</param>
					/// <param name="parentCode">父节点编码</param>
					/// <param name="newUserTypeName">新创建用户分类名称</param>
					/// <returns>新创建用户分类对象</returns>
					public EarthView.World.Spatial3D.Dataset.EffectUserTypeInfo CreateUserType(EarthView.World.Spatial3D.Dataset.EffectDataSource datasource, string parentCode, string newUserTypeName)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_EffectManager_CEffectManager_createUserType_CEffectUserTypeInfo_CEffectDataSource_EVString_EVString(this.NativeObject, object.Equals(datasource, null) ? IntPtr.Zero : datasource.NativeObject, parentCode, newUserTypeName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.EffectUserTypeInfo csObj = new EarthView.World.Spatial3D.Dataset.EffectUserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEffectUserTypeInfo");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectUserTypeInfo;
							csObj.BindNativeObject(__ptr, "CEffectUserTypeInfo");
						}
						return csObj;
						
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
					private static extern byte EarthView_World_Spatial3D_EffectManager_CEffectManager_importFromScript_ev_bool_CEffectDataSource_EVString_EVString_CStringArray_CStringArray(IntPtr pNativeObject, IntPtr ds, string userTypeCode, string folder, IntPtr successScriptNames, IntPtr errorArray);

					/// <summary>
					/// 从脚本导入
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="userTypeCode">用户自定义特效分类编码</param>
					/// <param name="folder">文件路径</param>
					/// <param name="successScriptNames">成功导入的脚本名字</param>
					/// <param name="errorArray">错误信息队列</param>
					/// <returns>成功导入返回true</returns>
					public bool ImportFromScript(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, string userTypeCode, string folder, ref  EarthView.World.Core.StringArray successScriptNames, ref  EarthView.World.Core.StringArray errorArray)
					{
						byte ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_importFromScript_ev_bool_CEffectDataSource_EVString_EVString_CStringArray_CStringArray(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, userTypeCode, folder, object.Equals(successScriptNames, null) ? IntPtr.Zero : successScriptNames.NativeObject, object.Equals(errorArray, null) ? IntPtr.Zero : errorArray.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_EffectManager_CEffectManager_renameParticleScript_EVString_EVString_EVString_EVString(IntPtr pNativeObject, string script, string oldName, string newName);

					/// <summary>
					/// 将粒子脚本的名字进行更换
					/// </summary>	
					/// <param name="script">脚本内容</param>
					/// <param name="oldName">旧粒子系统名字</param>
					/// <param name="newName">新粒子系统名字</param>
					/// <returns>替换后脚本内容</returns>
					public string RenameParticleScript(string script, string oldName, string newName)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_EffectManager_CEffectManager_renameParticleScript_EVString_EVString_EVString_EVString(this.NativeObject, script, oldName, newName);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Spatial3D_EffectManager_CEffectManager_createNewEffect_CEffectInfo_CEffectDataSource_EVString_EVString_EffectType_ev_uint32(IntPtr pNativeObject, IntPtr datasource, string name, string userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId);

					/// <summary>
					/// 创建特效
					/// </summary>
					/// <param name="datasource">数据源</param>
					/// <param name="name">用户自定义特效分类名称</param>
					/// <param name="userTypeCode">用户自定义特效分类编码</param>
					/// <param name="type">特效类型</param>
					/// <param name="parentEffectId">父特效ID(在新建非复合特效的时候该参数可为任意值)</param>
					/// 这个函数是唯一的创建特效接口
					/// <returns>特效信息</returns>
					public EarthView.World.Spatial3D.Dataset.EffectInfo CreateNewEffect(EarthView.World.Spatial3D.Dataset.EffectDataSource datasource, string name, string userTypeCode, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type, uint parentEffectId)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_EffectManager_CEffectManager_createNewEffect_CEffectInfo_CEffectDataSource_EVString_EVString_EffectType_ev_uint32(this.NativeObject, object.Equals(datasource, null) ? IntPtr.Zero : datasource.NativeObject, name, userTypeCode, type, parentEffectId);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.EffectInfo csObj = new EarthView.World.Spatial3D.Dataset.EffectInfo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEffectInfo");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectInfo;
							csObj.BindNativeObject(__ptr, "CEffectInfo");
						}
						return csObj;
						
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
					private static extern byte EarthView_World_Spatial3D_EffectManager_CEffectManager_renameUserType_ev_bool_CEffectDataSource_EVString_EVString(IntPtr pNativeObject, IntPtr ds, string code, string newName);

					/// <summary>
					/// 修改特效分类编码
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="code">用户自定义特效分类编码</param>
					/// <param name="fileName">用户自定义特效分类名称</param>
					/// <returns>成功修改返回true</returns>
					public bool RenameUserType(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, string code, string newName)
					{
						byte ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_renameUserType_ev_bool_CEffectDataSource_EVString_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code, newName);
						
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
					private static extern byte EarthView_World_Spatial3D_EffectManager_CEffectManager_renameBlendEffect_ev_bool_CEffectDataSource_EVString_EVString(IntPtr pNativeObject, IntPtr ds, string code, string newName);

					/// <summary>
					/// 修改混合特效名称
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="code">用户自定义特效分类编码</param>
					/// <param name="newName">新混合特效名称</param>
					/// <returns>成功修改返回true</returns>
					public bool RenameBlendEffect(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, string code, string newName)
					{
						byte ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_renameBlendEffect_ev_bool_CEffectDataSource_EVString_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code, newName);
						
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
					private static extern byte EarthView_World_Spatial3D_EffectManager_CEffectManager_renameBEChild_ev_bool_CEffectDataSource_EVString_EVString(IntPtr pNativeObject, IntPtr ds, string code, string newName);

					/// <summary>
					/// 修改混合特效中子特效名称
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="code">用户自定义特效分类编码</param>
					/// <param name="newName">新子特效名称</param>
					/// <returns>成功修改返回true</returns>
					public bool RenameBEChild(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, string code, string newName)
					{
						byte ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_renameBEChild_ev_bool_CEffectDataSource_EVString_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code, newName);
						
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
					private static extern byte EarthView_World_Spatial3D_EffectManager_CEffectManager_renameSingleEffect_ev_bool_CEffectDataSource_EVString_EVString(IntPtr pNativeObject, IntPtr ds, string code, string newName);

					/// <summary>
					/// 修改单粒子特效名称
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="code">用户自定义特效分类编码</param>
					/// <param name="newName">新特效名称</param>
					/// <returns>成功修改返回true</returns>
					public bool RenameSingleEffect(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, string code, string newName)
					{
						byte ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_renameSingleEffect_ev_bool_CEffectDataSource_EVString_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code, newName);
						
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
					private static extern byte EarthView_World_Spatial3D_EffectManager_CEffectManager_deleteUserType_ev_bool_CEffectDataSource_EVString(IntPtr pNativeObject, IntPtr ds, string code);

					/// <summary>
					/// 删除用户自定义特效分类编码
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="code">用户自定义特效分类编码</param>
					/// <returns>成功删除返回true</returns>
					public bool DeleteUserType(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, string code)
					{
						byte ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_deleteUserType_ev_bool_CEffectDataSource_EVString(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, code);
						
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
					private static extern byte EarthView_World_Spatial3D_EffectManager_CEffectManager_deleteEffect_ev_bool_CEffectDataSource_ev_uint32_ev_uint32_EffectType(IntPtr pNativeObject, IntPtr ds, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type);

					/// <summary>
					/// 删除特效
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="parentEffectId">父特效ID</param>
					/// <param name="effectId">特效ID</param>
					/// <param name="type">特效类型</param>
					/// <returns>成功删除返回true</returns>
					public bool DeleteEffect(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, uint parentEffectId, uint effectId, EarthView.World.Spatial3D.Dataset.EFFECTTYPE type)
					{
						byte ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_deleteEffect_ev_bool_CEffectDataSource_ev_uint32_ev_uint32_EffectType(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, parentEffectId, effectId, type);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_EffectManager_CEffectManager_addEffectToBlendEffect_CEffectInfo_CEffectDataSource_ev_uint32_ev_uint32(IntPtr pNativeObject, IntPtr ds, uint editEffectId, uint dragEffectId);

					/// <summary>
					/// 添加普通特效到混合特效中
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="editEffectId">混合特效ID</param>
					/// <param name="dragEffectId">普通特效ID</param>
					/// <returns>特效信息</returns>
					public EarthView.World.Spatial3D.Dataset.EffectInfo AddEffectToBlendEffect(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, uint editEffectId, uint dragEffectId)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_EffectManager_CEffectManager_addEffectToBlendEffect_CEffectInfo_CEffectDataSource_ev_uint32_ev_uint32(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, editEffectId, dragEffectId);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.EffectInfo csObj = new EarthView.World.Spatial3D.Dataset.EffectInfo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEffectInfo");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectInfo;
							csObj.BindNativeObject(__ptr, "CEffectInfo");
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial3D_EffectManager_CEffectManager_addEffectToBlendEffect_CEffectInfo_CEffectDataSource_ev_uint32_CEffectInfo(IntPtr pNativeObject, IntPtr ds, uint editEffectId, IntPtr effectInfo);

					/// <summary>
					/// 添加普通特效到混合特效中
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="editEffectId">混合特效ID</param>
					/// <param name="effectInfo">特效信息</param>
					/// <returns>特效信息</returns>
					public EarthView.World.Spatial3D.Dataset.EffectInfo AddEffectToBlendEffect(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, uint editEffectId, EarthView.World.Spatial3D.Dataset.EffectInfo effectInfo)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_EffectManager_CEffectManager_addEffectToBlendEffect_CEffectInfo_CEffectDataSource_ev_uint32_CEffectInfo(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, editEffectId, object.Equals(effectInfo, null) ? IntPtr.Zero : effectInfo.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.EffectInfo csObj = new EarthView.World.Spatial3D.Dataset.EffectInfo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEffectInfo");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectInfo;
							csObj.BindNativeObject(__ptr, "CEffectInfo");
						}
						return csObj;
						
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
					private static extern byte EarthView_World_Spatial3D_EffectManager_CEffectManager_saveEffect_ev_bool_CEffectDataSource_CEffect(IntPtr pNativeObject, IntPtr ds, IntPtr effect);

					/// <summary>
					/// 保存特效
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="effect">特效指针</param>
					/// <returns>成功保存返回true</returns>
					public bool SaveEffect(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, EarthView.World.Spatial3D.EffectManager.Effect effect)
					{
						byte ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_saveEffect_ev_bool_CEffectDataSource_CEffect(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, object.Equals(effect, null) ? IntPtr.Zero : effect.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_EffectManager_CEffectManager_saveEffectMaterial_ev_bool_CEffectDataSource_ev_uint32(IntPtr pNativeObject, IntPtr ds, uint effectId);

					/// <summary>
					/// 保存特效材质
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="effectId">特效ID</param>
					/// <returns>成功保存返回true</returns>
					public bool SaveEffectMaterial(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, uint effectId)
					{
						byte ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_saveEffectMaterial_ev_bool_CEffectDataSource_ev_uint32(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, effectId);
						
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
					private static extern byte EarthView_World_Spatial3D_EffectManager_CEffectManager_saveEffectMaterial_ev_bool_CEffectDataSource_CMaterialPtr_ev_uint32(IntPtr pNativeObject, IntPtr ds, IntPtr matPtr, uint resourceId);

					/// <summary>
					/// 保存特效材质
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="matPtr">材质Ptr</param>
					/// <param name="resourceId">资源ID</param>
					/// <returns>成功保存返回true</returns>
					public bool SaveEffectMaterial(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, EarthView.World.Graphic.MaterialPtr matPtr, uint resourceId)
					{
						byte ret=EarthView_World_Spatial3D_EffectManager_CEffectManager_saveEffectMaterial_ev_bool_CEffectDataSource_CMaterialPtr_ev_uint32(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, object.Equals(matPtr, null) ? IntPtr.Zero : matPtr.NativeObject, resourceId);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_EffectManager_CEffectManager_findDiscontinuousID_EVString_CEffectDataSource_EVString(IntPtr pNativeObject, IntPtr effectDatasource, string userTypeCode);

					/// <summary>
					/// 查找用户自定义特效分类编码断号
					/// </summary>
					/// <param name="effectDatasource">特效数据源</param>
					/// <param name="userTypeCode">父用户自定义特效分类编码</param>
					/// <returns>返回用户自定义特效分类编码断号</returns>
					public string FindDiscontinuousID(EarthView.World.Spatial3D.Dataset.EffectDataSource effectDatasource, string userTypeCode)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_EffectManager_CEffectManager_findDiscontinuousID_EVString_CEffectDataSource_EVString(this.NativeObject, object.Equals(effectDatasource, null) ? IntPtr.Zero : effectDatasource.NativeObject, userTypeCode);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Spatial3D_EffectManager_CEffectManager_bulidUserTypeTree_void_CEffectDataSource_CEffectUserTypeTree(IntPtr pNativeObject, IntPtr ds, IntPtr tree);

					/// <summary>
					/// 创建用户类别树
					/// </summary>
					/// <param name="ds">特效数据源</param>
					/// <param name="tree">用户类别树指针</param>
					/// <returns></returns>
					public void BulidUserTypeTree(EarthView.World.Spatial3D.Dataset.EffectDataSource ds, ref  EarthView.World.Spatial3D.Dataset.EffectUserTypeTree tree)
					{
						EarthView_World_Spatial3D_EffectManager_CEffectManager_bulidUserTypeTree_void_CEffectDataSource_CEffectUserTypeTree(this.NativeObject, object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, object.Equals(tree, null) ? IntPtr.Zero : tree.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_EffectManager_CEffectManager_serialize_EVString_CParticleSystem_EVString(IntPtr pNativeObject, IntPtr ps, string psName);

					/// <summary>
					/// 序列化
					/// </summary>
					/// <param name="ps">粒子系统指针</param>
					/// <param name="psName">粒子系统</param>
					/// <returns>EVString,粒子脚本</returns>
					public string Serialize(EarthView.World.Graphic.ParticleSystem ps, string psName)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_EffectManager_CEffectManager_serialize_EVString_CParticleSystem_EVString(this.NativeObject, object.Equals(ps, null) ? IntPtr.Zero : ps.NativeObject, psName);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEffectManager = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadEffectManager = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEffectManager = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadEffectManager = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadEffectManager = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadEffectManager = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEffectManager = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadEffectManager = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadEffectManager = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadEffectManager = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadEffectManager = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadEffectManager = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::EffectManager::CEffectManager", new EffectManagerClassFactory());

					public EffectManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static EffectManager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						EffectManager obj = baseObj as  EffectManager;
						if (object.Equals(obj, null))
						{
							obj = new EffectManager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CEffectManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EffectManagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						EffectManager emptyInstance = new EffectManager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
