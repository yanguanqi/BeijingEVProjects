package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Inode emptyInstance = new Inode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
