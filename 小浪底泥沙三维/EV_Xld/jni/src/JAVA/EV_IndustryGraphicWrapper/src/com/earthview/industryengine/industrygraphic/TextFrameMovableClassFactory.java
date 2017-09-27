package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextFrameMovableClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextFrameMovable emptyInstance = new TextFrameMovable(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
