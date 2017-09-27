package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColorListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColorList emptyInstance = new ColorList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
