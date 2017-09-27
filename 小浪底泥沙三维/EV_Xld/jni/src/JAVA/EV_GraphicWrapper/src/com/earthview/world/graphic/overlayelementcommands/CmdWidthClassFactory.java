package com.earthview.world.graphic.overlayelementcommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdWidthClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdWidth emptyInstance = new CmdWidth(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
