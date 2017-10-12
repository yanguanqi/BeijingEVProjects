package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvrenderenginemanagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evrenderenginemanager emptyInstance = new Evrenderenginemanager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
