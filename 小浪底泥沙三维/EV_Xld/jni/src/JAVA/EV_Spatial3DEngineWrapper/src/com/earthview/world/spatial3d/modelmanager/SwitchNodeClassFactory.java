package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SwitchNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SwitchNode emptyInstance = new SwitchNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
