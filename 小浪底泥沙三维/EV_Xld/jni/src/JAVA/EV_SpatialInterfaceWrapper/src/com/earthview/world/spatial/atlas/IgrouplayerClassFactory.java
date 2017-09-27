package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IgrouplayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Igrouplayer emptyInstance = new Igrouplayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
