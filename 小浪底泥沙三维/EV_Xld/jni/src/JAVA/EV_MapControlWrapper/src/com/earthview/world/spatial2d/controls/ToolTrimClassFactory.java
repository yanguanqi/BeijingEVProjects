package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolTrimClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolTrim emptyInstance = new ToolTrim(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
