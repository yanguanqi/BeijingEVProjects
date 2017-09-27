package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FrameTagSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FrameTagSerializer emptyInstance = new FrameTagSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
