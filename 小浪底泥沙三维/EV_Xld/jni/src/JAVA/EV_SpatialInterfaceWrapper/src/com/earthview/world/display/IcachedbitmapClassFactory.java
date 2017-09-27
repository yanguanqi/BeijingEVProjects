package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IcachedbitmapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Icachedbitmap emptyInstance = new Icachedbitmap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
