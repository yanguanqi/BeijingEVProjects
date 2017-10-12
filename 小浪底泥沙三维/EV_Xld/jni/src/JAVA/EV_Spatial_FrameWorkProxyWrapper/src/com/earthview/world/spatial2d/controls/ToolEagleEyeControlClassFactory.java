package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolEagleEyeControlClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolEagleEyeControl emptyInstance = new ToolEagleEyeControl(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
