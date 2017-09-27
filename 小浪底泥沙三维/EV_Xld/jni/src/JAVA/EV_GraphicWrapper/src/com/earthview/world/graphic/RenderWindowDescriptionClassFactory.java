package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderWindowDescriptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderWindowDescription emptyInstance = new RenderWindowDescription(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
