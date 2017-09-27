package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColorSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ColorSerializer emptyInstance = new ColorSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
