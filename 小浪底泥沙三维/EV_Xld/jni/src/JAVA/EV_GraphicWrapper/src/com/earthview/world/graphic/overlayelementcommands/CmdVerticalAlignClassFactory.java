package com.earthview.world.graphic.overlayelementcommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdVerticalAlignClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdVerticalAlign emptyInstance = new CmdVerticalAlign(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
