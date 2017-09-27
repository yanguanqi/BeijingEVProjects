package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdMaxDurationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdMaxDuration emptyInstance = new CmdMaxDuration(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
