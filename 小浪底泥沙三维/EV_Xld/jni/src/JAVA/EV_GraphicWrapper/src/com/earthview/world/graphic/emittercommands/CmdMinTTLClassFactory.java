package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdMinTTLClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdMinTTL emptyInstance = new CmdMinTTL(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
