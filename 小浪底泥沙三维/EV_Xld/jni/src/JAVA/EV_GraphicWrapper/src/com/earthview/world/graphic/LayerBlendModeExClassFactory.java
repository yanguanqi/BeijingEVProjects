package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerBlendModeExClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayerBlendModeEx emptyInstance = new LayerBlendModeEx(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
