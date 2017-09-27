package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryResultMovableListExClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneQueryResultMovableListEx emptyInstance = new SceneQueryResultMovableListEx(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
