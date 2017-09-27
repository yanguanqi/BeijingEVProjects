package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandMapExportClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandMapExport emptyInstance = new CommandMapExport(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
