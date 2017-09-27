package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandZoomInByFixedScaleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandZoomInByFixedScale emptyInstance = new CommandZoomInByFixedScale(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
