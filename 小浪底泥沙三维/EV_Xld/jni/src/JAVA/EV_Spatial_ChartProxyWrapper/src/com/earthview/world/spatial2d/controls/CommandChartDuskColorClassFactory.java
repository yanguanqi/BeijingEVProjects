package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartDuskColorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartDuskColor emptyInstance = new CommandChartDuskColor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
