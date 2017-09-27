package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditCommand emptyInstance = new EditCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
