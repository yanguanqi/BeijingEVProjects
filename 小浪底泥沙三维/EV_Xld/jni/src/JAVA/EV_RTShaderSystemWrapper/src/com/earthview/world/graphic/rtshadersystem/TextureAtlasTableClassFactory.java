package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureAtlasTableClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureAtlasTable emptyInstance = new TextureAtlasTable(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
