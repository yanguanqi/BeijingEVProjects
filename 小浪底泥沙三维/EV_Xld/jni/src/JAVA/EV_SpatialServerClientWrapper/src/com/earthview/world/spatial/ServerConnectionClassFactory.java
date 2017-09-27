package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerConnectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerConnection emptyInstance = new ServerConnection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
