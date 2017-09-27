package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class StatisticsThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StatisticsTheme emptyInstance = new StatisticsTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
