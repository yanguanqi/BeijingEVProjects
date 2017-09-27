package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IndexBufferLockGuardClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IndexBufferLockGuard emptyInstance = new IndexBufferLockGuard(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
