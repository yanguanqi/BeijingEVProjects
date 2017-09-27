package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerEditingEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayerEditingEvent emptyInstance = new LayerEditingEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
