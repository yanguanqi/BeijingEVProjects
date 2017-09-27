package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdAngleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdAngle emptyInstance = new CmdAngle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
