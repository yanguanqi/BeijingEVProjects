package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UniqueValueThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		UniqueValueTheme emptyInstance = new UniqueValueTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
