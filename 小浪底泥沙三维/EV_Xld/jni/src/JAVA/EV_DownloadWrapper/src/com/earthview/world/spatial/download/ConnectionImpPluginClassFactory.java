package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConnectionImpPluginClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConnectionImpPlugin emptyInstance = new ConnectionImpPlugin(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
