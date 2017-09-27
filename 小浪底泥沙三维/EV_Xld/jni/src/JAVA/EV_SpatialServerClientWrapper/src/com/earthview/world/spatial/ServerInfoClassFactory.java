package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerInfo emptyInstance = new ServerInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
