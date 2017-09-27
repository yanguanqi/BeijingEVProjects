package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdColourRangeStartClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdColourRangeStart emptyInstance = new CmdColourRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
