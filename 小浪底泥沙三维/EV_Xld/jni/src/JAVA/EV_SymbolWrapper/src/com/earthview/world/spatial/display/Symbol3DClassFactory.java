package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Symbol3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Symbol3D emptyInstance = new Symbol3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
