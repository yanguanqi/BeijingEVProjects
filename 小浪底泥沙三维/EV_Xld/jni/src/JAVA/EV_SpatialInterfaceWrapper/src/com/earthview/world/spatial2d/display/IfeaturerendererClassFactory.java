package com.earthview.world.spatial2d.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IfeaturerendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ifeaturerenderer emptyInstance = new Ifeaturerenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
