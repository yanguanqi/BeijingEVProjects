package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TransformKeyFrameClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TransformKeyFrame emptyInstance = new TransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
