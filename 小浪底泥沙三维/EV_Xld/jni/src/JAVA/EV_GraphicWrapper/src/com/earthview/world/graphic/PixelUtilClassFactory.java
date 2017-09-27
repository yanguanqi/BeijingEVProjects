package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PixelUtilClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PixelUtil emptyInstance = new PixelUtil(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
