package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingPathClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingPath emptyInstance = new EditingPath(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
