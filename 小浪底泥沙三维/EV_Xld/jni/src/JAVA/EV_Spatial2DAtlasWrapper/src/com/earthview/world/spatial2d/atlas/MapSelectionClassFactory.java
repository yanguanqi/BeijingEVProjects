package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapSelectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapSelection emptyInstance = new MapSelection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
