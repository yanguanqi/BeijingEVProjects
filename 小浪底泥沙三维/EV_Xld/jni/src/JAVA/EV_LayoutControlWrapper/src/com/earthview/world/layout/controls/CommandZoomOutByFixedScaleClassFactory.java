package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandZoomOutByFixedScaleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandZoomOutByFixedScale emptyInstance = new CommandZoomOutByFixedScale(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
