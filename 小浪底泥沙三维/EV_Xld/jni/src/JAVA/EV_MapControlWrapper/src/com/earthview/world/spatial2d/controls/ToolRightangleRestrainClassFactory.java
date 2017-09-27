package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolRightangleRestrainClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolRightangleRestrain emptyInstance = new ToolRightangleRestrain(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
