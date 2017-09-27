package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MatrixSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MatrixSerializer emptyInstance = new MatrixSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
