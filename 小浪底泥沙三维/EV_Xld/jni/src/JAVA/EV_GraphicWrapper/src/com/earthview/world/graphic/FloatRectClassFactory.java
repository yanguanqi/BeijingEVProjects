package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FloatRectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FloatRect emptyInstance = new FloatRect(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
