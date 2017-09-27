package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControllerManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ControllerManager emptyInstance = new ControllerManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
