package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MatrixColorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MatrixColor emptyInstance = new MatrixColor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
