package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DualQuaternionSkinningClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DualQuaternionSkinning emptyInstance = new DualQuaternionSkinning(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
