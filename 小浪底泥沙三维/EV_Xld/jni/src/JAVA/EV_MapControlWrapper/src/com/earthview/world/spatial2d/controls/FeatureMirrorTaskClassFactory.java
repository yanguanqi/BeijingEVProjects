package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureMirrorTaskClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FeatureMirrorTask emptyInstance = new FeatureMirrorTask(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
