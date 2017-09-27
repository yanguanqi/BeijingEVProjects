package com.earthview.world.graphic.overlayelementcommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdLeftClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CmdLeft emptyInstance = new CmdLeft(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
