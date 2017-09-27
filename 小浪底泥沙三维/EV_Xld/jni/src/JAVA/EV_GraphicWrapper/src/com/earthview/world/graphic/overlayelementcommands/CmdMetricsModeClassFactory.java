package com.earthview.world.graphic.overlayelementcommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdMetricsModeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdMetricsMode emptyInstance = new CmdMetricsMode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
