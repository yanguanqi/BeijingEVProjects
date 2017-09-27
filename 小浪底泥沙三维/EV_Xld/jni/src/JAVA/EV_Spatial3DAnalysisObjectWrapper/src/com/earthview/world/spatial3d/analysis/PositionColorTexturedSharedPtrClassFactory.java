package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PositionColorTexturedSharedPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PositionColorTexturedSharedPtr emptyInstance = new PositionColorTexturedSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
