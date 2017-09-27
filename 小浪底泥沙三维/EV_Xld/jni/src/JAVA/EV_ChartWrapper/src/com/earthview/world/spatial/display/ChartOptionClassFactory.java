package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartOptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartOption emptyInstance = new ChartOption(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
