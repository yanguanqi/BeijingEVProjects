package com.earthview.world.graphic.overlayelementcommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdMaterialClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdMaterial emptyInstance = new CmdMaterial(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
