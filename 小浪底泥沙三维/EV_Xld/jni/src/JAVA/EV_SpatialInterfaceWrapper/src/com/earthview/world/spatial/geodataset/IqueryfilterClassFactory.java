package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IqueryfilterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iqueryfilter emptyInstance = new Iqueryfilter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
