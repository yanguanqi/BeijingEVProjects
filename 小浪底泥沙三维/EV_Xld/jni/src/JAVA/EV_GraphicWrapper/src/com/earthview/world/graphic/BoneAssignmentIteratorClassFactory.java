package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BoneAssignmentIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BoneAssignmentIterator emptyInstance = new BoneAssignmentIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
