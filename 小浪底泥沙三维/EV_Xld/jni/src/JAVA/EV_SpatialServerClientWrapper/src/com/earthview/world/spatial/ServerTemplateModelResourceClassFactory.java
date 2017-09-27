package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerTemplateModelResourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerTemplateModelResource emptyInstance = new ServerTemplateModelResource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
