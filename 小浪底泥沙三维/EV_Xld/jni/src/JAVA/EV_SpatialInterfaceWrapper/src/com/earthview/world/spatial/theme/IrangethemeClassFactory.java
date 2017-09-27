package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IrangethemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Irangetheme emptyInstance = new Irangetheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
