package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextLineMovableClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextLineMovable emptyInstance = new TextLineMovable(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
