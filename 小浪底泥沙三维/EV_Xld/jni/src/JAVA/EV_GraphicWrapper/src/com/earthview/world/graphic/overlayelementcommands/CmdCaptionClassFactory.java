package com.earthview.world.graphic.overlayelementcommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdCaptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdCaption emptyInstance = new CmdCaption(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
