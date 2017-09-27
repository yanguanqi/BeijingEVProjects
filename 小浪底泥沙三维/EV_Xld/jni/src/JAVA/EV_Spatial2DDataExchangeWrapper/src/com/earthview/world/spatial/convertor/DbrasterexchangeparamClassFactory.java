package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DbrasterexchangeparamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Dbrasterexchangeparam emptyInstance = new Dbrasterexchangeparam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
