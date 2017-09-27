package com.earthview.world.graphic.overlayelementcommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdTopClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdTop emptyInstance = new CmdTop(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
