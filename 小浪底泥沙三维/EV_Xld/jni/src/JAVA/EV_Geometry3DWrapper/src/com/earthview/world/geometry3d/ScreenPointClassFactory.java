package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScreenPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScreenPoint emptyInstance = new ScreenPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
