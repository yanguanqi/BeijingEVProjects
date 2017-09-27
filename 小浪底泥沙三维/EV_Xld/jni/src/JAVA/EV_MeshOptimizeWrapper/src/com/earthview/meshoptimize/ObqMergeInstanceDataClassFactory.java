package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqMergeInstanceDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ObqMergeInstanceData emptyInstance = new ObqMergeInstanceData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
