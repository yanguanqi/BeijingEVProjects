package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyAdjustModeEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyAdjustModeEvent emptyInstance = new GlobeFlyAdjustModeEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
