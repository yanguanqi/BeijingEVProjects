package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RangeThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RangeTheme emptyInstance = new RangeTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
