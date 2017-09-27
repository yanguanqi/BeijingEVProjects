package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartSimpleSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartSimpleSymbol emptyInstance = new CommandChartSimpleSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
