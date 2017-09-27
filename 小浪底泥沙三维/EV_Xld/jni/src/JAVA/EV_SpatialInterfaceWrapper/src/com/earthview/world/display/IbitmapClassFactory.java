package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IbitmapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ibitmap emptyInstance = new Ibitmap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
