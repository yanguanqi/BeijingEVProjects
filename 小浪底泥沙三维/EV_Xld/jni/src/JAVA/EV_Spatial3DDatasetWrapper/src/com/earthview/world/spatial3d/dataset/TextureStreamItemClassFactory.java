package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureStreamItemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureStreamItem emptyInstance = new TextureStreamItem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
