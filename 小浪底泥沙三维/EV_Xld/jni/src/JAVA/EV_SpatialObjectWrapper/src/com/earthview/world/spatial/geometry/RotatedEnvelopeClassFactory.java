package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotatedEnvelopeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RotatedEnvelope emptyInstance = new RotatedEnvelope(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
