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
			public class LatticeTextBox : EarthView.World.Graphic.Ilatticetexteffect
			{
				public LatticeTextBox(uint argb) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueargb = new BasePtr(argb);
					list.Add("argb", valueargb.PtrVal);
					Create("CLatticeTextBox", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public LatticeTextBox(EarthView.World.Graphic.ColourValue color) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuecolor = new BasePtr(color);
					list.Add("color", valuecolor.PtrVal);
					Create("CLatticeTextBox", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public LatticeTextBox() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLatticeTextBox",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadLatticeTextBox = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadLatticeTextBox = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLatticeTextBox = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadLatticeTextBox = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadLatticeTextBox = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadLatticeTextBox = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLatticeTextBox = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadLatticeTextBox = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadLatticeTextBox = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadLatticeTextBox = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadLatticeTextBox = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadLatticeTextBox = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CLatticeTextBox", new LatticeTextBoxClassFactory());

				public LatticeTextBox(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static LatticeTextBox FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					LatticeTextBox obj = baseObj as  LatticeTextBox;
					if (object.Equals(obj, null))
					{
						obj = new LatticeTextBox(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLatticeTextBox");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LatticeTextBoxClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					LatticeTextBox emptyInstance = new LatticeTextBox(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class TextOrigintrackLine : EarthView.World.Graphic.Ilatticetexteffect
			{
				public TextOrigintrackLine(uint argb) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueargb = new BasePtr(argb);
					list.Add("argb", valueargb.PtrVal);
					Create("CTextOrigintrackLine", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public TextOrigintrackLine(EarthView.World.Graphic.ColourValue color) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuecolor = new BasePtr(color);
					list.Add("color", valuecolor.PtrVal);
					Create("CTextOrigintrackLine", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public TextOrigintrackLine() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CTextOrigintrackLine",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadTextOrigintrackLine = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTextOrigintrackLine = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTextOrigintrackLine = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadTextOrigintrackLine = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadTextOrigintrackLine = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTextOrigintrackLine = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTextOrigintrackLine = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTextOrigintrackLine = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadTextOrigintrackLine = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadTextOrigintrackLine = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadTextOrigintrackLine = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTextOrigintrackLine = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTextOrigintrackLine", new TextOrigintrackLineClassFactory());

				public TextOrigintrackLine(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static TextOrigintrackLine FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TextOrigintrackLine obj = baseObj as  TextOrigintrackLine;
					if (object.Equals(obj, null))
					{
						obj = new TextOrigintrackLine(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTextOrigintrackLine");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TextOrigintrackLineClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TextOrigintrackLine emptyInstance = new TextOrigintrackLine(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
