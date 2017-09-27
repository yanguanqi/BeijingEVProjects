package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AngleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Angle emptyInstance = new Angle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
