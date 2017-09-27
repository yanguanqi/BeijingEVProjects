package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IlabelrendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ilabelrenderer emptyInstance = new Ilabelrenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
