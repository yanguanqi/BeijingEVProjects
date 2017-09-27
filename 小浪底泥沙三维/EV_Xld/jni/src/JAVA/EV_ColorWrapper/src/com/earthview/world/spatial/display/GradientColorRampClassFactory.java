package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GradientColorRampClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GradientColorRamp emptyInstance = new GradientColorRamp(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
