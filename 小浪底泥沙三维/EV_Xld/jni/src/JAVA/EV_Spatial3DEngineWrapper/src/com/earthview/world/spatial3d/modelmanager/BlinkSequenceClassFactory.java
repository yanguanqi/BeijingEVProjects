package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BlinkSequenceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BlinkSequence emptyInstance = new BlinkSequence(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
