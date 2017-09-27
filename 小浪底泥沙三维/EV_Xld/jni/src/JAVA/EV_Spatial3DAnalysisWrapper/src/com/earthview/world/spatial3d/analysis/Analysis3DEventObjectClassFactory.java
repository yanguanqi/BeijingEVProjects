package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DEventObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DEventObject emptyInstance = new Analysis3DEventObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
