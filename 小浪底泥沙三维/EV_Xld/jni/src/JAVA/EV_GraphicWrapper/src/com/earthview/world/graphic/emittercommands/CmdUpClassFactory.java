package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdUpClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdUp emptyInstance = new CmdUp(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
