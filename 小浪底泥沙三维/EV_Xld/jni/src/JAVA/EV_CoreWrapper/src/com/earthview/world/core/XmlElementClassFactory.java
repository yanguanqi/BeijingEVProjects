package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class XmlElementClassFactory implements IClassFactory {
	public BaseObject create()
	{
		XmlElement emptyInstance = new XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
