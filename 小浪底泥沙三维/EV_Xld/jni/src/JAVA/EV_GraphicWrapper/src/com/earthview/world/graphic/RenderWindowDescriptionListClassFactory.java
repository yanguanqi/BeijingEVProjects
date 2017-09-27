package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderWindowDescriptionListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderWindowDescriptionList emptyInstance = new RenderWindowDescriptionList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
