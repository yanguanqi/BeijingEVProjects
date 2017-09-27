package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawUniqueValueThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawUniqueValueTheme emptyInstance = new DrawUniqueValueTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
