package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerRenderOrderControllerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayerRenderOrderController emptyInstance = new LayerRenderOrderController(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
