package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EagleEyeControlAgentClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EagleEyeControlAgent emptyInstance = new EagleEyeControlAgent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
