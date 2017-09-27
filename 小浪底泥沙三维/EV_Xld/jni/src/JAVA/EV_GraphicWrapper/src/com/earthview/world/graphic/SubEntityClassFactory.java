package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubEntityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubEntity emptyInstance = new SubEntity(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
