package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdPositionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdPosition emptyInstance = new CmdPosition(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
