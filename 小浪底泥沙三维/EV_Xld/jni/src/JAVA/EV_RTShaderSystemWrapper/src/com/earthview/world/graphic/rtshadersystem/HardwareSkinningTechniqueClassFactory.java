package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareSkinningTechniqueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HardwareSkinningTechnique emptyInstance = new HardwareSkinningTechnique(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
