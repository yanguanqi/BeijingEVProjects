package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Tool2DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Tool2D emptyInstance = new Tool2D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
