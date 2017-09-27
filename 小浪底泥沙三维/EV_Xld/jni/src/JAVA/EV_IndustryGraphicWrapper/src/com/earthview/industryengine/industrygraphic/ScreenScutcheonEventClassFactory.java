package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScreenScutcheonEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScreenScutcheonEvent emptyInstance = new ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
