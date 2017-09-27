package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScreenScutcheonManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScreenScutcheonManager emptyInstance = new ScreenScutcheonManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
