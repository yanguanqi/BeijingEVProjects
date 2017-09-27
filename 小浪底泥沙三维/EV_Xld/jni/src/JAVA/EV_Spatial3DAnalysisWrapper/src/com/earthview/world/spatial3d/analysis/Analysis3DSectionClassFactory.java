package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DSectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DSection emptyInstance = new Analysis3DSection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
