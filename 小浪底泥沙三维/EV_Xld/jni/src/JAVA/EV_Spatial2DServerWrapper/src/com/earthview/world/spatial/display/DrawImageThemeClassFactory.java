package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawImageThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawImageTheme emptyInstance = new DrawImageTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
