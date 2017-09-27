package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OverlayElementFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OverlayElementFactory emptyInstance = new OverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
