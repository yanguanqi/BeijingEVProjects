package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IscenelayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iscenelayer emptyInstance = new Iscenelayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
