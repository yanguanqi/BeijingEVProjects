package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyPauseEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyPauseEvent emptyInstance = new GlobeFlyPauseEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
