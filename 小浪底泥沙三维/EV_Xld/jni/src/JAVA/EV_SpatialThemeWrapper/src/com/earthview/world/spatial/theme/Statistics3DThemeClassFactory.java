package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Statistics3DThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Statistics3DTheme emptyInstance = new Statistics3DTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
