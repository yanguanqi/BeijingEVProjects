package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PageUnitConverterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PageUnitConverter emptyInstance = new PageUnitConverter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
