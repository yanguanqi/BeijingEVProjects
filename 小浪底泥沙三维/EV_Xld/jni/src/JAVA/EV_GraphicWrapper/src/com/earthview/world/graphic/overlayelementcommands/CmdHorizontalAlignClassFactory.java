package com.earthview.world.graphic.overlayelementcommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdHorizontalAlignClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdHorizontalAlign emptyInstance = new CmdHorizontalAlign(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
