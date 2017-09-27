package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IsimplethemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Isimpletheme emptyInstance = new Isimpletheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
