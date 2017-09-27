package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LongCircleAlgoriClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LongCircleAlgori emptyInstance = new LongCircleAlgori(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
