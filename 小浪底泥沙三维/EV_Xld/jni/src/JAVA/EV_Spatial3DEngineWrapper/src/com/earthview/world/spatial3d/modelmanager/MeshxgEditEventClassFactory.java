package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshxgEditEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshxgEditEvent emptyInstance = new MeshxgEditEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
