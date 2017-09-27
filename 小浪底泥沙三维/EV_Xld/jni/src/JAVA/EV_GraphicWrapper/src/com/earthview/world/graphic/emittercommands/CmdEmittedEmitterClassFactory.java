package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdEmittedEmitterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdEmittedEmitter emptyInstance = new CmdEmittedEmitter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
