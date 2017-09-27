package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositorLogicClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositorLogic emptyInstance = new CompositorLogic(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
