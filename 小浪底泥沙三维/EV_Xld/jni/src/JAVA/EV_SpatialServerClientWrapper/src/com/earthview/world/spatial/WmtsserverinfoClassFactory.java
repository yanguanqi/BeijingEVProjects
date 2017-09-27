package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmtsserverinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmtsserverinfo emptyInstance = new Wmtsserverinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
