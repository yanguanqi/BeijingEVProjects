package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SequenceNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SequenceNode emptyInstance = new SequenceNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
