package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartWhiteBackColorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartWhiteBackColor emptyInstance = new CommandChartWhiteBackColor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
