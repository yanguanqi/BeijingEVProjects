package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingRingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingRing emptyInstance = new EditingRing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
