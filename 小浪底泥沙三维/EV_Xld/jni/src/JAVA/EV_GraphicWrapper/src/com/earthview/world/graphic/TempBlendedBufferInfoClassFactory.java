package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TempBlendedBufferInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TempBlendedBufferInfo emptyInstance = new TempBlendedBufferInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
