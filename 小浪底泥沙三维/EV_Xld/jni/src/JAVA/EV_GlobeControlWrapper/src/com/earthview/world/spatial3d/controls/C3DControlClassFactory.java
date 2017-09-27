package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class C3DControlClassFactory implements IClassFactory {
	public BaseObject create()
	{
		C3DControl emptyInstance = new C3DControl(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
