package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShadowTextureConfigClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShadowTextureConfig emptyInstance = new ShadowTextureConfig(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
