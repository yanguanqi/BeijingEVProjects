package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdDataBaseClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdDataBase emptyInstance = new CmdDataBase(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
