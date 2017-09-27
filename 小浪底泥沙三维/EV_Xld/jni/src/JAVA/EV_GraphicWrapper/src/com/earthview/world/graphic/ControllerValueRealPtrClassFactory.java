package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControllerValueRealPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ControllerValueRealPtr emptyInstance = new ControllerValueRealPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
