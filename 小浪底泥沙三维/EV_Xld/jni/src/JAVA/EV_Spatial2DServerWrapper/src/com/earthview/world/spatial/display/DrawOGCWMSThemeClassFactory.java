package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawOGCWMSThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawOGCWMSTheme emptyInstance = new DrawOGCWMSTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
