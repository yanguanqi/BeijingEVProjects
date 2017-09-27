package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IlayerselectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ilayerselection emptyInstance = new Ilayerselection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
