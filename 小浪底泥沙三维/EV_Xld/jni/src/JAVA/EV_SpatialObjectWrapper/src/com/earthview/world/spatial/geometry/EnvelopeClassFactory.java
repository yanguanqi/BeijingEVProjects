package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EnvelopeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Envelope emptyInstance = new Envelope(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
