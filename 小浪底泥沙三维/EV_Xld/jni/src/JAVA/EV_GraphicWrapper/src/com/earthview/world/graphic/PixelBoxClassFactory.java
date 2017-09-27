package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PixelBoxClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PixelBox emptyInstance = new PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
