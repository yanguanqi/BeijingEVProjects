package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderInformationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderInformation emptyInstance = new RenderInformation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
