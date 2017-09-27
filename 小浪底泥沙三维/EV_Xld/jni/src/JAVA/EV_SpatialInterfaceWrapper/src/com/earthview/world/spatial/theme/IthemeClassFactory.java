package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IthemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Itheme emptyInstance = new Itheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
