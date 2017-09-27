package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ItextstylelistenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Itextstylelistener emptyInstance = new Itextstylelistener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
