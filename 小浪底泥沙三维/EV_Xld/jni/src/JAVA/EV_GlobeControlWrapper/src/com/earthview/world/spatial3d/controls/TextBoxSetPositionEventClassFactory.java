package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextBoxSetPositionEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextBoxSetPositionEvent emptyInstance = new TextBoxSetPositionEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
