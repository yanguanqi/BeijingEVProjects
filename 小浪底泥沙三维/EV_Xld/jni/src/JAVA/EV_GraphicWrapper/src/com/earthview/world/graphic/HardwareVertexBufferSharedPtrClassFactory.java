package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareVertexBufferSharedPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HardwareVertexBufferSharedPtr emptyInstance = new HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
