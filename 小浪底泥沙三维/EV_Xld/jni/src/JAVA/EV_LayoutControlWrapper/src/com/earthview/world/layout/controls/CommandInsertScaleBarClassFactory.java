package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.atlas.*;
import com.earthview.world.core.*;

public class CommandInsertScaleBarClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandInsertScaleBar emptyInstance = new CommandInsertScaleBar(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
