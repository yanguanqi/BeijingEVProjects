package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ThemeFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ThemeFactory emptyInstance = new ThemeFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
