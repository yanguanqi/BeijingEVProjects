package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ViewPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ViewPoint emptyInstance = new ViewPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
