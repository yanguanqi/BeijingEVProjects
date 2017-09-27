package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IcommonscenequerylistenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Icommonscenequerylistener emptyInstance = new Icommonscenequerylistener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
