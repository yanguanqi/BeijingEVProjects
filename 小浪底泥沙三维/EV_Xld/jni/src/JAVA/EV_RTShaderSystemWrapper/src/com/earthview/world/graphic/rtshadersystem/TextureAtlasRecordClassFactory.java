package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureAtlasRecordClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureAtlasRecord emptyInstance = new TextureAtlasRecord(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
