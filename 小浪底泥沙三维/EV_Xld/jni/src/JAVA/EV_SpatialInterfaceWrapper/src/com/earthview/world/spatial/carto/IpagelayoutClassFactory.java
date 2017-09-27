package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IpagelayoutClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ipagelayout emptyInstance = new Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
