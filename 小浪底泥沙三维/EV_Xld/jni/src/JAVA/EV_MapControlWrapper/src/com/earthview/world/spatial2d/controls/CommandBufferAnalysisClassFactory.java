package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandBufferAnalysisClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandBufferAnalysis emptyInstance = new CommandBufferAnalysis(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
