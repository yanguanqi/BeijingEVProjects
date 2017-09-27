package com.earthview.world.graphic.overlayelementcommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdVisibleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdVisible emptyInstance = new CmdVisible(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
