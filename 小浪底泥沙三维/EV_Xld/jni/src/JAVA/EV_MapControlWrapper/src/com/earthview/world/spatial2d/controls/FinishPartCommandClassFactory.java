package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FinishPartCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FinishPartCommand emptyInstance = new FinishPartCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
