package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class TcpServerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TcpServer emptyInstance = new TcpServer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
