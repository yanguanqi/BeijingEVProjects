package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryResultEntryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneQueryResultEntry emptyInstance = new SceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
