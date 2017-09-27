package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawVectorThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawVectorTheme emptyInstance = new DrawVectorTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
