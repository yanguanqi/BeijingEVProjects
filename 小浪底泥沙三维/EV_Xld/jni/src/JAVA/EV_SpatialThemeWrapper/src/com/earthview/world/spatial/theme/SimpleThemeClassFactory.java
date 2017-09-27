package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SimpleThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SimpleTheme emptyInstance = new SimpleTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
