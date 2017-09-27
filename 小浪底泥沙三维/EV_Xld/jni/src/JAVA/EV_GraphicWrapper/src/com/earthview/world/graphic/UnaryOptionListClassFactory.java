package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UnaryOptionListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		UnaryOptionList emptyInstance = new UnaryOptionList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
