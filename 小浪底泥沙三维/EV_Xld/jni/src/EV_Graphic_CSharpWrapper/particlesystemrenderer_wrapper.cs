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
			/// <summary>
			/// 当前粒子列表类
			/// 定义当前粒子列表相关操作
			/// </summary>
			public class ParticleList : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public ParticleList() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("ParticleList",  null);
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
				private static extern void EarthView_World_Graphic_ParticleList_push_back_void_CParticle(IntPtr pNativeObject, ref IntPtr ref_t);

				/// <summary>
				/// 在当前粒子列表后面增加一个元素
				/// </summary>
				/// <param name="t">增加的元素</param>
				/// <returns></returns>
				public void Push_back(EarthView.World.Graphic.Particle ref_t)
				{
					EarthView_World_Graphic_ParticleList_push_back_void_CParticle(this.NativeObject, ref ref_t.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_ParticleList_push_front_void_CParticle(IntPtr pNativeObject, ref IntPtr ref_t);

				/// <summary>
				/// 在当前粒子列表前面增加一个元素
				/// </summary>
				/// <param name="t">增加的元素</param>
				/// <returns></returns>
				public void Push_front(EarthView.World.Graphic.Particle ref_t)
				{
					EarthView_World_Graphic_ParticleList_push_front_void_CParticle(this.NativeObject, ref ref_t.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_ParticleList_pop_back_void(IntPtr pNativeObject);

				/// <summary>
				/// 删除当前粒子列表最后一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Pop_back()
				{
					EarthView_World_Graphic_ParticleList_pop_back_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_ParticleList_pop_front_void(IntPtr pNativeObject);

				/// <summary>
				/// 删除当前粒子列表第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Pop_front()
				{
					EarthView_World_Graphic_ParticleList_pop_front_void(this.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_ParticleList_front_CParticle(IntPtr pNativeObject);

				/// <summary>
				/// 返回当前粒子列表第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素的引用</returns>
				public EarthView.World.Graphic.Particle Front()
				{
					IntPtr __ptr = EarthView_World_Graphic_ParticleList_front_CParticle(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Particle csObj = new EarthView.World.Graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CParticle");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Particle;
						csObj.BindNativeObject(__ptr, "CParticle");
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
				private static extern IntPtr EarthView_World_Graphic_ParticleList_back_CParticle(IntPtr pNativeObject);

				/// <summary>
				/// 返回当前粒子列表最后一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后一个元素的引用</returns>
				public EarthView.World.Graphic.Particle Back()
				{
					IntPtr __ptr = EarthView_World_Graphic_ParticleList_back_CParticle(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Particle csObj = new EarthView.World.Graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CParticle");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Particle;
						csObj.BindNativeObject(__ptr, "CParticle");
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
				private static extern IntPtr EarthView_World_Graphic_ParticleList_at_CParticle_ev_uint32(IntPtr pNativeObject, uint pos);

				/// <summary>
				/// 返回当前粒子列表第pos元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns>第pos元素的引用</returns>
				public EarthView.World.Graphic.Particle At(uint pos)
				{
					IntPtr __ptr = EarthView_World_Graphic_ParticleList_at_CParticle_ev_uint32(this.NativeObject, pos);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Particle csObj = new EarthView.World.Graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CParticle");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Particle;
						csObj.BindNativeObject(__ptr, "CParticle");
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
				private static extern void EarthView_World_Graphic_ParticleList_insert_void_ev_uint32_CParticle(IntPtr pNativeObject, uint pos, ref IntPtr ref_t);

				/// <summary>
				/// 在当前粒子列表第pos元素之后插入元素t
				/// </summary>
				/// <param name="pos">迭代器下标</param>
				/// <param name="t">要插入的元素</param>
				/// <returns></returns>
				public void Insert(uint pos, EarthView.World.Graphic.Particle ref_t)
				{
					EarthView_World_Graphic_ParticleList_insert_void_ev_uint32_CParticle(this.NativeObject, pos, ref ref_t.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_ParticleList_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

				/// <summary>
				/// 移除当前粒子列表中的某一个元素
				/// </summary>
				/// <param name="pos">该移除元素所在迭代器位置</param>
				/// <returns></returns>
				public void Remove(ulong pos)
				{
					EarthView_World_Graphic_ParticleList_remove_void_ev_size_t(this.NativeObject, pos);
					
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
				private static extern byte EarthView_World_Graphic_ParticleList_empty_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 判断当前粒子列表是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>如果为空返回true，否则false</returns>
				public bool Empty()
				{
					byte ret=EarthView_World_Graphic_ParticleList_empty_ev_bool(this.NativeObject);
					
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
				private static extern ulong EarthView_World_Graphic_ParticleList_size_ev_size_t(IntPtr pNativeObject);

				/// <summary>
				/// 当前粒子列表存储元素的大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>当前广告版元素的个数</returns>
				public ulong Size()
				{
					ulong ret=EarthView_World_Graphic_ParticleList_size_ev_size_t(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_ParticleList_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

				/// <summary>
				/// 调整粒子列表存储元素的大小
				/// </summary>
				/// <param name="newSize">新的列表存储元素的个数</param>
				/// <returns></returns>
				public void Resize(ulong newSize)
				{
					EarthView_World_Graphic_ParticleList_resize_void_ev_size_t(this.NativeObject, newSize);
					
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
				private static extern void EarthView_World_Graphic_ParticleList_clear_void(IntPtr pNativeObject);

				/// <summary>
				/// 清空列表中的元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Clear()
				{
					EarthView_World_Graphic_ParticleList_clear_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadParticleList = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleList = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadParticleList = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadParticleList = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadParticleList = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleList = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadParticleList = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleList = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadParticleList = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadParticleList = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadParticleList = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleList = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::ParticleList", new ParticleListClassFactory());

				public ParticleList(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ParticleList FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ParticleList obj = baseObj as  ParticleList;
					if (object.Equals(obj, null))
					{
						obj = new ParticleList(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "ParticleList");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ParticleListClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ParticleList emptyInstance = new ParticleList(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 抽象类，定义了提供渲染性能到粒子系统实例的接口
			/// </summary>
			public class ParticleSystemRenderer : EarthView.World.Core.StringInterface
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public ParticleSystemRenderer() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CParticleSystemRendererProxy", null);
					if (!"EarthView.World.Graphic.ParticleSystemRenderer".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getType_CallBack_EVString();

				protected getType_CallBack_EVString m_getType_CallBack_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得渲染的类型，必须被子类执行
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual string GetType_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_Function()
				{
					string csret=GetType();
					
					return csret;
					
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
				private static extern IntPtr EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获得渲染的类型，必须被子类执行
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual string GetType()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _updateRenderQueue_CallBack_void_CRenderQueue_ParticleList_ev_bool(IntPtr queue, IntPtr currentParticles, bool cullIndividually);

				protected _updateRenderQueue_CallBack_void_CRenderQueue_ParticleList_ev_bool m__updateRenderQueue_CallBack_void_CRenderQueue_ParticleList_ev_bool;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr queue, IntPtr currentParticles, byte cullIndividually);

				/// <summary>
				/// 更新渲染队列
				/// </summary>
				/// <param name="queue">渲染队列</param>
				/// <param name="currentParticles"></param>
				/// <param name="cullIndividually"></param>
				/// <returns></returns>
				public virtual void _updateRenderQueue_NoVirtual(EarthView.World.Graphic.RenderQueue queue, ref EarthView.World.Graphic.ParticleList currentParticles, bool cullIndividually)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_NoVirtual(this.NativeObject, object.Equals(queue, null) ? IntPtr.Zero : queue.NativeObject, object.Equals(currentParticles, null) ? IntPtr.Zero : currentParticles.NativeObject, Convert.ToByte(cullIndividually));
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Function(IntPtr queue, IntPtr currentParticles, bool cullIndividually)
				{
					EarthView.World.Graphic.RenderQueue csobj_queue = new EarthView.World.Graphic.RenderQueue(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_queue.BindNativeObject(queue,"CRenderQueue");
					csobj_queue.Delegate = true;
					IClassFactory csobj_queueClassFactory = GlobalClassFactoryMap.Get(csobj_queue.GetCppInstanceTypeName());
					if (csobj_queueClassFactory != null)
					{
						csobj_queue.Delegate = true;
						csobj_queue = csobj_queueClassFactory.Create() as EarthView.World.Graphic.RenderQueue;
						csobj_queue.BindNativeObject(queue, "CRenderQueue");
						csobj_queue.Delegate = true;
					}
					EarthView.World.Graphic.ParticleList csobj_currentParticles = new EarthView.World.Graphic.ParticleList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_currentParticles.BindNativeObject(currentParticles,"ParticleList");
					csobj_currentParticles.Delegate = true;
					IClassFactory csobj_currentParticlesClassFactory = GlobalClassFactoryMap.Get(csobj_currentParticles.GetCppInstanceTypeName());
					if (csobj_currentParticlesClassFactory != null)
					{
						csobj_currentParticles.Delegate = true;
						csobj_currentParticles = csobj_currentParticlesClassFactory.Create() as EarthView.World.Graphic.ParticleList;
						csobj_currentParticles.BindNativeObject(currentParticles, "ParticleList");
						csobj_currentParticles.Delegate = true;
					}
					
					_updateRenderQueue(csobj_queue, ref csobj_currentParticles, cullIndividually);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool(IntPtr pNativeObject, IntPtr queue, IntPtr currentParticles, byte cullIndividually);

				/// <summary>
				/// 更新渲染队列
				/// </summary>
				/// <param name="queue">渲染队列</param>
				/// <param name="currentParticles"></param>
				/// <param name="cullIndividually"></param>
				/// <returns></returns>
				public virtual void _updateRenderQueue(EarthView.World.Graphic.RenderQueue queue, ref EarthView.World.Graphic.ParticleList currentParticles, bool cullIndividually)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool(this.NativeObject, object.Equals(queue, null) ? IntPtr.Zero : queue.NativeObject, object.Equals(currentParticles, null) ? IntPtr.Zero : currentParticles.NativeObject, Convert.ToByte(cullIndividually));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _setMaterial_CallBack_void_CMaterialPtr(IntPtr mat);

				protected _setMaterial_CallBack_void_CMaterialPtr m__setMaterial_CallBack_void_CMaterialPtr;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_NoVirtual(IntPtr pNativeObject, IntPtr mat);

				/// <summary>
				/// 设置渲染用到的材质
				/// </summary>
				/// <param name="mat"></param>
				/// <returns></returns>
				public virtual void _setMaterial_NoVirtual(ref EarthView.World.Graphic.MaterialPtr mat)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_NoVirtual(this.NativeObject, object.Equals(mat, null) ? IntPtr.Zero : mat.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_Function(IntPtr mat)
				{
					EarthView.World.Graphic.MaterialPtr csobj_mat = new EarthView.World.Graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_mat.BindNativeObject(mat,"CMaterialPtr");
					csobj_mat.Delegate = true;
					IClassFactory csobj_matClassFactory = GlobalClassFactoryMap.Get(csobj_mat.GetCppInstanceTypeName());
					if (csobj_matClassFactory != null)
					{
						csobj_mat.Delegate = true;
						csobj_mat = csobj_matClassFactory.Create() as EarthView.World.Graphic.MaterialPtr;
						csobj_mat.BindNativeObject(mat, "CMaterialPtr");
						csobj_mat.Delegate = true;
					}
					
					_setMaterial(ref csobj_mat);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr(IntPtr pNativeObject, IntPtr mat);

				/// <summary>
				/// 设置渲染用到的材质
				/// </summary>
				/// <param name="mat"></param>
				/// <returns></returns>
				public virtual void _setMaterial(ref EarthView.World.Graphic.MaterialPtr mat)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr(this.NativeObject, object.Equals(mat, null) ? IntPtr.Zero : mat.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyCurrentCamera_CallBack_void_CCamera(IntPtr ref_cam);

				protected _notifyCurrentCamera_CallBack_void_CCamera m__notifyCurrentCamera_CallBack_void_CCamera;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_NoVirtual(IntPtr pNativeObject, IntPtr ref_cam);

				/// <summary>
				/// 通报当前摄像机
				/// </summary>
				/// <param name="cam">摄像机指针</param>
				/// <returns></returns>
				public virtual void _notifyCurrentCamera_NoVirtual(EarthView.World.Graphic.Camera ref_cam)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_NoVirtual(this.NativeObject, object.Equals(ref_cam, null) ? IntPtr.Zero : ref_cam.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_Function(IntPtr ref_cam)
				{
					EarthView.World.Graphic.Camera csobj_ref_cam = new EarthView.World.Graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_cam.BindNativeObject(ref_cam,"CCamera");
					csobj_ref_cam.Delegate = true;
					IClassFactory csobj_ref_camClassFactory = GlobalClassFactoryMap.Get(csobj_ref_cam.GetCppInstanceTypeName());
					if (csobj_ref_camClassFactory != null)
					{
						csobj_ref_cam.Delegate = true;
						csobj_ref_cam = csobj_ref_camClassFactory.Create() as EarthView.World.Graphic.Camera;
						csobj_ref_cam.BindNativeObject(ref_cam, "CCamera");
						csobj_ref_cam.Delegate = true;
					}
					
					_notifyCurrentCamera(csobj_ref_cam);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera(IntPtr pNativeObject, IntPtr ref_cam);

				/// <summary>
				/// 通报当前摄像机
				/// </summary>
				/// <param name="cam">摄像机指针</param>
				/// <returns></returns>
				public virtual void _notifyCurrentCamera(EarthView.World.Graphic.Camera ref_cam)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera(this.NativeObject, object.Equals(ref_cam, null) ? IntPtr.Zero : ref_cam.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyAttached_CallBack_void_CNode_ev_bool(IntPtr ref_parent, bool isTagPoint);

				protected _notifyAttached_CallBack_void_CNode_ev_bool m__notifyAttached_CallBack_void_CNode_ev_bool;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr ref_parent, byte isTagPoint);

				/// <summary>
				/// 通报被挂接
				/// </summary>
				/// <param name="parent">父节点名称</param>
				/// <param name="isTagPoint">是否挂接在节点下</param>
				/// <returns></returns>
				public virtual void _notifyAttached_NoVirtual(EarthView.World.Graphic.Node ref_parent, bool isTagPoint)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_NoVirtual(this.NativeObject, object.Equals(ref_parent, null) ? IntPtr.Zero : ref_parent.NativeObject, Convert.ToByte(isTagPoint));
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_Function(IntPtr ref_parent, bool isTagPoint)
				{
					EarthView.World.Graphic.Node csobj_ref_parent = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_parent.BindNativeObject(ref_parent,"CNode");
					csobj_ref_parent.Delegate = true;
					IClassFactory csobj_ref_parentClassFactory = GlobalClassFactoryMap.Get(csobj_ref_parent.GetCppInstanceTypeName());
					if (csobj_ref_parentClassFactory != null)
					{
						csobj_ref_parent.Delegate = true;
						csobj_ref_parent = csobj_ref_parentClassFactory.Create() as EarthView.World.Graphic.Node;
						csobj_ref_parent.BindNativeObject(ref_parent, "CNode");
						csobj_ref_parent.Delegate = true;
					}
					
					_notifyAttached(csobj_ref_parent, isTagPoint);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool(IntPtr pNativeObject, IntPtr ref_parent, byte isTagPoint);

				/// <summary>
				/// 通报被挂接
				/// </summary>
				/// <param name="parent">父节点名称</param>
				/// <param name="isTagPoint">是否挂接在节点下</param>
				/// <returns></returns>
				public virtual void _notifyAttached(EarthView.World.Graphic.Node ref_parent, bool isTagPoint)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool(this.NativeObject, object.Equals(ref_parent, null) ? IntPtr.Zero : ref_parent.NativeObject, Convert.ToByte(isTagPoint));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyAttached_CallBack_void_CNode(IntPtr ref_parent);

				protected _notifyAttached_CallBack_void_CNode m__notifyAttached_CallBack_void_CNode;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_NoVirtual(IntPtr pNativeObject, IntPtr ref_parent);

				/// <summary>
				/// 通报被挂接
				/// </summary>
				/// <param name="parent">父节点名称</param>
				/// <returns></returns>
				public virtual void _notifyAttached_NoVirtual(EarthView.World.Graphic.Node ref_parent)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_NoVirtual(this.NativeObject, object.Equals(ref_parent, null) ? IntPtr.Zero : ref_parent.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_Function(IntPtr ref_parent)
				{
					EarthView.World.Graphic.Node csobj_ref_parent = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_parent.BindNativeObject(ref_parent,"CNode");
					csobj_ref_parent.Delegate = true;
					IClassFactory csobj_ref_parentClassFactory = GlobalClassFactoryMap.Get(csobj_ref_parent.GetCppInstanceTypeName());
					if (csobj_ref_parentClassFactory != null)
					{
						csobj_ref_parent.Delegate = true;
						csobj_ref_parent = csobj_ref_parentClassFactory.Create() as EarthView.World.Graphic.Node;
						csobj_ref_parent.BindNativeObject(ref_parent, "CNode");
						csobj_ref_parent.Delegate = true;
					}
					
					_notifyAttached(csobj_ref_parent);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode(IntPtr pNativeObject, IntPtr ref_parent);

				/// <summary>
				/// 通报被挂接
				/// </summary>
				/// <param name="parent">父节点名称</param>
				/// <returns></returns>
				public virtual void _notifyAttached(EarthView.World.Graphic.Node ref_parent)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode(this.NativeObject, object.Equals(ref_parent, null) ? IntPtr.Zero : ref_parent.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyParticleRotated_CallBack_void();

				protected _notifyParticleRotated_CallBack_void m__notifyParticleRotated_CallBack_void;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 当粒子旋转时通知
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _notifyParticleRotated_NoVirtual()
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_Function()
				{
					_notifyParticleRotated();
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void(IntPtr pNativeObject);

				/// <summary>
				/// 当粒子旋转时通知
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _notifyParticleRotated()
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyParticleResized_CallBack_void();

				protected _notifyParticleResized_CallBack_void m__notifyParticleResized_CallBack_void;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 当粒子调整大小时通知
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _notifyParticleResized_NoVirtual()
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_Function()
				{
					_notifyParticleResized();
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void(IntPtr pNativeObject);

				/// <summary>
				/// 当粒子调整大小时通知
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _notifyParticleResized()
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyParticleQuota_CallBack_void_ev_size_t(ulong quota);

				protected _notifyParticleQuota_CallBack_void_ev_size_t m__notifyParticleQuota_CallBack_void_ev_size_t;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_NoVirtual(IntPtr pNativeObject, ulong quota);

				/// <summary>
				/// 告诉渲染器粒子数目已经改变
				/// </summary>
				/// <param name="quota">粒子数目</param>
				/// <returns></returns>
				public virtual void _notifyParticleQuota_NoVirtual(ulong quota)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_NoVirtual(this.NativeObject, quota);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_Function(ulong quota)
				{
					_notifyParticleQuota(quota);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t(IntPtr pNativeObject, ulong quota);

				/// <summary>
				/// 告诉渲染器粒子数目已经改变
				/// </summary>
				/// <param name="quota">粒子数目</param>
				/// <returns></returns>
				public virtual void _notifyParticleQuota(ulong quota)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t(this.NativeObject, quota);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyDefaultDimensions_CallBack_void_Real_Real(double width, double height);

				protected _notifyDefaultDimensions_CallBack_void_Real_Real m__notifyDefaultDimensions_CallBack_void_Real_Real;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_NoVirtual(IntPtr pNativeObject, double width, double height);

				/// <summary>
				/// 告诉渲染器粒子默认大小已经改变
				/// </summary>
				/// <param name="width">粒子的宽度</param>
				/// <param name="height">粒子的高度</param>
				/// <returns></returns>
				public virtual void _notifyDefaultDimensions_NoVirtual(double width, double height)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_NoVirtual(this.NativeObject, width, height);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_Function(double width, double height)
				{
					_notifyDefaultDimensions(width, height);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real(IntPtr pNativeObject, double width, double height);

				/// <summary>
				/// 告诉渲染器粒子默认大小已经改变
				/// </summary>
				/// <param name="width">粒子的宽度</param>
				/// <param name="height">粒子的高度</param>
				/// <returns></returns>
				public virtual void _notifyDefaultDimensions(double width, double height)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real(this.NativeObject, width, height);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyParticleEmitted_CallBack_void_CParticle(IntPtr particle);

				protected _notifyParticleEmitted_CallBack_void_CParticle m__notifyParticleEmitted_CallBack_void_CParticle;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_NoVirtual(IntPtr pNativeObject, IntPtr particle);

				/// <summary>
				/// 当粒子发射时通知
				/// </summary>
				/// <param name="particle">粒子</param>
				/// <returns></returns>
				public virtual void _notifyParticleEmitted_NoVirtual(EarthView.World.Graphic.Particle particle)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_NoVirtual(this.NativeObject, object.Equals(particle, null) ? IntPtr.Zero : particle.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_Function(IntPtr particle)
				{
					EarthView.World.Graphic.Particle csobj_particle = new EarthView.World.Graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_particle.BindNativeObject(particle,"CParticle");
					csobj_particle.Delegate = true;
					IClassFactory csobj_particleClassFactory = GlobalClassFactoryMap.Get(csobj_particle.GetCppInstanceTypeName());
					if (csobj_particleClassFactory != null)
					{
						csobj_particle.Delegate = true;
						csobj_particle = csobj_particleClassFactory.Create() as EarthView.World.Graphic.Particle;
						csobj_particle.BindNativeObject(particle, "CParticle");
						csobj_particle.Delegate = true;
					}
					
					_notifyParticleEmitted(csobj_particle);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle(IntPtr pNativeObject, IntPtr particle);

				/// <summary>
				/// 当粒子发射时通知
				/// </summary>
				/// <param name="particle">粒子</param>
				/// <returns></returns>
				public virtual void _notifyParticleEmitted(EarthView.World.Graphic.Particle particle)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle(this.NativeObject, object.Equals(particle, null) ? IntPtr.Zero : particle.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyParticleExpired_CallBack_void_CParticle(IntPtr particle);

				protected _notifyParticleExpired_CallBack_void_CParticle m__notifyParticleExpired_CallBack_void_CParticle;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_NoVirtual(IntPtr pNativeObject, IntPtr particle);

				/// <summary>
				/// 当粒子消亡时通知
				/// </summary>
				/// <param name="particle">粒子</param>
				/// <returns></returns>
				public virtual void _notifyParticleExpired_NoVirtual(EarthView.World.Graphic.Particle particle)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_NoVirtual(this.NativeObject, object.Equals(particle, null) ? IntPtr.Zero : particle.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_Function(IntPtr particle)
				{
					EarthView.World.Graphic.Particle csobj_particle = new EarthView.World.Graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_particle.BindNativeObject(particle,"CParticle");
					csobj_particle.Delegate = true;
					IClassFactory csobj_particleClassFactory = GlobalClassFactoryMap.Get(csobj_particle.GetCppInstanceTypeName());
					if (csobj_particleClassFactory != null)
					{
						csobj_particle.Delegate = true;
						csobj_particle = csobj_particleClassFactory.Create() as EarthView.World.Graphic.Particle;
						csobj_particle.BindNativeObject(particle, "CParticle");
						csobj_particle.Delegate = true;
					}
					
					_notifyParticleExpired(csobj_particle);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle(IntPtr pNativeObject, IntPtr particle);

				/// <summary>
				/// 当粒子消亡时通知
				/// </summary>
				/// <param name="particle">粒子</param>
				/// <returns></returns>
				public virtual void _notifyParticleExpired(EarthView.World.Graphic.Particle particle)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle(this.NativeObject, object.Equals(particle, null) ? IntPtr.Zero : particle.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyParticleMoved_CallBack_void_ParticleList(IntPtr currentParticles);

				protected _notifyParticleMoved_CallBack_void_ParticleList m__notifyParticleMoved_CallBack_void_ParticleList;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_NoVirtual(IntPtr pNativeObject, IntPtr currentParticles);

				/// <summary>
				/// 当粒子移动时通知
				/// </summary>
				/// <param name="currentParticles">当前粒子</param>
				/// <returns></returns>
				public virtual void _notifyParticleMoved_NoVirtual(ref EarthView.World.Graphic.ParticleList currentParticles)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_NoVirtual(this.NativeObject, object.Equals(currentParticles, null) ? IntPtr.Zero : currentParticles.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_Function(IntPtr currentParticles)
				{
					EarthView.World.Graphic.ParticleList csobj_currentParticles = new EarthView.World.Graphic.ParticleList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_currentParticles.BindNativeObject(currentParticles,"ParticleList");
					csobj_currentParticles.Delegate = true;
					IClassFactory csobj_currentParticlesClassFactory = GlobalClassFactoryMap.Get(csobj_currentParticles.GetCppInstanceTypeName());
					if (csobj_currentParticlesClassFactory != null)
					{
						csobj_currentParticles.Delegate = true;
						csobj_currentParticles = csobj_currentParticlesClassFactory.Create() as EarthView.World.Graphic.ParticleList;
						csobj_currentParticles.BindNativeObject(currentParticles, "ParticleList");
						csobj_currentParticles.Delegate = true;
					}
					
					_notifyParticleMoved(ref csobj_currentParticles);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList(IntPtr pNativeObject, IntPtr currentParticles);

				/// <summary>
				/// 当粒子移动时通知
				/// </summary>
				/// <param name="currentParticles">当前粒子</param>
				/// <returns></returns>
				public virtual void _notifyParticleMoved(ref EarthView.World.Graphic.ParticleList currentParticles)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList(this.NativeObject, object.Equals(currentParticles, null) ? IntPtr.Zero : currentParticles.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _notifyParticleCleared_CallBack_void_ParticleList(IntPtr currentParticles);

				protected _notifyParticleCleared_CallBack_void_ParticleList m__notifyParticleCleared_CallBack_void_ParticleList;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_NoVirtual(IntPtr pNativeObject, IntPtr currentParticles);

				/// <summary>
				/// 当粒子清空时通知
				/// </summary>
				/// <param name="currentParticles">当前粒子</param>
				/// <returns></returns>
				public virtual void _notifyParticleCleared_NoVirtual(ref EarthView.World.Graphic.ParticleList currentParticles)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_NoVirtual(this.NativeObject, object.Equals(currentParticles, null) ? IntPtr.Zero : currentParticles.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_Function(IntPtr currentParticles)
				{
					EarthView.World.Graphic.ParticleList csobj_currentParticles = new EarthView.World.Graphic.ParticleList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_currentParticles.BindNativeObject(currentParticles,"ParticleList");
					csobj_currentParticles.Delegate = true;
					IClassFactory csobj_currentParticlesClassFactory = GlobalClassFactoryMap.Get(csobj_currentParticles.GetCppInstanceTypeName());
					if (csobj_currentParticlesClassFactory != null)
					{
						csobj_currentParticles.Delegate = true;
						csobj_currentParticles = csobj_currentParticlesClassFactory.Create() as EarthView.World.Graphic.ParticleList;
						csobj_currentParticles.BindNativeObject(currentParticles, "ParticleList");
						csobj_currentParticles.Delegate = true;
					}
					
					_notifyParticleCleared(ref csobj_currentParticles);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList(IntPtr pNativeObject, IntPtr currentParticles);

				/// <summary>
				/// 当粒子清空时通知
				/// </summary>
				/// <param name="currentParticles">当前粒子</param>
				/// <returns></returns>
				public virtual void _notifyParticleCleared(ref EarthView.World.Graphic.ParticleList currentParticles)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList(this.NativeObject, object.Equals(currentParticles, null) ? IntPtr.Zero : currentParticles.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr _createVisualData_CallBack_CParticleVisualData();

				protected _createVisualData_CallBack_CParticleVisualData m__createVisualData_CallBack_CParticleVisualData;

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
				private static extern IntPtr EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 创建一个新的EarthView::World::Graphic::CParticleVisualData实例挂接粒子
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ParticleVisualData _createVisualData_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ParticleVisualData csObj = new EarthView.World.Graphic.ParticleVisualData(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CParticleVisualData");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ParticleVisualData;
						csObj.BindNativeObject(__ptr, "CParticleVisualData");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_Function()
				{
					EarthView.World.Graphic.ParticleVisualData csret=_createVisualData();
					
					if (!object.Equals(csret, null))
					{
					    csret.Delegate = true;
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData(IntPtr pNativeObject);

				/// <summary>
				/// 创建一个新的EarthView::World::Graphic::CParticleVisualData实例挂接粒子
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ParticleVisualData _createVisualData()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ParticleVisualData csObj = new EarthView.World.Graphic.ParticleVisualData(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CParticleVisualData");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ParticleVisualData;
						csObj.BindNativeObject(__ptr, "CParticleVisualData");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _destroyVisualData_CallBack_void_CParticleVisualData(IntPtr vis);

				protected _destroyVisualData_CallBack_void_CParticleVisualData m__destroyVisualData_CallBack_void_CParticleVisualData;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_NoVirtual(IntPtr pNativeObject, IntPtr vis);

				/// <summary>
				/// 销毁EarthView::World::Graphic::CParticleVisualData实例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _destroyVisualData_NoVirtual(EarthView.World.Graphic.ParticleVisualData vis)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_NoVirtual(this.NativeObject, object.Equals(vis, null) ? IntPtr.Zero : vis.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_Function(IntPtr vis)
				{
					EarthView.World.Graphic.ParticleVisualData csobj_vis = new EarthView.World.Graphic.ParticleVisualData(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_vis.BindNativeObject(vis,"CParticleVisualData");
					csobj_vis.Delegate = true;
					IClassFactory csobj_visClassFactory = GlobalClassFactoryMap.Get(csobj_vis.GetCppInstanceTypeName());
					if (csobj_visClassFactory != null)
					{
						csobj_vis.Delegate = true;
						csobj_vis = csobj_visClassFactory.Create() as EarthView.World.Graphic.ParticleVisualData;
						csobj_vis.BindNativeObject(vis, "CParticleVisualData");
						csobj_vis.Delegate = true;
					}
					
					_destroyVisualData(csobj_vis);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData(IntPtr pNativeObject, IntPtr vis);

				/// <summary>
				/// 销毁EarthView::World::Graphic::CParticleVisualData实例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _destroyVisualData(EarthView.World.Graphic.ParticleVisualData vis)
				{
					EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData(this.NativeObject, object.Equals(vis, null) ? IntPtr.Zero : vis.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setRenderQueueGroup_CallBack_void_ev_uint8(byte queueID);

				protected setRenderQueueGroup_CallBack_void_ev_uint8 m_setRenderQueueGroup_CallBack_void_ev_uint8;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_NoVirtual(IntPtr pNativeObject, byte queueID);

				/// <summary>
				/// 设置渲染器定位目标的渲染队列组
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetRenderQueueGroup_NoVirtual(byte queueID)
				{
					EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_NoVirtual(this.NativeObject, queueID);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_Function(byte queueID)
				{
					SetRenderQueueGroup(queueID);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8(IntPtr pNativeObject, byte queueID);

				/// <summary>
				/// 设置渲染器定位目标的渲染队列组
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetRenderQueueGroup(byte queueID)
				{
					EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8(this.NativeObject, queueID);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setKeepParticlesInLocalSpace_CallBack_void_ev_bool(bool keepLocal);

				protected setKeepParticlesInLocalSpace_CallBack_void_ev_bool m_setKeepParticlesInLocalSpace_CallBack_void_ev_bool;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte keepLocal);

				public virtual void SetKeepParticlesInLocalSpace_NoVirtual(bool keepLocal)
				{
					EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(keepLocal));
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Function(bool keepLocal)
				{
					SetKeepParticlesInLocalSpace(keepLocal);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool(IntPtr pNativeObject, byte keepLocal);

				public virtual void SetKeepParticlesInLocalSpace(bool keepLocal)
				{
					EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool(this.NativeObject, Convert.ToByte(keepLocal));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int _getSortMode_CallBack_SortMode();

				protected _getSortMode_CallBack_SortMode m__getSortMode_CallBack_SortMode;

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
				private static extern int EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 从渲染器中获得粒子分类模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.SORTMODE _getSortMode_NoVirtual()
				{
					int ret=EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_NoVirtual(this.NativeObject);
					
					return (EarthView.World.Graphic.SORTMODE)ret;
					
				}

				protected  int EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_Function()
				{
					EarthView.World.Graphic.SORTMODE csret=_getSortMode();
					
					return (int)csret;
					
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
				private static extern int EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode(IntPtr pNativeObject);

				/// <summary>
				/// 从渲染器中获得粒子分类模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.SORTMODE _getSortMode()
				{
					int ret=EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode(this.NativeObject);
					
					return (EarthView.World.Graphic.SORTMODE)ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void visitRenderables_CallBack_void_CVisitor_ev_bool(IntPtr visitor, bool debugRenderables);

				protected visitRenderables_CallBack_void_CVisitor_ev_bool m_visitRenderables_CallBack_void_CVisitor_ev_bool;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr visitor, byte debugRenderables);

				/// <summary>
				/// 该方法允许渲染器连接可渲染对象
				/// </summary>
				/// <param name="visitor"></param>
				/// <param name="debugRenderables"></param>
				/// <returns></returns>
				public virtual void VisitRenderables_NoVirtual(EarthView.World.Graphic.Renderable.Visitor visitor, bool debugRenderables)
				{
					EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_NoVirtual(this.NativeObject, object.Equals(visitor, null) ? IntPtr.Zero : visitor.NativeObject, Convert.ToByte(debugRenderables));
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_Function(IntPtr visitor, bool debugRenderables)
				{
					EarthView.World.Graphic.Renderable.Visitor csobj_visitor = new EarthView.World.Graphic.Renderable.Visitor(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_visitor.BindNativeObject(visitor,"CVisitor");
					csobj_visitor.Delegate = true;
					IClassFactory csobj_visitorClassFactory = GlobalClassFactoryMap.Get(csobj_visitor.GetCppInstanceTypeName());
					if (csobj_visitorClassFactory != null)
					{
						csobj_visitor.Delegate = true;
						csobj_visitor = csobj_visitorClassFactory.Create() as EarthView.World.Graphic.Renderable.Visitor;
						csobj_visitor.BindNativeObject(visitor, "CVisitor");
						csobj_visitor.Delegate = true;
					}
					
					VisitRenderables(csobj_visitor, debugRenderables);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool(IntPtr pNativeObject, IntPtr visitor, byte debugRenderables);

				/// <summary>
				/// 该方法允许渲染器连接可渲染对象
				/// </summary>
				/// <param name="visitor"></param>
				/// <param name="debugRenderables"></param>
				/// <returns></returns>
				public virtual void VisitRenderables(EarthView.World.Graphic.Renderable.Visitor visitor, bool debugRenderables)
				{
					EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool(this.NativeObject, object.Equals(visitor, null) ? IntPtr.Zero : visitor.NativeObject, Convert.ToByte(debugRenderables));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void visitRenderables_CallBack_void_CVisitor(IntPtr visitor);

				protected visitRenderables_CallBack_void_CVisitor m_visitRenderables_CallBack_void_CVisitor;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_NoVirtual(IntPtr pNativeObject, IntPtr visitor);

				/// <summary>
				/// 该方法允许渲染器连接可渲染对象
				/// </summary>
				/// <param name="visitor"></param>
				/// <returns></returns>
				public virtual void VisitRenderables_NoVirtual(EarthView.World.Graphic.Renderable.Visitor visitor)
				{
					EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_NoVirtual(this.NativeObject, object.Equals(visitor, null) ? IntPtr.Zero : visitor.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_Function(IntPtr visitor)
				{
					EarthView.World.Graphic.Renderable.Visitor csobj_visitor = new EarthView.World.Graphic.Renderable.Visitor(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_visitor.BindNativeObject(visitor,"CVisitor");
					csobj_visitor.Delegate = true;
					IClassFactory csobj_visitorClassFactory = GlobalClassFactoryMap.Get(csobj_visitor.GetCppInstanceTypeName());
					if (csobj_visitorClassFactory != null)
					{
						csobj_visitor.Delegate = true;
						csobj_visitor = csobj_visitorClassFactory.Create() as EarthView.World.Graphic.Renderable.Visitor;
						csobj_visitor.BindNativeObject(visitor, "CVisitor");
						csobj_visitor.Delegate = true;
					}
					
					VisitRenderables(csobj_visitor);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor(IntPtr pNativeObject, IntPtr visitor);

				/// <summary>
				/// 该方法允许渲染器连接可渲染对象
				/// </summary>
				/// <param name="visitor"></param>
				/// <returns></returns>
				public virtual void VisitRenderables(EarthView.World.Graphic.Renderable.Visitor visitor)
				{
					EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor(this.NativeObject, object.Equals(visitor, null) ? IntPtr.Zero : visitor.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadParticleSystemRenderer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleSystemRenderer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadParticleSystemRenderer = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadParticleSystemRenderer = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadParticleSystemRenderer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleSystemRenderer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadParticleSystemRenderer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleSystemRenderer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadParticleSystemRenderer = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadParticleSystemRenderer = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadParticleSystemRenderer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleSystemRenderer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleSystemRenderer", new ParticleSystemRendererClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleSystemRendererProxy", new ParticleSystemRendererClassFactory());

				public ParticleSystemRenderer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool(IntPtr pObject, _updateRenderQueue_CallBack_void_CRenderQueue_ParticleList_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr(IntPtr pObject, _setMaterial_CallBack_void_CMaterialPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera(IntPtr pObject, _notifyCurrentCamera_CallBack_void_CCamera pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool(IntPtr pObject, _notifyAttached_CallBack_void_CNode_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode(IntPtr pObject, _notifyAttached_CallBack_void_CNode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void(IntPtr pObject, _notifyParticleRotated_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void(IntPtr pObject, _notifyParticleResized_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t(IntPtr pObject, _notifyParticleQuota_CallBack_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real(IntPtr pObject, _notifyDefaultDimensions_CallBack_void_Real_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle(IntPtr pObject, _notifyParticleEmitted_CallBack_void_CParticle pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle(IntPtr pObject, _notifyParticleExpired_CallBack_void_CParticle pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList(IntPtr pObject, _notifyParticleMoved_CallBack_void_ParticleList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList(IntPtr pObject, _notifyParticleCleared_CallBack_void_ParticleList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData(IntPtr pObject, _createVisualData_CallBack_CParticleVisualData pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData(IntPtr pObject, _destroyVisualData_CallBack_void_CParticleVisualData pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8(IntPtr pObject, setRenderQueueGroup_CallBack_void_ev_uint8 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool(IntPtr pObject, setKeepParticlesInLocalSpace_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode(IntPtr pObject, _getSortMode_CallBack_SortMode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool(IntPtr pObject, visitRenderables_CallBack_void_CVisitor_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor(IntPtr pObject, visitRenderables_CallBack_void_CVisitor pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString(IntPtr pObject, setParameter_CallBack_ev_bool_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool(IntPtr pObject, setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList(IntPtr pObject, setParameterList_CallBack_void_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString(IntPtr pObject, getParameter_CallBack_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface(IntPtr pObject, copyParametersTo_CallBack_void_CStringInterface pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getType_CallBack_EVString = EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_Function;
						GC.KeepAlive(m_getType_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
						m__updateRenderQueue_CallBack_void_CRenderQueue_ParticleList_ev_bool = EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Function;
						GC.KeepAlive(m__updateRenderQueue_CallBack_void_CRenderQueue_ParticleList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool(this.NativeObject, m__updateRenderQueue_CallBack_void_CRenderQueue_ParticleList_ev_bool);
						m__setMaterial_CallBack_void_CMaterialPtr = EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_Function;
						GC.KeepAlive(m__setMaterial_CallBack_void_CMaterialPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr(this.NativeObject, m__setMaterial_CallBack_void_CMaterialPtr);
						m__notifyCurrentCamera_CallBack_void_CCamera = EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_Function;
						GC.KeepAlive(m__notifyCurrentCamera_CallBack_void_CCamera);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera(this.NativeObject, m__notifyCurrentCamera_CallBack_void_CCamera);
						m__notifyAttached_CallBack_void_CNode_ev_bool = EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_Function;
						GC.KeepAlive(m__notifyAttached_CallBack_void_CNode_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool(this.NativeObject, m__notifyAttached_CallBack_void_CNode_ev_bool);
						m__notifyAttached_CallBack_void_CNode = EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_Function;
						GC.KeepAlive(m__notifyAttached_CallBack_void_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode(this.NativeObject, m__notifyAttached_CallBack_void_CNode);
						m__notifyParticleRotated_CallBack_void = EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_Function;
						GC.KeepAlive(m__notifyParticleRotated_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void(this.NativeObject, m__notifyParticleRotated_CallBack_void);
						m__notifyParticleResized_CallBack_void = EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_Function;
						GC.KeepAlive(m__notifyParticleResized_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void(this.NativeObject, m__notifyParticleResized_CallBack_void);
						m__notifyParticleQuota_CallBack_void_ev_size_t = EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_Function;
						GC.KeepAlive(m__notifyParticleQuota_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t(this.NativeObject, m__notifyParticleQuota_CallBack_void_ev_size_t);
						m__notifyDefaultDimensions_CallBack_void_Real_Real = EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_Function;
						GC.KeepAlive(m__notifyDefaultDimensions_CallBack_void_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real(this.NativeObject, m__notifyDefaultDimensions_CallBack_void_Real_Real);
						m__notifyParticleEmitted_CallBack_void_CParticle = EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_Function;
						GC.KeepAlive(m__notifyParticleEmitted_CallBack_void_CParticle);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle(this.NativeObject, m__notifyParticleEmitted_CallBack_void_CParticle);
						m__notifyParticleExpired_CallBack_void_CParticle = EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_Function;
						GC.KeepAlive(m__notifyParticleExpired_CallBack_void_CParticle);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle(this.NativeObject, m__notifyParticleExpired_CallBack_void_CParticle);
						m__notifyParticleMoved_CallBack_void_ParticleList = EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_Function;
						GC.KeepAlive(m__notifyParticleMoved_CallBack_void_ParticleList);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList(this.NativeObject, m__notifyParticleMoved_CallBack_void_ParticleList);
						m__notifyParticleCleared_CallBack_void_ParticleList = EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_Function;
						GC.KeepAlive(m__notifyParticleCleared_CallBack_void_ParticleList);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList(this.NativeObject, m__notifyParticleCleared_CallBack_void_ParticleList);
						m__createVisualData_CallBack_CParticleVisualData = EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_Function;
						GC.KeepAlive(m__createVisualData_CallBack_CParticleVisualData);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData(this.NativeObject, m__createVisualData_CallBack_CParticleVisualData);
						m__destroyVisualData_CallBack_void_CParticleVisualData = EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_Function;
						GC.KeepAlive(m__destroyVisualData_CallBack_void_CParticleVisualData);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData(this.NativeObject, m__destroyVisualData_CallBack_void_CParticleVisualData);
						m_setRenderQueueGroup_CallBack_void_ev_uint8 = EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_Function;
						GC.KeepAlive(m_setRenderQueueGroup_CallBack_void_ev_uint8);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8(this.NativeObject, m_setRenderQueueGroup_CallBack_void_ev_uint8);
						m_setKeepParticlesInLocalSpace_CallBack_void_ev_bool = EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Function;
						GC.KeepAlive(m_setKeepParticlesInLocalSpace_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool(this.NativeObject, m_setKeepParticlesInLocalSpace_CallBack_void_ev_bool);
						m__getSortMode_CallBack_SortMode = EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_Function;
						GC.KeepAlive(m__getSortMode_CallBack_SortMode);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode(this.NativeObject, m__getSortMode_CallBack_SortMode);
						m_visitRenderables_CallBack_void_CVisitor_ev_bool = EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_Function;
						GC.KeepAlive(m_visitRenderables_CallBack_void_CVisitor_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool(this.NativeObject, m_visitRenderables_CallBack_void_CVisitor_ev_bool);
						m_visitRenderables_CallBack_void_CVisitor = EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_Function;
						GC.KeepAlive(m_visitRenderables_CallBack_void_CVisitor);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor(this.NativeObject, m_visitRenderables_CallBack_void_CVisitor);
						m_setParameter_CallBack_ev_bool_EVString_EVString = EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Function;
						GC.KeepAlive(m_setParameter_CallBack_ev_bool_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString(this.NativeObject, m_setParameter_CallBack_ev_bool_EVString_EVString);
						m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool = EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Function;
						GC.KeepAlive(m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool(this.NativeObject, m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool);
						m_setParameterList_CallBack_void_CommonStringPairList = EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Function;
						GC.KeepAlive(m_setParameterList_CallBack_void_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList(this.NativeObject, m_setParameterList_CallBack_void_CommonStringPairList);
						m_getParameter_CallBack_EVString_EVString = EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Function;
						GC.KeepAlive(m_getParameter_CallBack_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString(this.NativeObject, m_getParameter_CallBack_EVString_EVString);
						m_copyParametersTo_CallBack_void_CStringInterface = EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Function;
						GC.KeepAlive(m_copyParametersTo_CallBack_void_CStringInterface);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface(this.NativeObject, m_copyParametersTo_CallBack_void_CStringInterface);
					}
				}
				public override bool SetParameter(string name, string value)
				{
					return base.SetParameter_NoVirtual(name,value);
				}
				public override bool SetParameter(string name, bool readOnly, bool enable)
				{
					return base.SetParameter_NoVirtual(name,readOnly,enable);
				}
				public override void SetParameterList(EarthView.World.Core.CommonStringPairList paramList)
				{
					base.SetParameterList_NoVirtual(paramList);
				}
				public override string GetParameter(string name)
				{
					return base.GetParameter_NoVirtual(name);
				}
				public override void CopyParametersTo(EarthView.World.Core.StringInterface dest)
				{
					base.CopyParametersTo_NoVirtual(dest);
				}
				public static ParticleSystemRenderer FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ParticleSystemRenderer obj = baseObj as  ParticleSystemRenderer;
					if (object.Equals(obj, null))
					{
						obj = new ParticleSystemRenderer(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CParticleSystemRenderer");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ParticleSystemRendererClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ParticleSystemRenderer emptyInstance = new ParticleSystemRenderer(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 抽象类
			/// 定义了CParticleSystemRenderer工厂对象
			/// </summary>
			public class ParticleSystemRendererFactory : EarthView.World.Graphic.ParticleSystemRendererFactoryObj
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public ParticleSystemRendererFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CParticleSystemRendererFactoryProxy", null);
					if (!"EarthView.World.Graphic.ParticleSystemRendererFactory".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadParticleSystemRendererFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleSystemRendererFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadParticleSystemRendererFactory = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadParticleSystemRendererFactory = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadParticleSystemRendererFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleSystemRendererFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadParticleSystemRendererFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleSystemRendererFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadParticleSystemRendererFactory = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadParticleSystemRendererFactory = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadParticleSystemRendererFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleSystemRendererFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleSystemRendererFactory", new ParticleSystemRendererFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleSystemRendererFactoryProxy", new ParticleSystemRendererFactoryClassFactory());

				public ParticleSystemRendererFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString(IntPtr pObject, createInstance_CallBack_CParticleSystemRenderer_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer(IntPtr pObject, destroyInstance_CallBack_void_CParticleSystemRenderer pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getType_CallBack_EVString = EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_Function;
						GC.KeepAlive(m_getType_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
						m_createInstance_CallBack_CParticleSystemRenderer_EVString = EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_Function;
						GC.KeepAlive(m_createInstance_CallBack_CParticleSystemRenderer_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString(this.NativeObject, m_createInstance_CallBack_CParticleSystemRenderer_EVString);
						m_destroyInstance_CallBack_void_CParticleSystemRenderer = EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_Function;
						GC.KeepAlive(m_destroyInstance_CallBack_void_CParticleSystemRenderer);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer(this.NativeObject, m_destroyInstance_CallBack_void_CParticleSystemRenderer);
					}
				}
				public override string GetType()
				{
					return base.GetType_NoVirtual();
				}
				public override EarthView.World.Graphic.ParticleSystemRenderer CreateInstance(string name)
				{
					return base.CreateInstance_NoVirtual(name);
				}
				public override void DestroyInstance(EarthView.World.Graphic.ParticleSystemRenderer renderer)
				{
					base.DestroyInstance_NoVirtual(renderer);
				}
				public static ParticleSystemRendererFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ParticleSystemRendererFactory obj = baseObj as  ParticleSystemRendererFactory;
					if (object.Equals(obj, null))
					{
						obj = new ParticleSystemRendererFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CParticleSystemRendererFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ParticleSystemRendererFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ParticleSystemRendererFactory emptyInstance = new ParticleSystemRendererFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
