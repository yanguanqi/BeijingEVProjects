package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayoutOperationEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayoutOperationEvent emptyInstance = new LayoutOperationEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
