package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Math3DSectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Math3DSection emptyInstance = new Math3DSection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
