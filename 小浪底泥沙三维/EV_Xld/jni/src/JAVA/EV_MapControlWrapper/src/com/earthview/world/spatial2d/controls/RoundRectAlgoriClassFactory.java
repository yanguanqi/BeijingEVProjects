package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RoundRectAlgoriClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RoundRectAlgori emptyInstance = new RoundRectAlgori(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
