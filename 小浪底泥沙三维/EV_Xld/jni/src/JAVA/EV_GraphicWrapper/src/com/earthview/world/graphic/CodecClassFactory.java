package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CodecClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Codec emptyInstance = new Codec(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
