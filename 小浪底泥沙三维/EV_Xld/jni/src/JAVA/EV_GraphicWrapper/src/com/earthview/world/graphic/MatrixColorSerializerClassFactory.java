package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MatrixColorSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MatrixColorSerializer emptyInstance = new MatrixColorSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
