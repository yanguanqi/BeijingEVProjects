package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FrameTagSerializerListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FrameTagSerializerList emptyInstance = new FrameTagSerializerList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
