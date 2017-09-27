package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MutiSwitchNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MutiSwitchNode emptyInstance = new MutiSwitchNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
