package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandStartEditingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandStartEditing emptyInstance = new CommandStartEditing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
