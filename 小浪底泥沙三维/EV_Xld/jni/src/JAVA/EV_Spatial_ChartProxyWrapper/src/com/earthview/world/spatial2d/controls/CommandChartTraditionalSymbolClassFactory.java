package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartTraditionalSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartTraditionalSymbol emptyInstance = new CommandChartTraditionalSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
