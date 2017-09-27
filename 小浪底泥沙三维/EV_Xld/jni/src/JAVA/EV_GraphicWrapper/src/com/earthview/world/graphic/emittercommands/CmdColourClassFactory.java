package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdColourClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdColour emptyInstance = new CmdColour(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
