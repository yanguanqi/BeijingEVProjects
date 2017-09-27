package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdMinRepeatDelayClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdMinRepeatDelay emptyInstance = new CmdMinRepeatDelay(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
