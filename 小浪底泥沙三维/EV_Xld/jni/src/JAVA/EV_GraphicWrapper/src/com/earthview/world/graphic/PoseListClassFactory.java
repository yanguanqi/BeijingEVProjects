package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PoseListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PoseList emptyInstance = new PoseList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
