package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TempVertexVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TempVertexVector emptyInstance = new TempVertexVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
