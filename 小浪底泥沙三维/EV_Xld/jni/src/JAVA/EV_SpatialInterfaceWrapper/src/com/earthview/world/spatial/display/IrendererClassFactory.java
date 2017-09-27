package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IrendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Irenderer emptyInstance = new Irenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
