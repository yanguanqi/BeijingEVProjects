package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IscalebarClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iscalebar emptyInstance = new Iscalebar(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
