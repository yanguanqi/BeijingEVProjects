package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebServiceConnectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebServiceConnection emptyInstance = new WebServiceConnection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
