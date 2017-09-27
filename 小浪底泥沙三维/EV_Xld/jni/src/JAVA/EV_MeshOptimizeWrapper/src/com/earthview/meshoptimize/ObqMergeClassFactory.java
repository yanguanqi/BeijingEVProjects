package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqMergeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ObqMerge emptyInstance = new ObqMerge(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
