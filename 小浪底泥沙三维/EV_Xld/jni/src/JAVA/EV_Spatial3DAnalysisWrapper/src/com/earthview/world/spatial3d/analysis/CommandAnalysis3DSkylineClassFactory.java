package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandAnalysis3DSkylineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandAnalysis3DSkyline emptyInstance = new CommandAnalysis3DSkyline(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
