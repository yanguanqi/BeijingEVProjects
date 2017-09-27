package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureAtlasTablePtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureAtlasTablePtr emptyInstance = new TextureAtlasTablePtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
