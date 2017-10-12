package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DSkyLineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DSkyLine emptyInstance = new Analysis3DSkyLine(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
