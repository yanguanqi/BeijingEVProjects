package com.earthview.world.graphic.overlayelementcommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdHeightClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdHeight emptyInstance = new CmdHeight(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
