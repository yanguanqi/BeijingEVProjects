package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KeyframeSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KeyframeSerializer emptyInstance = new KeyframeSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
