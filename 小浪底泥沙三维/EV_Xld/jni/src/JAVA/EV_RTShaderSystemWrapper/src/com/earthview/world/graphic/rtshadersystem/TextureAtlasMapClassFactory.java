package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureAtlasMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureAtlasMap emptyInstance = new TextureAtlasMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
