package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SplitPartTaskClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SplitPartTask emptyInstance = new SplitPartTask(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
