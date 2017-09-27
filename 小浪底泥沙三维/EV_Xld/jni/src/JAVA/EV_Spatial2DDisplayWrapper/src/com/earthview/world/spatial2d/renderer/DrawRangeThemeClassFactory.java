package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawRangeThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawRangeTheme emptyInstance = new DrawRangeTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
