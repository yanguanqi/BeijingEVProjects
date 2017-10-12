package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextAreaInstanceObjectCreatorManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextAreaInstanceObjectCreatorManager emptyInstance = new TextAreaInstanceObjectCreatorManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
