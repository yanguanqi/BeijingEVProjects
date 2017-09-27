package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EnableTextBoxEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EnableTextBoxEvent emptyInstance = new EnableTextBoxEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
