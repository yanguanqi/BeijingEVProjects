package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EagleEyeControlClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EagleEyeControl emptyInstance = new EagleEyeControl(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
