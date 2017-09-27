package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GotoEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GotoEvent emptyInstance = new GotoEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
