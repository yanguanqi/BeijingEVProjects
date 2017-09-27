package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmtsserverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmtsserver emptyInstance = new Wmtsserver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
