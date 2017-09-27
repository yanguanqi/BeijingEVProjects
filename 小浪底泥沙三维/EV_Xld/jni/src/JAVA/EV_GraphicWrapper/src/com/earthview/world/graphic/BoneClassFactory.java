package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BoneClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Bone emptyInstance = new Bone(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
