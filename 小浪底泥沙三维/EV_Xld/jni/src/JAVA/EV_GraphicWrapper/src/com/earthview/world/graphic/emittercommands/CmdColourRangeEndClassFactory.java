package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdColourRangeEndClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdColourRangeEnd emptyInstance = new CmdColourRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
