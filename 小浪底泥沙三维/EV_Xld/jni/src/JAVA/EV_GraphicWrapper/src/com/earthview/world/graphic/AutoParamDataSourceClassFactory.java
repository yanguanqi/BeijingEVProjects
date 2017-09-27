package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AutoParamDataSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AutoParamDataSource emptyInstance = new AutoParamDataSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
