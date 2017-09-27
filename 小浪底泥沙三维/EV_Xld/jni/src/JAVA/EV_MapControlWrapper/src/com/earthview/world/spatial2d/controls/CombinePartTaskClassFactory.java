package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CombinePartTaskClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CombinePartTask emptyInstance = new CombinePartTask(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
