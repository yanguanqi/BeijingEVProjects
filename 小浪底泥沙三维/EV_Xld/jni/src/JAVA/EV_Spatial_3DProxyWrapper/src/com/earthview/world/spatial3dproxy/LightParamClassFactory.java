package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LightParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LightParam emptyInstance = new LightParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
