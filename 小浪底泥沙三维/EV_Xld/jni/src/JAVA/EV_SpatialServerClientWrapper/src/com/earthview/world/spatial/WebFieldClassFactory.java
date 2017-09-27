package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebFieldClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebField emptyInstance = new WebField(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
