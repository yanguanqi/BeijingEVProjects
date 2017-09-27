package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdMaxTTLClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdMaxTTL emptyInstance = new CmdMaxTTL(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
