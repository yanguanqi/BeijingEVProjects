package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextBoxWidgetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextBoxWidget emptyInstance = new TextBoxWidget(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
