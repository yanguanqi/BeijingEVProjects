package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IuniquethemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iuniquetheme emptyInstance = new Iuniquetheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
