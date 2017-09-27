package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandClearSelectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandClearSelection emptyInstance = new CommandClearSelection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
