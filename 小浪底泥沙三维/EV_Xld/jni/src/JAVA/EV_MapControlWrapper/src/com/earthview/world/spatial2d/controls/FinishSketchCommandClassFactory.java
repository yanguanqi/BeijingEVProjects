package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FinishSketchCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FinishSketchCommand emptyInstance = new FinishSketchCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
