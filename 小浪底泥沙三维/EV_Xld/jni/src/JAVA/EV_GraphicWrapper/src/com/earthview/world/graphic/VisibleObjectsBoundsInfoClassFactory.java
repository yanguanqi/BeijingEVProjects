package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VisibleObjectsBoundsInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VisibleObjectsBoundsInfo emptyInstance = new VisibleObjectsBoundsInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
