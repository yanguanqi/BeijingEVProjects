package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdDirectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdDirection emptyInstance = new CmdDirection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
