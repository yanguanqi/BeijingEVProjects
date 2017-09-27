package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapControlClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapControl emptyInstance = new MapControl(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
