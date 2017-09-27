package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScaleSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScaleSerializer emptyInstance = new ScaleSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
