package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DefaultHardwareVertexBufferClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DefaultHardwareVertexBuffer emptyInstance = new DefaultHardwareVertexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
