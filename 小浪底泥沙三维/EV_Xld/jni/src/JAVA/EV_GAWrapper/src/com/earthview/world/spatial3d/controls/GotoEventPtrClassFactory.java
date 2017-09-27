package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GotoEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GotoEventPtr emptyInstance = new GotoEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
