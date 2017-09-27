package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerTemplateEntityObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerTemplateEntityObject emptyInstance = new ServerTemplateEntityObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
