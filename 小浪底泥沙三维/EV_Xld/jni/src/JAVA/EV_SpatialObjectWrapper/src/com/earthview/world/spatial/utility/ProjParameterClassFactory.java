package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProjParameterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ProjParameter emptyInstance = new ProjParameter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
