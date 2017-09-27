package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryResultMovableListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneQueryResultMovableList emptyInstance = new SceneQueryResultMovableList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
