package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConnectionImpAdapterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConnectionImpAdapter emptyInstance = new ConnectionImpAdapter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
