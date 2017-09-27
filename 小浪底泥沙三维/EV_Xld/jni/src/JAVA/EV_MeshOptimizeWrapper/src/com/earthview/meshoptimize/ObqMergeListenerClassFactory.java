package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqMergeListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ObqMergeListener emptyInstance = new ObqMergeListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
