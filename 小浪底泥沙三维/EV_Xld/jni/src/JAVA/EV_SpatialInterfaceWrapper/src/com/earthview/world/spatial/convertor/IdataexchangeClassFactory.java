package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdataexchangeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idataexchange emptyInstance = new Idataexchange(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
