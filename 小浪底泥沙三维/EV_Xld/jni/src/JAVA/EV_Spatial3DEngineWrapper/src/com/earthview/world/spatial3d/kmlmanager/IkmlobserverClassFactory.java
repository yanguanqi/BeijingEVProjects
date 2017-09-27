package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IkmlobserverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ikmlobserver emptyInstance = new Ikmlobserver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
