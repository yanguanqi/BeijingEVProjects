package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeodeticThemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeodeticTheme emptyInstance = new GeodeticTheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
