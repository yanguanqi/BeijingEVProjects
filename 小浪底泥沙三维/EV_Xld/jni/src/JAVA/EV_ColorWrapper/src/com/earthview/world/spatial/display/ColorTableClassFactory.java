package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColorTableClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColorTable emptyInstance = new ColorTable(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
