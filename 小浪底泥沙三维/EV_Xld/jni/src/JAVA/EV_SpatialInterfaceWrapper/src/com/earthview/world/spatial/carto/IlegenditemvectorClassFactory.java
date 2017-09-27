package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IlegenditemvectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ilegenditemvector emptyInstance = new Ilegenditemvector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
