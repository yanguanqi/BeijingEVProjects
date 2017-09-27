package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdDurationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdDuration emptyInstance = new CmdDuration(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
