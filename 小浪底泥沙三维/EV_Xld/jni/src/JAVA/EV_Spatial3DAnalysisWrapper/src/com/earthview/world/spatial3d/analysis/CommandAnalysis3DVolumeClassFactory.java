package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandAnalysis3DVolumeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandAnalysis3DVolume emptyInstance = new CommandAnalysis3DVolume(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
