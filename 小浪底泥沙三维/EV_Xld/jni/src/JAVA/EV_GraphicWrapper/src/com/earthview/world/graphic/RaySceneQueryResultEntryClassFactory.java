package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RaySceneQueryResultEntryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RaySceneQueryResultEntry emptyInstance = new RaySceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
