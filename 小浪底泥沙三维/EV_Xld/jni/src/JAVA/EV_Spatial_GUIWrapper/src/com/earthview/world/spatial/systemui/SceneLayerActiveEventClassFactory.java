package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneLayerActiveEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneLayerActiveEvent emptyInstance = new SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
