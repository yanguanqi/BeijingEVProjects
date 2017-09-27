package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawStatisticsThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawStatisticsTheme emptyInstance = new DrawStatisticsTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
