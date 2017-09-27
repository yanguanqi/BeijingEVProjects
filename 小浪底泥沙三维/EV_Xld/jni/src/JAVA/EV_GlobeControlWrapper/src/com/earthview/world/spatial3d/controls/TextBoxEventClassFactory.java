package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextBoxEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextBoxEvent emptyInstance = new TextBoxEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
