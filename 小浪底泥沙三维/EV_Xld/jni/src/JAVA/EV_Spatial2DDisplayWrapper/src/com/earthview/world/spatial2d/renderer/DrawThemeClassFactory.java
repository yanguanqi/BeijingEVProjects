package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawTheme emptyInstance = new DrawTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
