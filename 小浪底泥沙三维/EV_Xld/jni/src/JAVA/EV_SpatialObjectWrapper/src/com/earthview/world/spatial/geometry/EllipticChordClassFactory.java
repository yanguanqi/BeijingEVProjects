package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EllipticChordClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EllipticChord emptyInstance = new EllipticChord(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
