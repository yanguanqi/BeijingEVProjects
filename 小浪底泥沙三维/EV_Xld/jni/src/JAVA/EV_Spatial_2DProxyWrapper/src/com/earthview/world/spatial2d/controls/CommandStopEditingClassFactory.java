package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandStopEditingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandStopEditing emptyInstance = new CommandStopEditing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
