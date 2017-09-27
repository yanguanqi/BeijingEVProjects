package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BitArrayClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BitArray emptyInstance = new BitArray(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
