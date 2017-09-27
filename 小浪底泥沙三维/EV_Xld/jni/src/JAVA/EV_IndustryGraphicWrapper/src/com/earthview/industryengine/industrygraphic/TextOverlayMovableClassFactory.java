package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextOverlayMovableClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextOverlayMovable emptyInstance = new TextOverlayMovable(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
