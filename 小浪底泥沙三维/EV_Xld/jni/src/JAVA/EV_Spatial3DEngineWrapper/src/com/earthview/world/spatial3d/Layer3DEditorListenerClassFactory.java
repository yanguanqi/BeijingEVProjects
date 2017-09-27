package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Layer3DEditorListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Layer3DEditorListener emptyInstance = new Layer3DEditorListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
