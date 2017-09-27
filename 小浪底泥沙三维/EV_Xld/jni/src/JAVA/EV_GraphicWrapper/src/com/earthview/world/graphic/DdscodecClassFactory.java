package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DdscodecClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ddscodec emptyInstance = new Ddscodec(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
