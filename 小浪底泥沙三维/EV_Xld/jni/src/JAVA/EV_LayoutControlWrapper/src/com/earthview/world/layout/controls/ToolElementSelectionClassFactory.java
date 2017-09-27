package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolElementSelectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolElementSelection emptyInstance = new ToolElementSelection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
