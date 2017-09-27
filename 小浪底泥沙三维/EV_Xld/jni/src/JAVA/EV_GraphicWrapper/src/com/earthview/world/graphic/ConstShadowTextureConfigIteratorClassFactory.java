package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConstShadowTextureConfigIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConstShadowTextureConfigIterator emptyInstance = new ConstShadowTextureConfigIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
