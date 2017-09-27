package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextOrigintrackLineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextOrigintrackLine emptyInstance = new TextOrigintrackLine(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
