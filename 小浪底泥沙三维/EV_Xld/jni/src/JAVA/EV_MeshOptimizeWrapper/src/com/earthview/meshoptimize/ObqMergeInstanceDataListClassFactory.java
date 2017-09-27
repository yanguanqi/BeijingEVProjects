package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqMergeInstanceDataListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ObqMergeInstanceDataList emptyInstance = new ObqMergeInstanceDataList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
