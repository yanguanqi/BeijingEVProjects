package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdNameClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdName emptyInstance = new CmdName(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
