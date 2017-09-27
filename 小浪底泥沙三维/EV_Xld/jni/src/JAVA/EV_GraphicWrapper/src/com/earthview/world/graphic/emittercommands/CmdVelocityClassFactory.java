package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdVelocityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdVelocity emptyInstance = new CmdVelocity(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
