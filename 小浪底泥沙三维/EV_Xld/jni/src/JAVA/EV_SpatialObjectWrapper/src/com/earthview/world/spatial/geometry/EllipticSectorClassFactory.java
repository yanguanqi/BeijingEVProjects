package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EllipticSectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EllipticSector emptyInstance = new EllipticSector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
