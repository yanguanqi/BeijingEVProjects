package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OverlayClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Overlay emptyInstance = new Overlay(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
