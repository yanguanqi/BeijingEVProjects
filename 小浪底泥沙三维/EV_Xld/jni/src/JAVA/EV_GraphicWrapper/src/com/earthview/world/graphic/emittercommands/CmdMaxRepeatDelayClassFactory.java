package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdMaxRepeatDelayClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdMaxRepeatDelay emptyInstance = new CmdMaxRepeatDelay(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
