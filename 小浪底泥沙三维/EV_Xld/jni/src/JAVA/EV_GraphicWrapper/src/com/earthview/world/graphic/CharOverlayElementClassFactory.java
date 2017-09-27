package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CharOverlayElementClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CharOverlayElement emptyInstance = new CharOverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
