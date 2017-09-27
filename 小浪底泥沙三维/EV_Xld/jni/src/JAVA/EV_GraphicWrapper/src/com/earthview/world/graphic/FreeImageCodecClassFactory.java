package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FreeImageCodecClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FreeImageCodec emptyInstance = new FreeImageCodec(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
