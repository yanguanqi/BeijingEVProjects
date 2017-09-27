package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartBlackBackColorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartBlackBackColor emptyInstance = new CommandChartBlackBackColor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
