package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdMaxVelocityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdMaxVelocity emptyInstance = new CmdMaxVelocity(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
