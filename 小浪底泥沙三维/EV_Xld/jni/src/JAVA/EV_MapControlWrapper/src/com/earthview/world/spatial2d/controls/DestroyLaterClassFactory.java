package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DestroyLaterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DestroyLater emptyInstance = new DestroyLater(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
