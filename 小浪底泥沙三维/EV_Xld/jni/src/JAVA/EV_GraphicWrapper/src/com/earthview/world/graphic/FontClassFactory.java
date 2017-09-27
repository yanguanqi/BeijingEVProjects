package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FontClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Font emptyInstance = new Font(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
