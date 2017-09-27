package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubRenderStateSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubRenderStateSet emptyInstance = new SubRenderStateSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
