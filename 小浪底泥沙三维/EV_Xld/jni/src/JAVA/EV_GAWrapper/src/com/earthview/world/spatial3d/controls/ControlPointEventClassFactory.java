package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControlPointEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ControlPointEvent emptyInstance = new ControlPointEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
