package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MatrixColorListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MatrixColorList emptyInstance = new MatrixColorList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
