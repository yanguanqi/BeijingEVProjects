package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandAnalysis3DSlopeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandAnalysis3DSlope emptyInstance = new CommandAnalysis3DSlope(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
