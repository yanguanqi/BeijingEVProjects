package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LabelElementsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LabelElements emptyInstance = new LabelElements(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
