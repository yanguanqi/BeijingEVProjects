package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class StreamArchiveFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StreamArchiveFactory emptyInstance = new StreamArchiveFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
