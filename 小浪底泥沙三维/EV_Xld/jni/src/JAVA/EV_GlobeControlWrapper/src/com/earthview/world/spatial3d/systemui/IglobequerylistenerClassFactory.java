package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IglobequerylistenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iglobequerylistener emptyInstance = new Iglobequerylistener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
