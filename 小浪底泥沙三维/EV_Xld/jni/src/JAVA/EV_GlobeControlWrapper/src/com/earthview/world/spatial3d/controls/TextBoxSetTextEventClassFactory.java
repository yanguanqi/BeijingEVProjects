package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextBoxSetTextEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextBoxSetTextEvent emptyInstance = new TextBoxSetTextEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
