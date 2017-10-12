package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PkmcodecClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Pkmcodec emptyInstance = new Pkmcodec(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
