package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ThemeFactory2ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ThemeFactory2 emptyInstance = new ThemeFactory2(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
