package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Rect emptyInstance = new Rect(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
