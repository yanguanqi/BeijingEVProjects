package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandIntersectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandIntersection emptyInstance = new CommandIntersection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
