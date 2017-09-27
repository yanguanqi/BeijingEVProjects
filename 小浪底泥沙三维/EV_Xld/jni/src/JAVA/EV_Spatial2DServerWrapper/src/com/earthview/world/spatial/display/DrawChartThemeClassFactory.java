package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawChartThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawChartTheme emptyInstance = new DrawChartTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
