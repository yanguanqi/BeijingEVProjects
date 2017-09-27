package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderSystemThreadClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderSystemThread emptyInstance = new RenderSystemThread(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
