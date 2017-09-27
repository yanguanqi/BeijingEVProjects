package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdEmissionRateClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdEmissionRate emptyInstance = new CmdEmissionRate(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
