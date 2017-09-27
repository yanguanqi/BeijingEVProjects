package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Evvector3dmetainfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evvector3dmetainfo emptyInstance = new Evvector3dmetainfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
