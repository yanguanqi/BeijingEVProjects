package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayoutSublineRenderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayoutSublineRender emptyInstance = new LayoutSublineRender(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
