package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdTTLClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdTTL emptyInstance = new CmdTTL(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
