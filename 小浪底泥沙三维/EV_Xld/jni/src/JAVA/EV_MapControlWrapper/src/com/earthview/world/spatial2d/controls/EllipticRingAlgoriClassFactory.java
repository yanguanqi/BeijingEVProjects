package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EllipticRingAlgoriClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EllipticRingAlgori emptyInstance = new EllipticRingAlgori(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
