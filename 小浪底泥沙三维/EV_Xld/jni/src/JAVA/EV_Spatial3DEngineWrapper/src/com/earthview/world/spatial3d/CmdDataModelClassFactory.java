package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdDataModelClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdDataModel emptyInstance = new CmdDataModel(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
