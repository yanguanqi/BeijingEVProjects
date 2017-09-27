package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TempVertexClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TempVertex emptyInstance = new TempVertex(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
