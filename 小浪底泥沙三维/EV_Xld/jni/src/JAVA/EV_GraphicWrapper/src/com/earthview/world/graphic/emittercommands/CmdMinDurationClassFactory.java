package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdMinDurationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdMinDuration emptyInstance = new CmdMinDuration(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
