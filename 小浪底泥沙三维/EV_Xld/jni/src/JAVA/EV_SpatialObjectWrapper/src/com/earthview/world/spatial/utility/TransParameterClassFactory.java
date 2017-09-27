package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TransParameterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TransParameter emptyInstance = new TransParameter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
