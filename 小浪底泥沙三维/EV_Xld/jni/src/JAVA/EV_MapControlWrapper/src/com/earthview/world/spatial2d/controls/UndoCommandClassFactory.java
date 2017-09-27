package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UndoCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		UndoCommand emptyInstance = new UndoCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
