package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LabelElementClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LabelElement emptyInstance = new LabelElement(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
