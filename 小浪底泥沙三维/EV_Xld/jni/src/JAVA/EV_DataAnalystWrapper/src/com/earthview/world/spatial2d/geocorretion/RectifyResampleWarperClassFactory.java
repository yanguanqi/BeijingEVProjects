package com.earthview.world.spatial2d.geocorretion;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RectifyResampleWarperClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RectifyResampleWarper emptyInstance = new RectifyResampleWarper(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
