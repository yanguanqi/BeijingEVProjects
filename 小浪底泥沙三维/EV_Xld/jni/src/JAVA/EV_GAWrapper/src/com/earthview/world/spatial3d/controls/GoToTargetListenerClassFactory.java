package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GoToTargetListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GoToTargetListener emptyInstance = new GoToTargetListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
