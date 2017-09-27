package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IcolorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Icolor emptyInstance = new Icolor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
