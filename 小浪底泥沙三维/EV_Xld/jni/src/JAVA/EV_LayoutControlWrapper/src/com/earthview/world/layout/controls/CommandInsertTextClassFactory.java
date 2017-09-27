package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.atlas.*;
import com.earthview.world.core.*;

public class CommandInsertTextClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandInsertText emptyInstance = new CommandInsertText(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
