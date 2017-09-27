package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderablePassClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderablePass emptyInstance = new RenderablePass(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
