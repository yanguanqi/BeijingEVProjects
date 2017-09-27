package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuPtrVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuPtrVector emptyInstance = new GpuPtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
