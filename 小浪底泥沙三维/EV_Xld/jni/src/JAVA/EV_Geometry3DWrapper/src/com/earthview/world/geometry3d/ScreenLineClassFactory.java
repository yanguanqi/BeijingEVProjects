package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScreenLineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScreenLine emptyInstance = new ScreenLine(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
