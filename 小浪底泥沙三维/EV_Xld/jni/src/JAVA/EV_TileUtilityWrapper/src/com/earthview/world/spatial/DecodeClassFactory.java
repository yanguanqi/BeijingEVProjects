package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DecodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Decode emptyInstance = new Decode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
