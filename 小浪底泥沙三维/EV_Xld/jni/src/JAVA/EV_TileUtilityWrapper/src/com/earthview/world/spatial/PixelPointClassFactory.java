package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PixelPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PixelPoint emptyInstance = new PixelPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
