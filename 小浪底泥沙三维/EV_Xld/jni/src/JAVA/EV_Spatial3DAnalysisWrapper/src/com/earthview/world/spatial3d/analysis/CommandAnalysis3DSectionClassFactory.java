package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandAnalysis3DSectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandAnalysis3DSection emptyInstance = new CommandAnalysis3DSection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
