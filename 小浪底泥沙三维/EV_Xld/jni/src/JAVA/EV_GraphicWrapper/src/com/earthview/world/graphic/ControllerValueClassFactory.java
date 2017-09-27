package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControllerValueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ControllerValue emptyInstance = new ControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
