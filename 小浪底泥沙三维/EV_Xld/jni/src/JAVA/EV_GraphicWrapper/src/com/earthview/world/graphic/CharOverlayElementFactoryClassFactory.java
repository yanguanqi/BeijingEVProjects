package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CharOverlayElementFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CharOverlayElementFactory emptyInstance = new CharOverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
