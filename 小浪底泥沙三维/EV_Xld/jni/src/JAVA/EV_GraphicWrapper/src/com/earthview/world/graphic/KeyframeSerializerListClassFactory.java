package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KeyframeSerializerListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KeyframeSerializerList emptyInstance = new KeyframeSerializerList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
