package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandAnalysis3DVisibilityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandAnalysis3DVisibility emptyInstance = new CommandAnalysis3DVisibility(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
