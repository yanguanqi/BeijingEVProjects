package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdRepeatDelayClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdRepeatDelay emptyInstance = new CmdRepeatDelay(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
