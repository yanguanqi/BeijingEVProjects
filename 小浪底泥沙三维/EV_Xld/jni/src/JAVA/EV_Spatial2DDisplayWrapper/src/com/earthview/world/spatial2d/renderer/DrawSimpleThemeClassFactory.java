package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawSimpleThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawSimpleTheme emptyInstance = new DrawSimpleTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
