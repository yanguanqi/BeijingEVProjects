package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotationSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RotationSerializer emptyInstance = new RotationSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
