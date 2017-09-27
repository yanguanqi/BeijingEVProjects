package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IrelativescenelayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Irelativescenelayer emptyInstance = new Irelativescenelayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
