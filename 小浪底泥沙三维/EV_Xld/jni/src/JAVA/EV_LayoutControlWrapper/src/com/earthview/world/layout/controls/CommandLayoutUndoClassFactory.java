package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandLayoutUndoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandLayoutUndo emptyInstance = new CommandLayoutUndo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
