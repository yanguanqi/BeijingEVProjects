package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScreenScutcheonClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScreenScutcheon emptyInstance = new ScreenScutcheon(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
