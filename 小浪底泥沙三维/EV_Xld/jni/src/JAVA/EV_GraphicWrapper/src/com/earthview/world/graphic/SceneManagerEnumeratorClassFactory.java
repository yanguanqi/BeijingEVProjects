package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneManagerEnumeratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneManagerEnumerator emptyInstance = new SceneManagerEnumerator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
