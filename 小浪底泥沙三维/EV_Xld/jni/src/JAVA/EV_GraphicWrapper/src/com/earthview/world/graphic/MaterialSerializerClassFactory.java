package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MaterialSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MaterialSerializer emptyInstance = new MaterialSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
