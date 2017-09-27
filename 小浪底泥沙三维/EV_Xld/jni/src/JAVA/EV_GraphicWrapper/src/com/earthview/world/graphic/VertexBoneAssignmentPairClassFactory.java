package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VertexBoneAssignmentPairClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VertexBoneAssignmentPair emptyInstance = new VertexBoneAssignmentPair(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
