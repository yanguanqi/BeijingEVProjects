package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdMinVelocityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdMinVelocity emptyInstance = new CmdMinVelocity(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
