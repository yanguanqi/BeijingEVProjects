package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureCompositorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureCompositor emptyInstance = new TextureCompositor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
