package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneActiveEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneActiveEvent emptyInstance = new SceneActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
