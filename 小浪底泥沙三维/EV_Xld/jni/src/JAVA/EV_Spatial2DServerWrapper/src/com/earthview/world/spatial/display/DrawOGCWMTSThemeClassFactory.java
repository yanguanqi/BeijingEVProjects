package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawOGCWMTSThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawOGCWMTSTheme emptyInstance = new DrawOGCWMTSTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
