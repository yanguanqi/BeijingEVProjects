package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolMirrorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolMirror emptyInstance = new ToolMirror(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
