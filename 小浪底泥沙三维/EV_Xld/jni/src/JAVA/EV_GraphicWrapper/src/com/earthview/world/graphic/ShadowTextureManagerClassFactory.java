package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShadowTextureManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShadowTextureManager emptyInstance = new ShadowTextureManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
