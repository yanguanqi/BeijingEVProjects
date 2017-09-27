package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NumericKeyFrameClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NumericKeyFrame emptyInstance = new NumericKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
