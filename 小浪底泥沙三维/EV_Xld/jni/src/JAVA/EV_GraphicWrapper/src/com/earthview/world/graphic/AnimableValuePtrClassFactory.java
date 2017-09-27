package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimableValuePtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnimableValuePtr emptyInstance = new AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
