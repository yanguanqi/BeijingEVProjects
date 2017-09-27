package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShadowTextureListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShadowTextureList emptyInstance = new ShadowTextureList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
