package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.display.*;
import com.earthview.world.spatial.geometry.*;
import com.earthview.world.core.*;

public class ToolEllipticArcClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolEllipticArc emptyInstance = new ToolEllipticArc(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
