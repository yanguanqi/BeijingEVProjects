package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.systemui.*;
import com.earthview.world.spatial.display.*;
import com.earthview.world.core.*;

public class LayoutCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayoutCommand emptyInstance = new LayoutCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
