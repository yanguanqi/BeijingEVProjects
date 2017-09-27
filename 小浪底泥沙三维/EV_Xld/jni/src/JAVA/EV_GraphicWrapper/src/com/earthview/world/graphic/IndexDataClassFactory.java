package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IndexDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IndexData emptyInstance = new IndexData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
