package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IsymbolfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Isymbolfactory emptyInstance = new Isymbolfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
