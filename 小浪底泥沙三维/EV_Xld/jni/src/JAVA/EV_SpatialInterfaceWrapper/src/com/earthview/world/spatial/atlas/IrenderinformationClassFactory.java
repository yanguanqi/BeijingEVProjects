package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IrenderinformationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Irenderinformation emptyInstance = new Irenderinformation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
