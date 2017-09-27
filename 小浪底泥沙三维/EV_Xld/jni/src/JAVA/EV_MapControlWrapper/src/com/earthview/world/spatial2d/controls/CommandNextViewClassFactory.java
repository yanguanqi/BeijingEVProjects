package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandNextViewClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandNextView emptyInstance = new CommandNextView(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
