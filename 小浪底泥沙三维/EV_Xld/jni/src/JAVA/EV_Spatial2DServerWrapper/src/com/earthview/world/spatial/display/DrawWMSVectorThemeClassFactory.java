package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawWMSVectorThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawWMSVectorTheme emptyInstance = new DrawWMSVectorTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
