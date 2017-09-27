package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandSaveEditsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandSaveEdits emptyInstance = new CommandSaveEdits(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
