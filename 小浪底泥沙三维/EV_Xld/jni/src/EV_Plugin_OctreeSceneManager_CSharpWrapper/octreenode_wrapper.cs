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
			public class OctreeNode : EarthView.World.Graphic.SceneNode
			{
				public OctreeNode(EarthView.World.Graphic.SceneManager ref_creator) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_creator = new BasePtr(ref_creator);
					list.Add("ref_creator", valueref_creator.PtrVal);
					Create("COctreeNodeProxy", list);
					if (!"EarthView.World.Graphic.OctreeNode".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public OctreeNode(EarthView.World.Graphic.SceneManager ref_creator, string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_creator = new BasePtr(ref_creator);
					list.Add("ref_creator", valueref_creator.PtrVal);
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					Create("COctreeNodeProxy", list);
					if (!"EarthView.World.Graphic.OctreeNode".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort index);

				public new EarthView.World.Graphic.Node RemoveChild_NoVirtual(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16_NoVirtual(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Node csObj = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNode");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Node;
						csObj.BindNativeObject(__ptr, "CNode");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16(IntPtr pNativeObject, ushort index);

				public override EarthView.World.Graphic.Node RemoveChild(ushort index)
				{
					IntPtr __ptr = EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16(this.NativeObject, index);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Node csObj = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNode");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Node;
						csObj.BindNativeObject(__ptr, "CNode");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public new EarthView.World.Graphic.Node RemoveChild_NoVirtual(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString_NoVirtual(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Node csObj = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNode");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Node;
						csObj.BindNativeObject(__ptr, "CNode");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString(IntPtr pNativeObject, string name);

				public override EarthView.World.Graphic.Node RemoveChild(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Node csObj = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNode");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Node;
						csObj.BindNativeObject(__ptr, "CNode");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode_NoVirtual(IntPtr pNativeObject, IntPtr child);

				public new EarthView.World.Graphic.Node RemoveChild_NoVirtual(EarthView.World.Graphic.Node child)
				{
					IntPtr __ptr = EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode_NoVirtual(this.NativeObject, object.Equals(child, null) ? IntPtr.Zero : child.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Node csObj = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNode");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Node;
						csObj.BindNativeObject(__ptr, "CNode");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode(IntPtr pNativeObject, IntPtr child);

				public override EarthView.World.Graphic.Node RemoveChild(EarthView.World.Graphic.Node child)
				{
					IntPtr __ptr = EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode(this.NativeObject, object.Equals(child, null) ? IntPtr.Zero : child.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Node csObj = new EarthView.World.Graphic.Node(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CNode");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Node;
						csObj.BindNativeObject(__ptr, "CNode");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_COctreeNode_removeAllChildren_void_NoVirtual(IntPtr pNativeObject);

				public new void RemoveAllChildren_NoVirtual()
				{
					EarthView_World_Graphic_COctreeNode_removeAllChildren_void_NoVirtual(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_COctreeNode_removeAllChildren_void(IntPtr pNativeObject);

				public override void RemoveAllChildren()
				{
					EarthView_World_Graphic_COctreeNode_removeAllChildren_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_COctreeNode_getOctant_COctree(IntPtr pNativeObject);

				public EarthView.World.Graphic.Octree GetOctant()
				{
					IntPtr __ptr = EarthView_World_Graphic_COctreeNode_getOctant_COctree(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Octree csObj = new EarthView.World.Graphic.Octree(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COctree");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Octree;
						csObj.BindNativeObject(__ptr, "COctree");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_COctreeNode_setOctant_void_COctree(IntPtr pNativeObject, IntPtr ref_o);

				public void SetOctant(EarthView.World.Graphic.Octree ref_o)
				{
					EarthView_World_Graphic_COctreeNode_setOctant_void_COctree(this.NativeObject, object.Equals(ref_o, null) ? IntPtr.Zero : ref_o.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_COctreeNode__isIn_ev_bool_CAxisAlignedBox(IntPtr pNativeObject, IntPtr box);

				public bool _isIn(ref EarthView.World.Spatial.Math.AxisAlignedBox box)
				{
					byte ret=EarthView_World_Graphic_COctreeNode__isIn_ev_bool_CAxisAlignedBox(this.NativeObject, object.Equals(box, null) ? IntPtr.Zero : box.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _addToRenderQueue_CallBack_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo(IntPtr cam, IntPtr q, bool onlyShadowCasters, IntPtr visibleBounds);

				protected _addToRenderQueue_CallBack_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo m__addToRenderQueue_CallBack_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_NoVirtual(IntPtr pNativeObject, IntPtr cam, IntPtr q, byte onlyShadowCasters, IntPtr visibleBounds);

				public virtual void _addToRenderQueue_NoVirtual(EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.RenderQueue q, bool onlyShadowCasters, EarthView.World.Graphic.VisibleObjectsBoundsInfo visibleBounds)
				{
					EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_NoVirtual(this.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject, object.Equals(q, null) ? IntPtr.Zero : q.NativeObject, Convert.ToByte(onlyShadowCasters), object.Equals(visibleBounds, null) ? IntPtr.Zero : visibleBounds.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_Function(IntPtr cam, IntPtr q, bool onlyShadowCasters, IntPtr visibleBounds)
				{
					EarthView.World.Graphic.Camera csobj_cam = new EarthView.World.Graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_cam.BindNativeObject(cam,"CCamera");
					csobj_cam.Delegate = true;
					IClassFactory csobj_camClassFactory = GlobalClassFactoryMap.Get(csobj_cam.GetCppInstanceTypeName());
					if (csobj_camClassFactory != null)
					{
						csobj_cam.Delegate = true;
						csobj_cam = csobj_camClassFactory.Create() as EarthView.World.Graphic.Camera;
						csobj_cam.BindNativeObject(cam, "CCamera");
						csobj_cam.Delegate = true;
					}
					EarthView.World.Graphic.RenderQueue csobj_q = new EarthView.World.Graphic.RenderQueue(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_q.BindNativeObject(q,"CRenderQueue");
					csobj_q.Delegate = true;
					IClassFactory csobj_qClassFactory = GlobalClassFactoryMap.Get(csobj_q.GetCppInstanceTypeName());
					if (csobj_qClassFactory != null)
					{
						csobj_q.Delegate = true;
						csobj_q = csobj_qClassFactory.Create() as EarthView.World.Graphic.RenderQueue;
						csobj_q.BindNativeObject(q, "CRenderQueue");
						csobj_q.Delegate = true;
					}
					EarthView.World.Graphic.VisibleObjectsBoundsInfo csobj_visibleBounds = new EarthView.World.Graphic.VisibleObjectsBoundsInfo(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_visibleBounds.BindNativeObject(visibleBounds,"VisibleObjectsBoundsInfo");
					csobj_visibleBounds.Delegate = true;
					IClassFactory csobj_visibleBoundsClassFactory = GlobalClassFactoryMap.Get(csobj_visibleBounds.GetCppInstanceTypeName());
					if (csobj_visibleBoundsClassFactory != null)
					{
						csobj_visibleBounds.Delegate = true;
						csobj_visibleBounds = csobj_visibleBoundsClassFactory.Create() as EarthView.World.Graphic.VisibleObjectsBoundsInfo;
						csobj_visibleBounds.BindNativeObject(visibleBounds, "VisibleObjectsBoundsInfo");
						csobj_visibleBounds.Delegate = true;
					}
					
					_addToRenderQueue(csobj_cam, csobj_q, onlyShadowCasters, csobj_visibleBounds);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo(IntPtr pNativeObject, IntPtr cam, IntPtr q, byte onlyShadowCasters, IntPtr visibleBounds);

				public virtual void _addToRenderQueue(EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.RenderQueue q, bool onlyShadowCasters, EarthView.World.Graphic.VisibleObjectsBoundsInfo visibleBounds)
				{
					EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo(this.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject, object.Equals(q, null) ? IntPtr.Zero : q.NativeObject, Convert.ToByte(onlyShadowCasters), object.Equals(visibleBounds, null) ? IntPtr.Zero : visibleBounds.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void getRenderOperation_CallBack_void_CRenderOperation(IntPtr op);

				protected getRenderOperation_CallBack_void_CRenderOperation m_getRenderOperation_CallBack_void_CRenderOperation;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_NoVirtual(IntPtr pNativeObject, IntPtr op);

				public virtual void GetRenderOperation_NoVirtual(ref EarthView.World.Graphic.RenderOperation op)
				{
					EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_NoVirtual(this.NativeObject, object.Equals(op, null) ? IntPtr.Zero : op.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_Function(IntPtr op)
				{
					EarthView.World.Graphic.RenderOperation csobj_op = new EarthView.World.Graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_op.BindNativeObject(op,"CRenderOperation");
					csobj_op.Delegate = true;
					IClassFactory csobj_opClassFactory = GlobalClassFactoryMap.Get(csobj_op.GetCppInstanceTypeName());
					if (csobj_opClassFactory != null)
					{
						csobj_op.Delegate = true;
						csobj_op = csobj_opClassFactory.Create() as EarthView.World.Graphic.RenderOperation;
						csobj_op.BindNativeObject(op, "CRenderOperation");
						csobj_op.Delegate = true;
					}
					
					GetRenderOperation(ref csobj_op);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation(IntPtr pNativeObject, IntPtr op);

				public virtual void GetRenderOperation(ref EarthView.World.Graphic.RenderOperation op)
				{
					EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation(this.NativeObject, object.Equals(op, null) ? IntPtr.Zero : op.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_COctreeNode__getLocalAABB_CAxisAlignedBox(IntPtr pNativeObject);

				public EarthView.World.Spatial.Math.AxisAlignedBox _getLocalAABB()
				{
					IntPtr __ptr = EarthView_World_Graphic_COctreeNode__getLocalAABB_CAxisAlignedBox(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.AxisAlignedBox csObj = new EarthView.World.Spatial.Math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CAxisAlignedBox");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.AxisAlignedBox;
						csObj.BindNativeObject(__ptr, "CAxisAlignedBox");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_COctreeNode__updateBounds_void_NoVirtual(IntPtr pNativeObject);

				public new void _updateBounds_NoVirtual()
				{
					EarthView_World_Graphic_COctreeNode__updateBounds_void_NoVirtual(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_COctreeNode__updateBounds_void(IntPtr pNativeObject);

				public override void _updateBounds()
				{
					EarthView_World_Graphic_COctreeNode__updateBounds_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadOctreeNode = LoadDll.Load("EV_Plugin_OctreeSceneManager_d.dll");
						private static bool csbLoadOctreeNode = LoadDll.Load("EV_Plugin_OctreeSceneManager_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadOctreeNode = LoadDll.Load("EV_Plugin_OctreeSceneManager_d.so");
						private static bool csbLoadOctreeNode = LoadDll.Load("EV_Plugin_OctreeSceneManager_CSharp_d.so");

					#else 
						private static bool bLoadOctreeNode = LoadDll.Load("EV_Plugin_OctreeSceneManager_d.dll");
						private static bool csbLoadOctreeNode = LoadDll.Load("EV_Plugin_OctreeSceneManager_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadOctreeNode = LoadDll.Load("EV_Plugin_OctreeSceneManager.dll");
						private static bool csbLoadOctreeNode = LoadDll.Load("EV_Plugin_OctreeSceneManager_CSharp.dll");

					#elif Linux 
						private static bool bLoadOctreeNode = LoadDll.Load("EV_Plugin_OctreeSceneManager.so");
						private static bool csbLoadOctreeNode = LoadDll.Load("EV_Plugin_OctreeSceneManager_CSharp.so");

					#else 
						private static bool bLoadOctreeNode = LoadDll.Load("EV_Plugin_OctreeSceneManager.dll");
						private static bool csbLoadOctreeNode = LoadDll.Load("EV_Plugin_OctreeSceneManager_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeNode", new OctreeNodeClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeNodeProxy", new OctreeNodeClassFactory());

				public OctreeNode(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo(IntPtr pObject, _addToRenderQueue_CallBack_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation(IntPtr pObject, getRenderOperation_CallBack_void_CRenderOperation pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool(IntPtr pObject, setInSceneGraph_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool(IntPtr pObject, isInSceneGraph_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__notifyRootNode_void(IntPtr pObject, _notifyRootNode_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__updateBounds_void(IntPtr pObject, _updateBounds_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(IntPtr pObject, _findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(IntPtr pObject, _findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(IntPtr pObject, _findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(IntPtr pObject, _findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox(IntPtr pObject, _getWorldAABB_CallBack_CAxisAlignedBox pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator(IntPtr pObject, getAttachedObjectIterator_CallBack_ObjectIterator pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool(IntPtr pObject, showBoundingBox_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr(IntPtr pObject, showBoundingBox_CallBack_void_ev_bool_CMaterialPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool(IntPtr pObject, hideBoundingBox_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue(IntPtr pObject, _addBoundingBoxToQueue_CallBack_void_CRenderQueue pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool(IntPtr pObject, getShowBoundingBox_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion(IntPtr pObject, createChildSceneNode_CallBack_CSceneNode_CVector3_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3(IntPtr pObject, createChildSceneNode_CallBack_CSceneNode_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode(IntPtr pObject, createChildSceneNode_CallBack_CSceneNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion(IntPtr pObject, createChildSceneNode_CallBack_CSceneNode_EVString_CVector3_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3(IntPtr pObject, createChildSceneNode_CallBack_CSceneNode_EVString_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString(IntPtr pObject, createChildSceneNode_CallBack_CSceneNode_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32(IntPtr pObject, findLights_CallBack_void_LightList_Real_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real(IntPtr pObject, findLights_CallBack_void_LightList_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3(IntPtr pObject, setFixedYawAxis_CallBack_void_ev_bool_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool(IntPtr pObject, setFixedYawAxis_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3(IntPtr pObject, setDirection_CallBack_void_Real_Real_Real_TransformSpace_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace(IntPtr pObject, setDirection_CallBack_void_Real_Real_Real_TransformSpace pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real(IntPtr pObject, setDirection_CallBack_void_Real_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3(IntPtr pObject, setDirection_CallBack_void_CVector3_TransformSpace_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace(IntPtr pObject, setDirection_CallBack_void_CVector3_TransformSpace pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3(IntPtr pObject, setDirection_CallBack_void_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3(IntPtr pObject, lookAt_CallBack_void_CVector3_TransformSpace_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace(IntPtr pObject, lookAt_CallBack_void_CVector3_TransformSpace pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool(IntPtr pObject, setAutoTracking_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode(IntPtr pObject, setAutoTracking_CallBack_void_ev_bool_CSceneNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3(IntPtr pObject, setAutoTracking_CallBack_void_ev_bool_CSceneNode_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3(IntPtr pObject, setAutoTracking_CallBack_void_ev_bool_CSceneNode_CVector3_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode(IntPtr pObject, getAutoTrackTarget_CallBack_CSceneNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3(IntPtr pObject, getAutoTrackOffset_CallBack_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3(IntPtr pObject, getAutoTrackLocalDirection_CallBack_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool(IntPtr pObject, setVisible_CallBack_void_ev_bool_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool(IntPtr pObject, setVisible_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getVisible_ev_bool(IntPtr pObject, getVisible_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool(IntPtr pObject, hasAnyVisibleObject_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool(IntPtr pObject, hasAnyVisibleObject2_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool(IntPtr pObject, hasAnyVisibleShadowCaster_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool(IntPtr pObject, hasAnyVisibleShadowCaster2_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool(IntPtr pObject, flipVisibility_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_flipVisibility_void(IntPtr pObject, flipVisibility_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool(IntPtr pObject, setDebugDisplayEnabled_CallBack_void_ev_bool_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool(IntPtr pObject, setDebugDisplayEnabled_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable(IntPtr pObject, getDebugRenderable_CallBack_CDebugRenderable pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__updateFromParent_void(IntPtr pObject, _updateFromParent_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setParent_void_CNode(IntPtr pObject, setParent_CallBack_void_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void(IntPtr pObject, updateFromParentImpl_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode(IntPtr pObject, createChildImpl_CallBack_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString(IntPtr pObject, createChildImpl_CallBack_CNode_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_notifyMoved_void(IntPtr pObject, notifyMoved_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getParent_CNode(IntPtr pObject, getParent_CallBack_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion(IntPtr pObject, getOrientation_CallBack_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion(IntPtr pObject, setOrientation_CallBack_void_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool(IntPtr pObject, setOrientation_CallBack_void_CQuaternion_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real(IntPtr pObject, setOrientation_CallBack_void_Real_Real_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool(IntPtr pObject, setOrientation_CallBack_void_Real_Real_Real_Real_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_resetOrientation_void(IntPtr pObject, resetOrientation_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3(IntPtr pObject, setPosition_CallBack_void_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool(IntPtr pObject, setPosition_CallBack_void_CVector3_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real(IntPtr pObject, setPosition_CallBack_void_Real_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool(IntPtr pObject, setPosition_CallBack_void_Real_Real_Real_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getPosition_CVector3(IntPtr pObject, getPosition_CallBack_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3(IntPtr pObject, setScale_CallBack_void_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool(IntPtr pObject, setScale_CallBack_void_CVector3_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real(IntPtr pObject, setScale_CallBack_void_Real_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool(IntPtr pObject, setScale_CallBack_void_Real_Real_Real_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getScale_CVector3(IntPtr pObject, getScale_CallBack_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool(IntPtr pObject, setInheritOrientation_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool(IntPtr pObject, getInheritOrientation_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool(IntPtr pObject, setInheritScale_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool(IntPtr pObject, getInheritScale_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_scale_void_CVector3(IntPtr pObject, scale_CallBack_void_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real(IntPtr pObject, scale_CallBack_void_Real_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace(IntPtr pObject, translate_CallBack_void_CVector3_TransformSpace pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CVector3(IntPtr pObject, translate_CallBack_void_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace(IntPtr pObject, translate_CallBack_void_Real_Real_Real_TransformSpace pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real(IntPtr pObject, translate_CallBack_void_Real_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace(IntPtr pObject, translate_CallBack_void_CMatrix3_CVector3_TransformSpace pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3(IntPtr pObject, translate_CallBack_void_CMatrix3_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace(IntPtr pObject, translate_CallBack_void_CMatrix3_Real_Real_Real_TransformSpace pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real(IntPtr pObject, translate_CallBack_void_CMatrix3_Real_Real_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace(IntPtr pObject, roll_CallBack_void_CRadian_TransformSpace pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_roll_void_CRadian(IntPtr pObject, roll_CallBack_void_CRadian pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace(IntPtr pObject, pitch_CallBack_void_CRadian_TransformSpace pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian(IntPtr pObject, pitch_CallBack_void_CRadian pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace(IntPtr pObject, yaw_CallBack_void_CRadian_TransformSpace pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian(IntPtr pObject, yaw_CallBack_void_CRadian pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace(IntPtr pObject, rotate_CallBack_void_CVector3_CRadian_TransformSpace pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian(IntPtr pObject, rotate_CallBack_void_CVector3_CRadian pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace(IntPtr pObject, rotate_CallBack_void_CQuaternion_TransformSpace pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion(IntPtr pObject, rotate_CallBack_void_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4(IntPtr pObject, setMatrix_CallBack_void_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4(IntPtr pObject, getMatrix_CallBack_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4(IntPtr pObject, setLocalMatrix_CallBack_void_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4(IntPtr pObject, getLocalMatrix_CallBack_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3(IntPtr pObject, getLocalAxes_CallBack_CMatrix3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion(IntPtr pObject, createChild_CallBack_CNode_CVector3_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3(IntPtr pObject, createChild_CallBack_CNode_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode(IntPtr pObject, createChild_CallBack_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion(IntPtr pObject, createChild_CallBack_CNode_EVString_CVector3_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3(IntPtr pObject, createChild_CallBack_CNode_EVString_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString(IntPtr pObject, createChild_CallBack_CNode_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_addChild_void_CNode(IntPtr pObject, addChild_CallBack_void_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16(IntPtr pObject, numChildren_CallBack_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16(IntPtr pObject, getChild_CallBack_CNode_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString(IntPtr pObject, getChild_CallBack_CNode_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString(IntPtr pObject, existChild_CallBack_ev_bool_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator(IntPtr pObject, getChildIterator_CallBack_ChildNodeIterator pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16(IntPtr pObject, removeChild_CallBack_CNode_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode(IntPtr pObject, removeChild_CallBack_CNode_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString(IntPtr pObject, removeChild_CallBack_CNode_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeAllChildren_void(IntPtr pObject, removeAllChildren_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3(IntPtr pObject, _setDerivedPosition_CallBack_void_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool(IntPtr pObject, _setDerivedPosition_CallBack_void_CVector3_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion(IntPtr pObject, _setDerivedOrientation_CallBack_void_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool(IntPtr pObject, _setDerivedOrientation_CallBack_void_CQuaternion_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion(IntPtr pObject, _getDerivedOrientation_CallBack_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3(IntPtr pObject, _getDerivedPosition_CallBack_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3(IntPtr pObject, _getDerivedScale_CallBack_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4(IntPtr pObject, _getFullTransform_CallBack_CMatrix4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool(IntPtr pObject, _update_CallBack_void_ev_bool_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener(IntPtr pObject, addListener_CallBack_void_CNodeListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener(IntPtr pObject, removeListener_CallBack_void_CNodeListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32(IntPtr pObject, getListener_CallBack_CNodeListener_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32(IntPtr pObject, getNumListener_CallBack_ev_uint32_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setInitialState_void(IntPtr pObject, setInitialState_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_resetToInitialState_void(IntPtr pObject, resetToInitialState_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3(IntPtr pObject, getInitialPosition_CallBack_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3(IntPtr pObject, convertWorldToLocalPosition_CallBack_CVector3_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3(IntPtr pObject, convertLocalToWorldPosition_CallBack_CVector3_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion(IntPtr pObject, convertWorldToLocalOrientation_CallBack_CQuaternion_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion(IntPtr pObject, convertLocalToWorldOrientation_CallBack_CQuaternion_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion(IntPtr pObject, getInitialOrientation_CallBack_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3(IntPtr pObject, getInitialScale_CallBack_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera(IntPtr pObject, getSquaredViewDepth_CallBack_Real_CCamera pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool(IntPtr pObject, needUpdate_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_needUpdate_void(IntPtr pObject, needUpdate_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool(IntPtr pObject, requestUpdate_CallBack_void_CNode_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode(IntPtr pObject, requestUpdate_CallBack_void_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode(IntPtr pObject, cancelUpdate_CallBack_void_CNode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Real(IntPtr pObject, getDebugRenderable_CallBack_CDebugRenderable_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject(IntPtr pObject, attachObject_CallBack_void_CMovableObject pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16(IntPtr pObject, numAttachedObjects_CallBack_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16(IntPtr pObject, getAttachedObject_CallBack_CMovableObject_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString(IntPtr pObject, getAttachedObject_CallBack_CMovableObject_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16(IntPtr pObject, detachObject_CallBack_CMovableObject_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject(IntPtr pObject, detachObject_CallBack_void_CMovableObject pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString(IntPtr pObject, detachObject_CallBack_CMovableObject_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_detachAllObjects_void(IntPtr pObject, detachAllObjects_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString(IntPtr pObject, removeAndDestroyChild_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16(IntPtr pObject, removeAndDestroyChild_CallBack_void_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Plugin_OctreeSceneManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void(IntPtr pObject, removeAndDestroyAllChildren_CallBack_void pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m__addToRenderQueue_CallBack_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo = EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_Function;
						GC.KeepAlive(m__addToRenderQueue_CallBack_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo(this.NativeObject, m__addToRenderQueue_CallBack_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo);
						m_getRenderOperation_CallBack_void_CRenderOperation = EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_Function;
						GC.KeepAlive(m_getRenderOperation_CallBack_void_CRenderOperation);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation(this.NativeObject, m_getRenderOperation_CallBack_void_CRenderOperation);
						m_setInSceneGraph_CallBack_void_ev_bool = EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool_Function;
						GC.KeepAlive(m_setInSceneGraph_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool(this.NativeObject, m_setInSceneGraph_CallBack_void_ev_bool);
						m_isInSceneGraph_CallBack_ev_bool = EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool_Function;
						GC.KeepAlive(m_isInSceneGraph_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool(this.NativeObject, m_isInSceneGraph_CallBack_ev_bool);
						m__notifyRootNode_CallBack_void = EarthView_World_Graphic_CSceneNode__notifyRootNode_void_Function;
						GC.KeepAlive(m__notifyRootNode_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__notifyRootNode_void(this.NativeObject, m__notifyRootNode_CallBack_void);
						m__updateBounds_CallBack_void = EarthView_World_Graphic_CSceneNode__updateBounds_void_Function;
						GC.KeepAlive(m__updateBounds_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__updateBounds_void(this.NativeObject, m__updateBounds_CallBack_void);
						m__findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool = EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Function;
						GC.KeepAlive(m__findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(this.NativeObject, m__findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool);
						m__findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool = EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Function;
						GC.KeepAlive(m__findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(this.NativeObject, m__findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool);
						m__findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool = EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Function;
						GC.KeepAlive(m__findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(this.NativeObject, m__findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool);
						m__findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo = EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Function;
						GC.KeepAlive(m__findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(this.NativeObject, m__findVisibleObjects_CallBack_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo);
						m__getWorldAABB_CallBack_CAxisAlignedBox = EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox_Function;
						GC.KeepAlive(m__getWorldAABB_CallBack_CAxisAlignedBox);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox(this.NativeObject, m__getWorldAABB_CallBack_CAxisAlignedBox);
						m_getAttachedObjectIterator_CallBack_ObjectIterator = EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator_Function;
						GC.KeepAlive(m_getAttachedObjectIterator_CallBack_ObjectIterator);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator(this.NativeObject, m_getAttachedObjectIterator_CallBack_ObjectIterator);
						m_showBoundingBox_CallBack_void_ev_bool = EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_Function;
						GC.KeepAlive(m_showBoundingBox_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool(this.NativeObject, m_showBoundingBox_CallBack_void_ev_bool);
						m_showBoundingBox_CallBack_void_ev_bool_CMaterialPtr = EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr_Function;
						GC.KeepAlive(m_showBoundingBox_CallBack_void_ev_bool_CMaterialPtr);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr(this.NativeObject, m_showBoundingBox_CallBack_void_ev_bool_CMaterialPtr);
						m_hideBoundingBox_CallBack_void_ev_bool = EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool_Function;
						GC.KeepAlive(m_hideBoundingBox_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool(this.NativeObject, m_hideBoundingBox_CallBack_void_ev_bool);
						m__addBoundingBoxToQueue_CallBack_void_CRenderQueue = EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue_Function;
						GC.KeepAlive(m__addBoundingBoxToQueue_CallBack_void_CRenderQueue);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue(this.NativeObject, m__addBoundingBoxToQueue_CallBack_void_CRenderQueue);
						m_getShowBoundingBox_CallBack_ev_bool = EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool_Function;
						GC.KeepAlive(m_getShowBoundingBox_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool(this.NativeObject, m_getShowBoundingBox_CallBack_ev_bool);
						m_createChildSceneNode_CallBack_CSceneNode_CVector3_CQuaternion = EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Function;
						GC.KeepAlive(m_createChildSceneNode_CallBack_CSceneNode_CVector3_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion(this.NativeObject, m_createChildSceneNode_CallBack_CSceneNode_CVector3_CQuaternion);
						m_createChildSceneNode_CallBack_CSceneNode_CVector3 = EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_Function;
						GC.KeepAlive(m_createChildSceneNode_CallBack_CSceneNode_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3(this.NativeObject, m_createChildSceneNode_CallBack_CSceneNode_CVector3);
						m_createChildSceneNode_CallBack_CSceneNode = EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_Function;
						GC.KeepAlive(m_createChildSceneNode_CallBack_CSceneNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode(this.NativeObject, m_createChildSceneNode_CallBack_CSceneNode);
						m_createChildSceneNode_CallBack_CSceneNode_EVString_CVector3_CQuaternion = EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Function;
						GC.KeepAlive(m_createChildSceneNode_CallBack_CSceneNode_EVString_CVector3_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion(this.NativeObject, m_createChildSceneNode_CallBack_CSceneNode_EVString_CVector3_CQuaternion);
						m_createChildSceneNode_CallBack_CSceneNode_EVString_CVector3 = EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_Function;
						GC.KeepAlive(m_createChildSceneNode_CallBack_CSceneNode_EVString_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3(this.NativeObject, m_createChildSceneNode_CallBack_CSceneNode_EVString_CVector3);
						m_createChildSceneNode_CallBack_CSceneNode_EVString = EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_Function;
						GC.KeepAlive(m_createChildSceneNode_CallBack_CSceneNode_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString(this.NativeObject, m_createChildSceneNode_CallBack_CSceneNode_EVString);
						m_findLights_CallBack_void_LightList_Real_ev_uint32 = EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32_Function;
						GC.KeepAlive(m_findLights_CallBack_void_LightList_Real_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32(this.NativeObject, m_findLights_CallBack_void_LightList_Real_ev_uint32);
						m_findLights_CallBack_void_LightList_Real = EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_Function;
						GC.KeepAlive(m_findLights_CallBack_void_LightList_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real(this.NativeObject, m_findLights_CallBack_void_LightList_Real);
						m_setFixedYawAxis_CallBack_void_ev_bool_CVector3 = EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3_Function;
						GC.KeepAlive(m_setFixedYawAxis_CallBack_void_ev_bool_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3(this.NativeObject, m_setFixedYawAxis_CallBack_void_ev_bool_CVector3);
						m_setFixedYawAxis_CallBack_void_ev_bool = EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_Function;
						GC.KeepAlive(m_setFixedYawAxis_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool(this.NativeObject, m_setFixedYawAxis_CallBack_void_ev_bool);
						m_setDirection_CallBack_void_Real_Real_Real_TransformSpace_CVector3 = EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Function;
						GC.KeepAlive(m_setDirection_CallBack_void_Real_Real_Real_TransformSpace_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3(this.NativeObject, m_setDirection_CallBack_void_Real_Real_Real_TransformSpace_CVector3);
						m_setDirection_CallBack_void_Real_Real_Real_TransformSpace = EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_Function;
						GC.KeepAlive(m_setDirection_CallBack_void_Real_Real_Real_TransformSpace);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace(this.NativeObject, m_setDirection_CallBack_void_Real_Real_Real_TransformSpace);
						m_setDirection_CallBack_void_Real_Real_Real = EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_Function;
						GC.KeepAlive(m_setDirection_CallBack_void_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real(this.NativeObject, m_setDirection_CallBack_void_Real_Real_Real);
						m_setDirection_CallBack_void_CVector3_TransformSpace_CVector3 = EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3_Function;
						GC.KeepAlive(m_setDirection_CallBack_void_CVector3_TransformSpace_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3(this.NativeObject, m_setDirection_CallBack_void_CVector3_TransformSpace_CVector3);
						m_setDirection_CallBack_void_CVector3_TransformSpace = EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_Function;
						GC.KeepAlive(m_setDirection_CallBack_void_CVector3_TransformSpace);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace(this.NativeObject, m_setDirection_CallBack_void_CVector3_TransformSpace);
						m_setDirection_CallBack_void_CVector3 = EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_Function;
						GC.KeepAlive(m_setDirection_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3(this.NativeObject, m_setDirection_CallBack_void_CVector3);
						m_lookAt_CallBack_void_CVector3_TransformSpace_CVector3 = EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3_Function;
						GC.KeepAlive(m_lookAt_CallBack_void_CVector3_TransformSpace_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3(this.NativeObject, m_lookAt_CallBack_void_CVector3_TransformSpace_CVector3);
						m_lookAt_CallBack_void_CVector3_TransformSpace = EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_Function;
						GC.KeepAlive(m_lookAt_CallBack_void_CVector3_TransformSpace);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace(this.NativeObject, m_lookAt_CallBack_void_CVector3_TransformSpace);
						m_setAutoTracking_CallBack_void_ev_bool = EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_Function;
						GC.KeepAlive(m_setAutoTracking_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool(this.NativeObject, m_setAutoTracking_CallBack_void_ev_bool);
						m_setAutoTracking_CallBack_void_ev_bool_CSceneNode = EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_Function;
						GC.KeepAlive(m_setAutoTracking_CallBack_void_ev_bool_CSceneNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode(this.NativeObject, m_setAutoTracking_CallBack_void_ev_bool_CSceneNode);
						m_setAutoTracking_CallBack_void_ev_bool_CSceneNode_CVector3 = EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Function;
						GC.KeepAlive(m_setAutoTracking_CallBack_void_ev_bool_CSceneNode_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3(this.NativeObject, m_setAutoTracking_CallBack_void_ev_bool_CSceneNode_CVector3);
						m_setAutoTracking_CallBack_void_ev_bool_CSceneNode_CVector3_CVector3 = EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Function;
						GC.KeepAlive(m_setAutoTracking_CallBack_void_ev_bool_CSceneNode_CVector3_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3(this.NativeObject, m_setAutoTracking_CallBack_void_ev_bool_CSceneNode_CVector3_CVector3);
						m_getAutoTrackTarget_CallBack_CSceneNode = EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode_Function;
						GC.KeepAlive(m_getAutoTrackTarget_CallBack_CSceneNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode(this.NativeObject, m_getAutoTrackTarget_CallBack_CSceneNode);
						m_getAutoTrackOffset_CallBack_CVector3 = EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3_Function;
						GC.KeepAlive(m_getAutoTrackOffset_CallBack_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3(this.NativeObject, m_getAutoTrackOffset_CallBack_CVector3);
						m_getAutoTrackLocalDirection_CallBack_CVector3 = EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3_Function;
						GC.KeepAlive(m_getAutoTrackLocalDirection_CallBack_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3(this.NativeObject, m_getAutoTrackLocalDirection_CallBack_CVector3);
						m_setVisible_CallBack_void_ev_bool_ev_bool = EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool_Function;
						GC.KeepAlive(m_setVisible_CallBack_void_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool(this.NativeObject, m_setVisible_CallBack_void_ev_bool_ev_bool);
						m_setVisible_CallBack_void_ev_bool = EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_Function;
						GC.KeepAlive(m_setVisible_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool(this.NativeObject, m_setVisible_CallBack_void_ev_bool);
						m_getVisible_CallBack_ev_bool = EarthView_World_Graphic_CSceneNode_getVisible_ev_bool_Function;
						GC.KeepAlive(m_getVisible_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getVisible_ev_bool(this.NativeObject, m_getVisible_CallBack_ev_bool);
						m_hasAnyVisibleObject_CallBack_ev_bool = EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool_Function;
						GC.KeepAlive(m_hasAnyVisibleObject_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool(this.NativeObject, m_hasAnyVisibleObject_CallBack_ev_bool);
						m_hasAnyVisibleObject2_CallBack_ev_bool = EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool_Function;
						GC.KeepAlive(m_hasAnyVisibleObject2_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool(this.NativeObject, m_hasAnyVisibleObject2_CallBack_ev_bool);
						m_hasAnyVisibleShadowCaster_CallBack_ev_bool = EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool_Function;
						GC.KeepAlive(m_hasAnyVisibleShadowCaster_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool(this.NativeObject, m_hasAnyVisibleShadowCaster_CallBack_ev_bool);
						m_hasAnyVisibleShadowCaster2_CallBack_ev_bool = EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool_Function;
						GC.KeepAlive(m_hasAnyVisibleShadowCaster2_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool(this.NativeObject, m_hasAnyVisibleShadowCaster2_CallBack_ev_bool);
						m_flipVisibility_CallBack_void_ev_bool = EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool_Function;
						GC.KeepAlive(m_flipVisibility_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool(this.NativeObject, m_flipVisibility_CallBack_void_ev_bool);
						m_flipVisibility_CallBack_void = EarthView_World_Graphic_CSceneNode_flipVisibility_void_Function;
						GC.KeepAlive(m_flipVisibility_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_flipVisibility_void(this.NativeObject, m_flipVisibility_CallBack_void);
						m_setDebugDisplayEnabled_CallBack_void_ev_bool_ev_bool = EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Function;
						GC.KeepAlive(m_setDebugDisplayEnabled_CallBack_void_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool(this.NativeObject, m_setDebugDisplayEnabled_CallBack_void_ev_bool_ev_bool);
						m_setDebugDisplayEnabled_CallBack_void_ev_bool = EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_Function;
						GC.KeepAlive(m_setDebugDisplayEnabled_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool(this.NativeObject, m_setDebugDisplayEnabled_CallBack_void_ev_bool);
						m_getDebugRenderable_CallBack_CDebugRenderable = EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Function;
						GC.KeepAlive(m_getDebugRenderable_CallBack_CDebugRenderable);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable(this.NativeObject, m_getDebugRenderable_CallBack_CDebugRenderable);
						m__updateFromParent_CallBack_void = EarthView_World_Graphic_CNode__updateFromParent_void_Function;
						GC.KeepAlive(m__updateFromParent_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__updateFromParent_void(this.NativeObject, m__updateFromParent_CallBack_void);
						m_setParent_CallBack_void_CNode = EarthView_World_Graphic_CNode_setParent_void_CNode_Function;
						GC.KeepAlive(m_setParent_CallBack_void_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setParent_void_CNode(this.NativeObject, m_setParent_CallBack_void_CNode);
						m_updateFromParentImpl_CallBack_void = EarthView_World_Graphic_CNode_updateFromParentImpl_void_Function;
						GC.KeepAlive(m_updateFromParentImpl_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void(this.NativeObject, m_updateFromParentImpl_CallBack_void);
						m_createChildImpl_CallBack_CNode = EarthView_World_Graphic_CNode_createChildImpl_CNode_Function;
						GC.KeepAlive(m_createChildImpl_CallBack_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode(this.NativeObject, m_createChildImpl_CallBack_CNode);
						m_createChildImpl_CallBack_CNode_EVString = EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString_Function;
						GC.KeepAlive(m_createChildImpl_CallBack_CNode_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString(this.NativeObject, m_createChildImpl_CallBack_CNode_EVString);
						m_notifyMoved_CallBack_void = EarthView_World_Graphic_CNode_notifyMoved_void_Function;
						GC.KeepAlive(m_notifyMoved_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_notifyMoved_void(this.NativeObject, m_notifyMoved_CallBack_void);
						m_getParent_CallBack_CNode = EarthView_World_Graphic_CNode_getParent_CNode_Function;
						GC.KeepAlive(m_getParent_CallBack_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getParent_CNode(this.NativeObject, m_getParent_CallBack_CNode);
						m_getOrientation_CallBack_CQuaternion = EarthView_World_Graphic_CNode_getOrientation_CQuaternion_Function;
						GC.KeepAlive(m_getOrientation_CallBack_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion(this.NativeObject, m_getOrientation_CallBack_CQuaternion);
						m_setOrientation_CallBack_void_CQuaternion = EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_Function;
						GC.KeepAlive(m_setOrientation_CallBack_void_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion(this.NativeObject, m_setOrientation_CallBack_void_CQuaternion);
						m_setOrientation_CallBack_void_CQuaternion_ev_bool = EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool_Function;
						GC.KeepAlive(m_setOrientation_CallBack_void_CQuaternion_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool(this.NativeObject, m_setOrientation_CallBack_void_CQuaternion_ev_bool);
						m_setOrientation_CallBack_void_Real_Real_Real_Real = EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_Function;
						GC.KeepAlive(m_setOrientation_CallBack_void_Real_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real(this.NativeObject, m_setOrientation_CallBack_void_Real_Real_Real_Real);
						m_setOrientation_CallBack_void_Real_Real_Real_Real_ev_bool = EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Function;
						GC.KeepAlive(m_setOrientation_CallBack_void_Real_Real_Real_Real_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool(this.NativeObject, m_setOrientation_CallBack_void_Real_Real_Real_Real_ev_bool);
						m_resetOrientation_CallBack_void = EarthView_World_Graphic_CNode_resetOrientation_void_Function;
						GC.KeepAlive(m_resetOrientation_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_resetOrientation_void(this.NativeObject, m_resetOrientation_CallBack_void);
						m_setPosition_CallBack_void_CVector3 = EarthView_World_Graphic_CNode_setPosition_void_CVector3_Function;
						GC.KeepAlive(m_setPosition_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3(this.NativeObject, m_setPosition_CallBack_void_CVector3);
						m_setPosition_CallBack_void_CVector3_ev_bool = EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool_Function;
						GC.KeepAlive(m_setPosition_CallBack_void_CVector3_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool(this.NativeObject, m_setPosition_CallBack_void_CVector3_ev_bool);
						m_setPosition_CallBack_void_Real_Real_Real = EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_Function;
						GC.KeepAlive(m_setPosition_CallBack_void_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real(this.NativeObject, m_setPosition_CallBack_void_Real_Real_Real);
						m_setPosition_CallBack_void_Real_Real_Real_ev_bool = EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool_Function;
						GC.KeepAlive(m_setPosition_CallBack_void_Real_Real_Real_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool(this.NativeObject, m_setPosition_CallBack_void_Real_Real_Real_ev_bool);
						m_getPosition_CallBack_CVector3 = EarthView_World_Graphic_CNode_getPosition_CVector3_Function;
						GC.KeepAlive(m_getPosition_CallBack_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getPosition_CVector3(this.NativeObject, m_getPosition_CallBack_CVector3);
						m_setScale_CallBack_void_CVector3 = EarthView_World_Graphic_CNode_setScale_void_CVector3_Function;
						GC.KeepAlive(m_setScale_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3(this.NativeObject, m_setScale_CallBack_void_CVector3);
						m_setScale_CallBack_void_CVector3_ev_bool = EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool_Function;
						GC.KeepAlive(m_setScale_CallBack_void_CVector3_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool(this.NativeObject, m_setScale_CallBack_void_CVector3_ev_bool);
						m_setScale_CallBack_void_Real_Real_Real = EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_Function;
						GC.KeepAlive(m_setScale_CallBack_void_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real(this.NativeObject, m_setScale_CallBack_void_Real_Real_Real);
						m_setScale_CallBack_void_Real_Real_Real_ev_bool = EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool_Function;
						GC.KeepAlive(m_setScale_CallBack_void_Real_Real_Real_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool(this.NativeObject, m_setScale_CallBack_void_Real_Real_Real_ev_bool);
						m_getScale_CallBack_CVector3 = EarthView_World_Graphic_CNode_getScale_CVector3_Function;
						GC.KeepAlive(m_getScale_CallBack_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getScale_CVector3(this.NativeObject, m_getScale_CallBack_CVector3);
						m_setInheritOrientation_CallBack_void_ev_bool = EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool_Function;
						GC.KeepAlive(m_setInheritOrientation_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool(this.NativeObject, m_setInheritOrientation_CallBack_void_ev_bool);
						m_getInheritOrientation_CallBack_ev_bool = EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool_Function;
						GC.KeepAlive(m_getInheritOrientation_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool(this.NativeObject, m_getInheritOrientation_CallBack_ev_bool);
						m_setInheritScale_CallBack_void_ev_bool = EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool_Function;
						GC.KeepAlive(m_setInheritScale_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool(this.NativeObject, m_setInheritScale_CallBack_void_ev_bool);
						m_getInheritScale_CallBack_ev_bool = EarthView_World_Graphic_CNode_getInheritScale_ev_bool_Function;
						GC.KeepAlive(m_getInheritScale_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool(this.NativeObject, m_getInheritScale_CallBack_ev_bool);
						m_scale_CallBack_void_CVector3 = EarthView_World_Graphic_CNode_scale_void_CVector3_Function;
						GC.KeepAlive(m_scale_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_scale_void_CVector3(this.NativeObject, m_scale_CallBack_void_CVector3);
						m_scale_CallBack_void_Real_Real_Real = EarthView_World_Graphic_CNode_scale_void_Real_Real_Real_Function;
						GC.KeepAlive(m_scale_CallBack_void_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real(this.NativeObject, m_scale_CallBack_void_Real_Real_Real);
						m_translate_CallBack_void_CVector3_TransformSpace = EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace_Function;
						GC.KeepAlive(m_translate_CallBack_void_CVector3_TransformSpace);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace(this.NativeObject, m_translate_CallBack_void_CVector3_TransformSpace);
						m_translate_CallBack_void_CVector3 = EarthView_World_Graphic_CNode_translate_void_CVector3_Function;
						GC.KeepAlive(m_translate_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CVector3(this.NativeObject, m_translate_CallBack_void_CVector3);
						m_translate_CallBack_void_Real_Real_Real_TransformSpace = EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace_Function;
						GC.KeepAlive(m_translate_CallBack_void_Real_Real_Real_TransformSpace);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace(this.NativeObject, m_translate_CallBack_void_Real_Real_Real_TransformSpace);
						m_translate_CallBack_void_Real_Real_Real = EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_Function;
						GC.KeepAlive(m_translate_CallBack_void_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real(this.NativeObject, m_translate_CallBack_void_Real_Real_Real);
						m_translate_CallBack_void_CMatrix3_CVector3_TransformSpace = EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace_Function;
						GC.KeepAlive(m_translate_CallBack_void_CMatrix3_CVector3_TransformSpace);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace(this.NativeObject, m_translate_CallBack_void_CMatrix3_CVector3_TransformSpace);
						m_translate_CallBack_void_CMatrix3_CVector3 = EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_Function;
						GC.KeepAlive(m_translate_CallBack_void_CMatrix3_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3(this.NativeObject, m_translate_CallBack_void_CMatrix3_CVector3);
						m_translate_CallBack_void_CMatrix3_Real_Real_Real_TransformSpace = EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Function;
						GC.KeepAlive(m_translate_CallBack_void_CMatrix3_Real_Real_Real_TransformSpace);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace(this.NativeObject, m_translate_CallBack_void_CMatrix3_Real_Real_Real_TransformSpace);
						m_translate_CallBack_void_CMatrix3_Real_Real_Real = EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_Function;
						GC.KeepAlive(m_translate_CallBack_void_CMatrix3_Real_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real(this.NativeObject, m_translate_CallBack_void_CMatrix3_Real_Real_Real);
						m_roll_CallBack_void_CRadian_TransformSpace = EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace_Function;
						GC.KeepAlive(m_roll_CallBack_void_CRadian_TransformSpace);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace(this.NativeObject, m_roll_CallBack_void_CRadian_TransformSpace);
						m_roll_CallBack_void_CRadian = EarthView_World_Graphic_CNode_roll_void_CRadian_Function;
						GC.KeepAlive(m_roll_CallBack_void_CRadian);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_roll_void_CRadian(this.NativeObject, m_roll_CallBack_void_CRadian);
						m_pitch_CallBack_void_CRadian_TransformSpace = EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace_Function;
						GC.KeepAlive(m_pitch_CallBack_void_CRadian_TransformSpace);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace(this.NativeObject, m_pitch_CallBack_void_CRadian_TransformSpace);
						m_pitch_CallBack_void_CRadian = EarthView_World_Graphic_CNode_pitch_void_CRadian_Function;
						GC.KeepAlive(m_pitch_CallBack_void_CRadian);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian(this.NativeObject, m_pitch_CallBack_void_CRadian);
						m_yaw_CallBack_void_CRadian_TransformSpace = EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace_Function;
						GC.KeepAlive(m_yaw_CallBack_void_CRadian_TransformSpace);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace(this.NativeObject, m_yaw_CallBack_void_CRadian_TransformSpace);
						m_yaw_CallBack_void_CRadian = EarthView_World_Graphic_CNode_yaw_void_CRadian_Function;
						GC.KeepAlive(m_yaw_CallBack_void_CRadian);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian(this.NativeObject, m_yaw_CallBack_void_CRadian);
						m_rotate_CallBack_void_CVector3_CRadian_TransformSpace = EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace_Function;
						GC.KeepAlive(m_rotate_CallBack_void_CVector3_CRadian_TransformSpace);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace(this.NativeObject, m_rotate_CallBack_void_CVector3_CRadian_TransformSpace);
						m_rotate_CallBack_void_CVector3_CRadian = EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_Function;
						GC.KeepAlive(m_rotate_CallBack_void_CVector3_CRadian);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian(this.NativeObject, m_rotate_CallBack_void_CVector3_CRadian);
						m_rotate_CallBack_void_CQuaternion_TransformSpace = EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace_Function;
						GC.KeepAlive(m_rotate_CallBack_void_CQuaternion_TransformSpace);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace(this.NativeObject, m_rotate_CallBack_void_CQuaternion_TransformSpace);
						m_rotate_CallBack_void_CQuaternion = EarthView_World_Graphic_CNode_rotate_void_CQuaternion_Function;
						GC.KeepAlive(m_rotate_CallBack_void_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion(this.NativeObject, m_rotate_CallBack_void_CQuaternion);
						m_setMatrix_CallBack_void_CMatrix4 = EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4_Function;
						GC.KeepAlive(m_setMatrix_CallBack_void_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4(this.NativeObject, m_setMatrix_CallBack_void_CMatrix4);
						m_getMatrix_CallBack_CMatrix4 = EarthView_World_Graphic_CNode_getMatrix_CMatrix4_Function;
						GC.KeepAlive(m_getMatrix_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4(this.NativeObject, m_getMatrix_CallBack_CMatrix4);
						m_setLocalMatrix_CallBack_void_CMatrix4 = EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4_Function;
						GC.KeepAlive(m_setLocalMatrix_CallBack_void_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4(this.NativeObject, m_setLocalMatrix_CallBack_void_CMatrix4);
						m_getLocalMatrix_CallBack_CMatrix4 = EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4_Function;
						GC.KeepAlive(m_getLocalMatrix_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4(this.NativeObject, m_getLocalMatrix_CallBack_CMatrix4);
						m_getLocalAxes_CallBack_CMatrix3 = EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3_Function;
						GC.KeepAlive(m_getLocalAxes_CallBack_CMatrix3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3(this.NativeObject, m_getLocalAxes_CallBack_CMatrix3);
						m_createChild_CallBack_CNode_CVector3_CQuaternion = EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion_Function;
						GC.KeepAlive(m_createChild_CallBack_CNode_CVector3_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion(this.NativeObject, m_createChild_CallBack_CNode_CVector3_CQuaternion);
						m_createChild_CallBack_CNode_CVector3 = EarthView_World_Graphic_CNode_createChild_CNode_CVector3_Function;
						GC.KeepAlive(m_createChild_CallBack_CNode_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3(this.NativeObject, m_createChild_CallBack_CNode_CVector3);
						m_createChild_CallBack_CNode = EarthView_World_Graphic_CNode_createChild_CNode_Function;
						GC.KeepAlive(m_createChild_CallBack_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode(this.NativeObject, m_createChild_CallBack_CNode);
						m_createChild_CallBack_CNode_EVString_CVector3_CQuaternion = EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion_Function;
						GC.KeepAlive(m_createChild_CallBack_CNode_EVString_CVector3_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion(this.NativeObject, m_createChild_CallBack_CNode_EVString_CVector3_CQuaternion);
						m_createChild_CallBack_CNode_EVString_CVector3 = EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_Function;
						GC.KeepAlive(m_createChild_CallBack_CNode_EVString_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3(this.NativeObject, m_createChild_CallBack_CNode_EVString_CVector3);
						m_createChild_CallBack_CNode_EVString = EarthView_World_Graphic_CNode_createChild_CNode_EVString_Function;
						GC.KeepAlive(m_createChild_CallBack_CNode_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString(this.NativeObject, m_createChild_CallBack_CNode_EVString);
						m_addChild_CallBack_void_CNode = EarthView_World_Graphic_CNode_addChild_void_CNode_Function;
						GC.KeepAlive(m_addChild_CallBack_void_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_addChild_void_CNode(this.NativeObject, m_addChild_CallBack_void_CNode);
						m_numChildren_CallBack_ev_uint16 = EarthView_World_Graphic_CNode_numChildren_ev_uint16_Function;
						GC.KeepAlive(m_numChildren_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16(this.NativeObject, m_numChildren_CallBack_ev_uint16);
						m_getChild_CallBack_CNode_ev_uint16 = EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16_Function;
						GC.KeepAlive(m_getChild_CallBack_CNode_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16(this.NativeObject, m_getChild_CallBack_CNode_ev_uint16);
						m_getChild_CallBack_CNode_EVString = EarthView_World_Graphic_CNode_getChild_CNode_EVString_Function;
						GC.KeepAlive(m_getChild_CallBack_CNode_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString(this.NativeObject, m_getChild_CallBack_CNode_EVString);
						m_existChild_CallBack_ev_bool_EVString = EarthView_World_Graphic_CNode_existChild_ev_bool_EVString_Function;
						GC.KeepAlive(m_existChild_CallBack_ev_bool_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString(this.NativeObject, m_existChild_CallBack_ev_bool_EVString);
						m_getChildIterator_CallBack_ChildNodeIterator = EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator_Function;
						GC.KeepAlive(m_getChildIterator_CallBack_ChildNodeIterator);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator(this.NativeObject, m_getChildIterator_CallBack_ChildNodeIterator);
						m_removeChild_CallBack_CNode_ev_uint16 = EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16_Function;
						GC.KeepAlive(m_removeChild_CallBack_CNode_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16(this.NativeObject, m_removeChild_CallBack_CNode_ev_uint16);
						m_removeChild_CallBack_CNode_CNode = EarthView_World_Graphic_CNode_removeChild_CNode_CNode_Function;
						GC.KeepAlive(m_removeChild_CallBack_CNode_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode(this.NativeObject, m_removeChild_CallBack_CNode_CNode);
						m_removeChild_CallBack_CNode_EVString = EarthView_World_Graphic_CNode_removeChild_CNode_EVString_Function;
						GC.KeepAlive(m_removeChild_CallBack_CNode_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString(this.NativeObject, m_removeChild_CallBack_CNode_EVString);
						m_removeAllChildren_CallBack_void = EarthView_World_Graphic_CNode_removeAllChildren_void_Function;
						GC.KeepAlive(m_removeAllChildren_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeAllChildren_void(this.NativeObject, m_removeAllChildren_CallBack_void);
						m__setDerivedPosition_CallBack_void_CVector3 = EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_Function;
						GC.KeepAlive(m__setDerivedPosition_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3(this.NativeObject, m__setDerivedPosition_CallBack_void_CVector3);
						m__setDerivedPosition_CallBack_void_CVector3_ev_bool = EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool_Function;
						GC.KeepAlive(m__setDerivedPosition_CallBack_void_CVector3_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool(this.NativeObject, m__setDerivedPosition_CallBack_void_CVector3_ev_bool);
						m__setDerivedOrientation_CallBack_void_CQuaternion = EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_Function;
						GC.KeepAlive(m__setDerivedOrientation_CallBack_void_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion(this.NativeObject, m__setDerivedOrientation_CallBack_void_CQuaternion);
						m__setDerivedOrientation_CallBack_void_CQuaternion_ev_bool = EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool_Function;
						GC.KeepAlive(m__setDerivedOrientation_CallBack_void_CQuaternion_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool(this.NativeObject, m__setDerivedOrientation_CallBack_void_CQuaternion_ev_bool);
						m__getDerivedOrientation_CallBack_CQuaternion = EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion_Function;
						GC.KeepAlive(m__getDerivedOrientation_CallBack_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion(this.NativeObject, m__getDerivedOrientation_CallBack_CQuaternion);
						m__getDerivedPosition_CallBack_CVector3 = EarthView_World_Graphic_CNode__getDerivedPosition_CVector3_Function;
						GC.KeepAlive(m__getDerivedPosition_CallBack_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3(this.NativeObject, m__getDerivedPosition_CallBack_CVector3);
						m__getDerivedScale_CallBack_CVector3 = EarthView_World_Graphic_CNode__getDerivedScale_CVector3_Function;
						GC.KeepAlive(m__getDerivedScale_CallBack_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3(this.NativeObject, m__getDerivedScale_CallBack_CVector3);
						m__getFullTransform_CallBack_CMatrix4 = EarthView_World_Graphic_CNode__getFullTransform_CMatrix4_Function;
						GC.KeepAlive(m__getFullTransform_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4(this.NativeObject, m__getFullTransform_CallBack_CMatrix4);
						m__update_CallBack_void_ev_bool_ev_bool = EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool_Function;
						GC.KeepAlive(m__update_CallBack_void_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool(this.NativeObject, m__update_CallBack_void_ev_bool_ev_bool);
						m_addListener_CallBack_void_CNodeListener = EarthView_World_Graphic_CNode_addListener_void_CNodeListener_Function;
						GC.KeepAlive(m_addListener_CallBack_void_CNodeListener);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener(this.NativeObject, m_addListener_CallBack_void_CNodeListener);
						m_removeListener_CallBack_void_CNodeListener = EarthView_World_Graphic_CNode_removeListener_void_CNodeListener_Function;
						GC.KeepAlive(m_removeListener_CallBack_void_CNodeListener);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener(this.NativeObject, m_removeListener_CallBack_void_CNodeListener);
						m_getListener_CallBack_CNodeListener_ev_uint32 = EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32_Function;
						GC.KeepAlive(m_getListener_CallBack_CNodeListener_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32(this.NativeObject, m_getListener_CallBack_CNodeListener_ev_uint32);
						m_getNumListener_CallBack_ev_uint32_ev_uint32 = EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32_Function;
						GC.KeepAlive(m_getNumListener_CallBack_ev_uint32_ev_uint32);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32(this.NativeObject, m_getNumListener_CallBack_ev_uint32_ev_uint32);
						m_setInitialState_CallBack_void = EarthView_World_Graphic_CNode_setInitialState_void_Function;
						GC.KeepAlive(m_setInitialState_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setInitialState_void(this.NativeObject, m_setInitialState_CallBack_void);
						m_resetToInitialState_CallBack_void = EarthView_World_Graphic_CNode_resetToInitialState_void_Function;
						GC.KeepAlive(m_resetToInitialState_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_resetToInitialState_void(this.NativeObject, m_resetToInitialState_CallBack_void);
						m_getInitialPosition_CallBack_CVector3 = EarthView_World_Graphic_CNode_getInitialPosition_CVector3_Function;
						GC.KeepAlive(m_getInitialPosition_CallBack_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3(this.NativeObject, m_getInitialPosition_CallBack_CVector3);
						m_convertWorldToLocalPosition_CallBack_CVector3_CVector3 = EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3_Function;
						GC.KeepAlive(m_convertWorldToLocalPosition_CallBack_CVector3_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3(this.NativeObject, m_convertWorldToLocalPosition_CallBack_CVector3_CVector3);
						m_convertLocalToWorldPosition_CallBack_CVector3_CVector3 = EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3_Function;
						GC.KeepAlive(m_convertLocalToWorldPosition_CallBack_CVector3_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3(this.NativeObject, m_convertLocalToWorldPosition_CallBack_CVector3_CVector3);
						m_convertWorldToLocalOrientation_CallBack_CQuaternion_CQuaternion = EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Function;
						GC.KeepAlive(m_convertWorldToLocalOrientation_CallBack_CQuaternion_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion(this.NativeObject, m_convertWorldToLocalOrientation_CallBack_CQuaternion_CQuaternion);
						m_convertLocalToWorldOrientation_CallBack_CQuaternion_CQuaternion = EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Function;
						GC.KeepAlive(m_convertLocalToWorldOrientation_CallBack_CQuaternion_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion(this.NativeObject, m_convertLocalToWorldOrientation_CallBack_CQuaternion_CQuaternion);
						m_getInitialOrientation_CallBack_CQuaternion = EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion_Function;
						GC.KeepAlive(m_getInitialOrientation_CallBack_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion(this.NativeObject, m_getInitialOrientation_CallBack_CQuaternion);
						m_getInitialScale_CallBack_CVector3 = EarthView_World_Graphic_CNode_getInitialScale_CVector3_Function;
						GC.KeepAlive(m_getInitialScale_CallBack_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3(this.NativeObject, m_getInitialScale_CallBack_CVector3);
						m_getSquaredViewDepth_CallBack_Real_CCamera = EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera_Function;
						GC.KeepAlive(m_getSquaredViewDepth_CallBack_Real_CCamera);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera(this.NativeObject, m_getSquaredViewDepth_CallBack_Real_CCamera);
						m_needUpdate_CallBack_void_ev_bool = EarthView_World_Graphic_CNode_needUpdate_void_ev_bool_Function;
						GC.KeepAlive(m_needUpdate_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool(this.NativeObject, m_needUpdate_CallBack_void_ev_bool);
						m_needUpdate_CallBack_void = EarthView_World_Graphic_CNode_needUpdate_void_Function;
						GC.KeepAlive(m_needUpdate_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_needUpdate_void(this.NativeObject, m_needUpdate_CallBack_void);
						m_requestUpdate_CallBack_void_CNode_ev_bool = EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool_Function;
						GC.KeepAlive(m_requestUpdate_CallBack_void_CNode_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool(this.NativeObject, m_requestUpdate_CallBack_void_CNode_ev_bool);
						m_requestUpdate_CallBack_void_CNode = EarthView_World_Graphic_CNode_requestUpdate_void_CNode_Function;
						GC.KeepAlive(m_requestUpdate_CallBack_void_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode(this.NativeObject, m_requestUpdate_CallBack_void_CNode);
						m_cancelUpdate_CallBack_void_CNode = EarthView_World_Graphic_CNode_cancelUpdate_void_CNode_Function;
						GC.KeepAlive(m_cancelUpdate_CallBack_void_CNode);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode(this.NativeObject, m_cancelUpdate_CallBack_void_CNode);
						m_getDebugRenderable_CallBack_CDebugRenderable_Real = EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real_Function;
						GC.KeepAlive(m_getDebugRenderable_CallBack_CDebugRenderable_Real);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Real(this.NativeObject, m_getDebugRenderable_CallBack_CDebugRenderable_Real);
						m_attachObject_CallBack_void_CMovableObject = EarthView_World_Graphic_CNode_attachObject_void_CMovableObject_Function;
						GC.KeepAlive(m_attachObject_CallBack_void_CMovableObject);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject(this.NativeObject, m_attachObject_CallBack_void_CMovableObject);
						m_numAttachedObjects_CallBack_ev_uint16 = EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16_Function;
						GC.KeepAlive(m_numAttachedObjects_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16(this.NativeObject, m_numAttachedObjects_CallBack_ev_uint16);
						m_getAttachedObject_CallBack_CMovableObject_ev_uint16 = EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16_Function;
						GC.KeepAlive(m_getAttachedObject_CallBack_CMovableObject_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16(this.NativeObject, m_getAttachedObject_CallBack_CMovableObject_ev_uint16);
						m_getAttachedObject_CallBack_CMovableObject_EVString = EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString_Function;
						GC.KeepAlive(m_getAttachedObject_CallBack_CMovableObject_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString(this.NativeObject, m_getAttachedObject_CallBack_CMovableObject_EVString);
						m_detachObject_CallBack_CMovableObject_ev_uint16 = EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16_Function;
						GC.KeepAlive(m_detachObject_CallBack_CMovableObject_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16(this.NativeObject, m_detachObject_CallBack_CMovableObject_ev_uint16);
						m_detachObject_CallBack_void_CMovableObject = EarthView_World_Graphic_CNode_detachObject_void_CMovableObject_Function;
						GC.KeepAlive(m_detachObject_CallBack_void_CMovableObject);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject(this.NativeObject, m_detachObject_CallBack_void_CMovableObject);
						m_detachObject_CallBack_CMovableObject_EVString = EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString_Function;
						GC.KeepAlive(m_detachObject_CallBack_CMovableObject_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString(this.NativeObject, m_detachObject_CallBack_CMovableObject_EVString);
						m_detachAllObjects_CallBack_void = EarthView_World_Graphic_CNode_detachAllObjects_void_Function;
						GC.KeepAlive(m_detachAllObjects_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_detachAllObjects_void(this.NativeObject, m_detachAllObjects_CallBack_void);
						m_removeAndDestroyChild_CallBack_void_EVString = EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString_Function;
						GC.KeepAlive(m_removeAndDestroyChild_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString(this.NativeObject, m_removeAndDestroyChild_CallBack_void_EVString);
						m_removeAndDestroyChild_CallBack_void_ev_uint16 = EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16_Function;
						GC.KeepAlive(m_removeAndDestroyChild_CallBack_void_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16(this.NativeObject, m_removeAndDestroyChild_CallBack_void_ev_uint16);
						m_removeAndDestroyAllChildren_CallBack_void = EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void_Function;
						GC.KeepAlive(m_removeAndDestroyAllChildren_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void(this.NativeObject, m_removeAndDestroyAllChildren_CallBack_void);
					}
				}
				protected override void SetInSceneGraph(bool inGraph)
				{
					base.SetInSceneGraph_NoVirtual(inGraph);
				}
				public override bool IsInSceneGraph()
				{
					return base.IsInSceneGraph_NoVirtual();
				}
				public override void _notifyRootNode()
				{
					base._notifyRootNode_NoVirtual();
				}
				public override void _findVisibleObjects(EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.RenderQueue queue, EarthView.World.Graphic.VisibleObjectsBoundsInfo visibleBounds, bool includeChildren, bool displayNodes, bool onlyShadowCasters)
				{
					base._findVisibleObjects_NoVirtual(cam,queue,visibleBounds,includeChildren,displayNodes,onlyShadowCasters);
				}
				public override void _findVisibleObjects(EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.RenderQueue queue, EarthView.World.Graphic.VisibleObjectsBoundsInfo visibleBounds, bool includeChildren, bool displayNodes)
				{
					base._findVisibleObjects_NoVirtual(cam,queue,visibleBounds,includeChildren,displayNodes);
				}
				public override void _findVisibleObjects(EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.RenderQueue queue, EarthView.World.Graphic.VisibleObjectsBoundsInfo visibleBounds, bool includeChildren)
				{
					base._findVisibleObjects_NoVirtual(cam,queue,visibleBounds,includeChildren);
				}
				public override void _findVisibleObjects(EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.RenderQueue queue, EarthView.World.Graphic.VisibleObjectsBoundsInfo visibleBounds)
				{
					base._findVisibleObjects_NoVirtual(cam,queue,visibleBounds);
				}
				public override EarthView.World.Spatial.Math.AxisAlignedBox _getWorldAABB()
				{
					return base._getWorldAABB_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneNode.ObjectIterator GetAttachedObjectIterator()
				{
					return base.GetAttachedObjectIterator_NoVirtual();
				}
				public override void ShowBoundingBox(bool bShow)
				{
					base.ShowBoundingBox_NoVirtual(bShow);
				}
				public override void ShowBoundingBox(bool bShow, EarthView.World.Graphic.MaterialPtr redPtr)
				{
					base.ShowBoundingBox_NoVirtual(bShow,redPtr);
				}
				public override void HideBoundingBox(bool bHide)
				{
					base.HideBoundingBox_NoVirtual(bHide);
				}
				public override void _addBoundingBoxToQueue(EarthView.World.Graphic.RenderQueue queue)
				{
					base._addBoundingBoxToQueue_NoVirtual(queue);
				}
				public override bool GetShowBoundingBox()
				{
					return base.GetShowBoundingBox_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneNode CreateChildSceneNode(EarthView.World.Spatial.Math.Vector3 translate, EarthView.World.Spatial.Math.Quaternion rotate)
				{
					return base.CreateChildSceneNode_NoVirtual(translate,rotate);
				}
				public override EarthView.World.Graphic.SceneNode CreateChildSceneNode(EarthView.World.Spatial.Math.Vector3 translate)
				{
					return base.CreateChildSceneNode_NoVirtual(translate);
				}
				public override EarthView.World.Graphic.SceneNode CreateChildSceneNode()
				{
					return base.CreateChildSceneNode_NoVirtual();
				}
				public override EarthView.World.Graphic.SceneNode CreateChildSceneNode(string name, EarthView.World.Spatial.Math.Vector3 translate, EarthView.World.Spatial.Math.Quaternion rotate)
				{
					return base.CreateChildSceneNode_NoVirtual(name,translate,rotate);
				}
				public override EarthView.World.Graphic.SceneNode CreateChildSceneNode(string name, EarthView.World.Spatial.Math.Vector3 translate)
				{
					return base.CreateChildSceneNode_NoVirtual(name,translate);
				}
				public override EarthView.World.Graphic.SceneNode CreateChildSceneNode(string name)
				{
					return base.CreateChildSceneNode_NoVirtual(name);
				}
				public override void FindLights(ref EarthView.World.Graphic.LightList destList, double radius, uint lightMask)
				{
					base.FindLights_NoVirtual(ref destList,radius,lightMask);
				}
				public override void FindLights(ref EarthView.World.Graphic.LightList destList, double radius)
				{
					base.FindLights_NoVirtual(ref destList,radius);
				}
				public override void SetFixedYawAxis(bool useFixed, EarthView.World.Spatial.Math.Vector3 fixedAxis)
				{
					base.SetFixedYawAxis_NoVirtual(useFixed,fixedAxis);
				}
				public override void SetFixedYawAxis(bool useFixed)
				{
					base.SetFixedYawAxis_NoVirtual(useFixed);
				}
				public override void SetDirection(double x, double y, double z, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo, EarthView.World.Spatial.Math.Vector3 localDirectionVector)
				{
					base.SetDirection_NoVirtual(x,y,z,relativeTo,localDirectionVector);
				}
				public override void SetDirection(double x, double y, double z, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo)
				{
					base.SetDirection_NoVirtual(x,y,z,relativeTo);
				}
				public override void SetDirection(double x, double y, double z)
				{
					base.SetDirection_NoVirtual(x,y,z);
				}
				public override void SetDirection(EarthView.World.Spatial.Math.Vector3 vec, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo, EarthView.World.Spatial.Math.Vector3 localDirectionVector)
				{
					base.SetDirection_NoVirtual(vec,relativeTo,localDirectionVector);
				}
				public override void SetDirection(EarthView.World.Spatial.Math.Vector3 vec, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo)
				{
					base.SetDirection_NoVirtual(vec,relativeTo);
				}
				public override void SetDirection(EarthView.World.Spatial.Math.Vector3 vec)
				{
					base.SetDirection_NoVirtual(vec);
				}
				public override void LookAt(EarthView.World.Spatial.Math.Vector3 targetPoint, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo, EarthView.World.Spatial.Math.Vector3 localDirectionVector)
				{
					base.LookAt_NoVirtual(targetPoint,relativeTo,localDirectionVector);
				}
				public override void LookAt(EarthView.World.Spatial.Math.Vector3 targetPoint, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo)
				{
					base.LookAt_NoVirtual(targetPoint,relativeTo);
				}
				public override void SetAutoTracking(bool enabled)
				{
					base.SetAutoTracking_NoVirtual(enabled);
				}
				public override void SetAutoTracking(bool enabled, EarthView.World.Graphic.SceneNode ref_target)
				{
					base.SetAutoTracking_NoVirtual(enabled,ref_target);
				}
				public override void SetAutoTracking(bool enabled, EarthView.World.Graphic.SceneNode ref_target, EarthView.World.Spatial.Math.Vector3 localDirectionVecto)
				{
					base.SetAutoTracking_NoVirtual(enabled,ref_target,localDirectionVecto);
				}
				public override void SetAutoTracking(bool enabled, EarthView.World.Graphic.SceneNode ref_target, EarthView.World.Spatial.Math.Vector3 localDirectionVector, EarthView.World.Spatial.Math.Vector3 offset)
				{
					base.SetAutoTracking_NoVirtual(enabled,ref_target,localDirectionVector,offset);
				}
				public override EarthView.World.Graphic.SceneNode GetAutoTrackTarget()
				{
					return base.GetAutoTrackTarget_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Vector3 GetAutoTrackOffset()
				{
					return base.GetAutoTrackOffset_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Vector3 GetAutoTrackLocalDirection()
				{
					return base.GetAutoTrackLocalDirection_NoVirtual();
				}
				public override void SetVisible(bool visible, bool cascade)
				{
					base.SetVisible_NoVirtual(visible,cascade);
				}
				public override void SetVisible(bool visible)
				{
					base.SetVisible_NoVirtual(visible);
				}
				public override bool GetVisible()
				{
					return base.GetVisible_NoVirtual();
				}
				public override bool HasAnyVisibleObject()
				{
					return base.HasAnyVisibleObject_NoVirtual();
				}
				public override bool HasAnyVisibleObject2()
				{
					return base.HasAnyVisibleObject2_NoVirtual();
				}
				public override bool HasAnyVisibleShadowCaster()
				{
					return base.HasAnyVisibleShadowCaster_NoVirtual();
				}
				public override bool HasAnyVisibleShadowCaster2()
				{
					return base.HasAnyVisibleShadowCaster2_NoVirtual();
				}
				public override void FlipVisibility(bool cascade)
				{
					base.FlipVisibility_NoVirtual(cascade);
				}
				public override void FlipVisibility()
				{
					base.FlipVisibility_NoVirtual();
				}
				public override void SetDebugDisplayEnabled(bool enabled, bool cascade)
				{
					base.SetDebugDisplayEnabled_NoVirtual(enabled,cascade);
				}
				public override void SetDebugDisplayEnabled(bool enabled)
				{
					base.SetDebugDisplayEnabled_NoVirtual(enabled);
				}
				public override EarthView.World.Graphic.Node.DebugRenderable GetDebugRenderable()
				{
					return base.GetDebugRenderable_NoVirtual();
				}
				protected override void _updateFromParent()
				{
					base._updateFromParent_NoVirtual();
				}
				protected override void SetParent(EarthView.World.Graphic.Node ref_parent)
				{
					base.SetParent_NoVirtual(ref_parent);
				}
				protected override void UpdateFromParentImpl()
				{
					base.UpdateFromParentImpl_NoVirtual();
				}
				protected override EarthView.World.Graphic.Node CreateChildImpl()
				{
					return base.CreateChildImpl_NoVirtual();
				}
				protected override EarthView.World.Graphic.Node CreateChildImpl(string name)
				{
					return base.CreateChildImpl_NoVirtual(name);
				}
				protected override void NotifyMoved()
				{
					base.NotifyMoved_NoVirtual();
				}
				public override EarthView.World.Graphic.Node GetParent()
				{
					return base.GetParent_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Quaternion GetOrientation()
				{
					return base.GetOrientation_NoVirtual();
				}
				public override void SetOrientation(EarthView.World.Spatial.Math.Quaternion q)
				{
					base.SetOrientation_NoVirtual(q);
				}
				public override void SetOrientation(EarthView.World.Spatial.Math.Quaternion q, bool notify)
				{
					base.SetOrientation_NoVirtual(q,notify);
				}
				public override void SetOrientation(double w, double x, double y, double z)
				{
					base.SetOrientation_NoVirtual(w,x,y,z);
				}
				public override void SetOrientation(double w, double x, double y, double z, bool notify)
				{
					base.SetOrientation_NoVirtual(w,x,y,z,notify);
				}
				public override void ResetOrientation()
				{
					base.ResetOrientation_NoVirtual();
				}
				public override void SetPosition(EarthView.World.Spatial.Math.Vector3 pos)
				{
					base.SetPosition_NoVirtual(pos);
				}
				public override void SetPosition(EarthView.World.Spatial.Math.Vector3 pos, bool notify)
				{
					base.SetPosition_NoVirtual(pos,notify);
				}
				public override void SetPosition(double x, double y, double z)
				{
					base.SetPosition_NoVirtual(x,y,z);
				}
				public override void SetPosition(double x, double y, double z, bool notify)
				{
					base.SetPosition_NoVirtual(x,y,z,notify);
				}
				public override EarthView.World.Spatial.Math.Vector3 GetPosition()
				{
					return base.GetPosition_NoVirtual();
				}
				public override void SetScale(EarthView.World.Spatial.Math.Vector3 scale)
				{
					base.SetScale_NoVirtual(scale);
				}
				public override void SetScale(EarthView.World.Spatial.Math.Vector3 scale, bool notify)
				{
					base.SetScale_NoVirtual(scale,notify);
				}
				public override void SetScale(double x, double y, double z)
				{
					base.SetScale_NoVirtual(x,y,z);
				}
				public override void SetScale(double x, double y, double z, bool notify)
				{
					base.SetScale_NoVirtual(x,y,z,notify);
				}
				public override EarthView.World.Spatial.Math.Vector3 GetScale()
				{
					return base.GetScale_NoVirtual();
				}
				public override void SetInheritOrientation(bool inherit)
				{
					base.SetInheritOrientation_NoVirtual(inherit);
				}
				public override bool GetInheritOrientation()
				{
					return base.GetInheritOrientation_NoVirtual();
				}
				public override void SetInheritScale(bool inherit)
				{
					base.SetInheritScale_NoVirtual(inherit);
				}
				public override bool GetInheritScale()
				{
					return base.GetInheritScale_NoVirtual();
				}
				public override void Scale(EarthView.World.Spatial.Math.Vector3 scale)
				{
					base.Scale_NoVirtual(scale);
				}
				public override void Scale(double x, double y, double z)
				{
					base.Scale_NoVirtual(x,y,z);
				}
				public override void Translate(EarthView.World.Spatial.Math.Vector3 d, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo)
				{
					base.Translate_NoVirtual(d,relativeTo);
				}
				public override void Translate(EarthView.World.Spatial.Math.Vector3 d)
				{
					base.Translate_NoVirtual(d);
				}
				public override void Translate(double x, double y, double z, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo)
				{
					base.Translate_NoVirtual(x,y,z,relativeTo);
				}
				public override void Translate(double x, double y, double z)
				{
					base.Translate_NoVirtual(x,y,z);
				}
				public override void Translate(EarthView.World.Spatial.Math.Matrix3 axes, EarthView.World.Spatial.Math.Vector3 move, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo)
				{
					base.Translate_NoVirtual(axes,move,relativeTo);
				}
				public override void Translate(EarthView.World.Spatial.Math.Matrix3 axes, EarthView.World.Spatial.Math.Vector3 move)
				{
					base.Translate_NoVirtual(axes,move);
				}
				public override void Translate(EarthView.World.Spatial.Math.Matrix3 axes, double x, double y, double z, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo)
				{
					base.Translate_NoVirtual(axes,x,y,z,relativeTo);
				}
				public override void Translate(EarthView.World.Spatial.Math.Matrix3 axes, double x, double y, double z)
				{
					base.Translate_NoVirtual(axes,x,y,z);
				}
				public override void Roll(EarthView.World.Spatial.Math.Radian angle, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo)
				{
					base.Roll_NoVirtual(angle,relativeTo);
				}
				public override void Roll(EarthView.World.Spatial.Math.Radian angle)
				{
					base.Roll_NoVirtual(angle);
				}
				public override void Pitch(EarthView.World.Spatial.Math.Radian angle, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo)
				{
					base.Pitch_NoVirtual(angle,relativeTo);
				}
				public override void Pitch(EarthView.World.Spatial.Math.Radian angle)
				{
					base.Pitch_NoVirtual(angle);
				}
				public override void Yaw(EarthView.World.Spatial.Math.Radian angle, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo)
				{
					base.Yaw_NoVirtual(angle,relativeTo);
				}
				public override void Yaw(EarthView.World.Spatial.Math.Radian angle)
				{
					base.Yaw_NoVirtual(angle);
				}
				public override void Rotate(EarthView.World.Spatial.Math.Vector3 axis, EarthView.World.Spatial.Math.Radian angle, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo)
				{
					base.Rotate_NoVirtual(axis,angle,relativeTo);
				}
				public override void Rotate(EarthView.World.Spatial.Math.Vector3 axis, EarthView.World.Spatial.Math.Radian angle)
				{
					base.Rotate_NoVirtual(axis,angle);
				}
				public override void Rotate(EarthView.World.Spatial.Math.Quaternion q, EarthView.World.Graphic.Node.TRANSFORMSPACE relativeTo)
				{
					base.Rotate_NoVirtual(q,relativeTo);
				}
				public override void Rotate(EarthView.World.Spatial.Math.Quaternion q)
				{
					base.Rotate_NoVirtual(q);
				}
				public override void SetMatrix(EarthView.World.Spatial.Math.Matrix4 mat)
				{
					base.SetMatrix_NoVirtual(mat);
				}
				public override EarthView.World.Spatial.Math.Matrix4 GetMatrix()
				{
					return base.GetMatrix_NoVirtual();
				}
				public override void SetLocalMatrix(EarthView.World.Spatial.Math.Matrix4 mat)
				{
					base.SetLocalMatrix_NoVirtual(mat);
				}
				public override EarthView.World.Spatial.Math.Matrix4 GetLocalMatrix()
				{
					return base.GetLocalMatrix_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Matrix3 GetLocalAxes()
				{
					return base.GetLocalAxes_NoVirtual();
				}
				public override EarthView.World.Graphic.Node CreateChild(EarthView.World.Spatial.Math.Vector3 translate, EarthView.World.Spatial.Math.Quaternion rotate)
				{
					return base.CreateChild_NoVirtual(translate,rotate);
				}
				public override EarthView.World.Graphic.Node CreateChild(EarthView.World.Spatial.Math.Vector3 translate)
				{
					return base.CreateChild_NoVirtual(translate);
				}
				public override EarthView.World.Graphic.Node CreateChild()
				{
					return base.CreateChild_NoVirtual();
				}
				public override EarthView.World.Graphic.Node CreateChild(string name, EarthView.World.Spatial.Math.Vector3 translate, EarthView.World.Spatial.Math.Quaternion rotate)
				{
					return base.CreateChild_NoVirtual(name,translate,rotate);
				}
				public override EarthView.World.Graphic.Node CreateChild(string name, EarthView.World.Spatial.Math.Vector3 translate)
				{
					return base.CreateChild_NoVirtual(name,translate);
				}
				public override EarthView.World.Graphic.Node CreateChild(string name)
				{
					return base.CreateChild_NoVirtual(name);
				}
				public override void AddChild(EarthView.World.Graphic.Node ref_child)
				{
					base.AddChild_NoVirtual(ref_child);
				}
				public override ushort NumChildren()
				{
					return base.NumChildren_NoVirtual();
				}
				public override EarthView.World.Graphic.Node GetChild(ushort index)
				{
					return base.GetChild_NoVirtual(index);
				}
				public override EarthView.World.Graphic.Node GetChild(string name)
				{
					return base.GetChild_NoVirtual(name);
				}
				public override bool ExistChild(string name)
				{
					return base.ExistChild_NoVirtual(name);
				}
				public override EarthView.World.Graphic.Node.ChildNodeIterator GetChildIterator()
				{
					return base.GetChildIterator_NoVirtual();
				}
				public override void _setDerivedPosition(EarthView.World.Spatial.Math.Vector3 pos)
				{
					base._setDerivedPosition_NoVirtual(pos);
				}
				public override void _setDerivedPosition(EarthView.World.Spatial.Math.Vector3 pos, bool notify)
				{
					base._setDerivedPosition_NoVirtual(pos,notify);
				}
				public override void _setDerivedOrientation(EarthView.World.Spatial.Math.Quaternion q)
				{
					base._setDerivedOrientation_NoVirtual(q);
				}
				public override void _setDerivedOrientation(EarthView.World.Spatial.Math.Quaternion q, bool notify)
				{
					base._setDerivedOrientation_NoVirtual(q,notify);
				}
				public override EarthView.World.Spatial.Math.Quaternion _getDerivedOrientation()
				{
					return base._getDerivedOrientation_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Vector3 _getDerivedPosition()
				{
					return base._getDerivedPosition_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Vector3 _getDerivedScale()
				{
					return base._getDerivedScale_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Matrix4 _getFullTransform()
				{
					return base._getFullTransform_NoVirtual();
				}
				public override void _update(bool updateChildren, bool parentHasChanged)
				{
					base._update_NoVirtual(updateChildren,parentHasChanged);
				}
				public override void AddListener(EarthView.World.Graphic.Node.NodeListener listener)
				{
					base.AddListener_NoVirtual(listener);
				}
				public override void RemoveListener(EarthView.World.Graphic.Node.NodeListener listener)
				{
					base.RemoveListener_NoVirtual(listener);
				}
				public override EarthView.World.Graphic.Node.NodeListener GetListener(uint index)
				{
					return base.GetListener_NoVirtual(index);
				}
				public override uint GetNumListener(uint index)
				{
					return base.GetNumListener_NoVirtual(index);
				}
				public override void SetInitialState()
				{
					base.SetInitialState_NoVirtual();
				}
				public override void ResetToInitialState()
				{
					base.ResetToInitialState_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Vector3 GetInitialPosition()
				{
					return base.GetInitialPosition_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Vector3 ConvertWorldToLocalPosition(EarthView.World.Spatial.Math.Vector3 worldPos)
				{
					return base.ConvertWorldToLocalPosition_NoVirtual(worldPos);
				}
				public override EarthView.World.Spatial.Math.Vector3 ConvertLocalToWorldPosition(EarthView.World.Spatial.Math.Vector3 localPos)
				{
					return base.ConvertLocalToWorldPosition_NoVirtual(localPos);
				}
				public override EarthView.World.Spatial.Math.Quaternion ConvertWorldToLocalOrientation(EarthView.World.Spatial.Math.Quaternion worldOrientation)
				{
					return base.ConvertWorldToLocalOrientation_NoVirtual(worldOrientation);
				}
				public override EarthView.World.Spatial.Math.Quaternion ConvertLocalToWorldOrientation(EarthView.World.Spatial.Math.Quaternion localOrientation)
				{
					return base.ConvertLocalToWorldOrientation_NoVirtual(localOrientation);
				}
				public override EarthView.World.Spatial.Math.Quaternion GetInitialOrientation()
				{
					return base.GetInitialOrientation_NoVirtual();
				}
				public override EarthView.World.Spatial.Math.Vector3 GetInitialScale()
				{
					return base.GetInitialScale_NoVirtual();
				}
				public override double GetSquaredViewDepth(EarthView.World.Graphic.Camera cam)
				{
					return base.GetSquaredViewDepth_NoVirtual(cam);
				}
				public override void NeedUpdate(bool forceParentUpdate)
				{
					base.NeedUpdate_NoVirtual(forceParentUpdate);
				}
				public override void NeedUpdate()
				{
					base.NeedUpdate_NoVirtual();
				}
				public override void RequestUpdate(EarthView.World.Graphic.Node ref_child, bool forceParentUpdate)
				{
					base.RequestUpdate_NoVirtual(ref_child,forceParentUpdate);
				}
				public override void RequestUpdate(EarthView.World.Graphic.Node ref_child)
				{
					base.RequestUpdate_NoVirtual(ref_child);
				}
				public override void CancelUpdate(EarthView.World.Graphic.Node child)
				{
					base.CancelUpdate_NoVirtual(child);
				}
				public override EarthView.World.Graphic.Node.DebugRenderable GetDebugRenderable(double scaling)
				{
					return base.GetDebugRenderable_NoVirtual(scaling);
				}
				public override void AttachObject(EarthView.World.Graphic.MovableObject obj)
				{
					base.AttachObject_NoVirtual(obj);
				}
				public override ushort NumAttachedObjects()
				{
					return base.NumAttachedObjects_NoVirtual();
				}
				public override EarthView.World.Graphic.MovableObject GetAttachedObject(ushort index)
				{
					return base.GetAttachedObject_NoVirtual(index);
				}
				public override EarthView.World.Graphic.MovableObject GetAttachedObject(string name)
				{
					return base.GetAttachedObject_NoVirtual(name);
				}
				public override EarthView.World.Graphic.MovableObject DetachObject(ushort index)
				{
					return base.DetachObject_NoVirtual(index);
				}
				public override void DetachObject(EarthView.World.Graphic.MovableObject obj)
				{
					base.DetachObject_NoVirtual(obj);
				}
				public override EarthView.World.Graphic.MovableObject DetachObject(string name)
				{
					return base.DetachObject_NoVirtual(name);
				}
				public override void DetachAllObjects()
				{
					base.DetachAllObjects_NoVirtual();
				}
				public override void RemoveAndDestroyChild(string name)
				{
					base.RemoveAndDestroyChild_NoVirtual(name);
				}
				public override void RemoveAndDestroyChild(ushort index)
				{
					base.RemoveAndDestroyChild_NoVirtual(index);
				}
				public override void RemoveAndDestroyAllChildren()
				{
					base.RemoveAndDestroyAllChildren_NoVirtual();
				}
				public static OctreeNode FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					OctreeNode obj = baseObj as  OctreeNode;
					if (object.Equals(obj, null))
					{
						obj = new OctreeNode(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "COctreeNode");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class OctreeNodeClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					OctreeNode emptyInstance = new OctreeNode(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
