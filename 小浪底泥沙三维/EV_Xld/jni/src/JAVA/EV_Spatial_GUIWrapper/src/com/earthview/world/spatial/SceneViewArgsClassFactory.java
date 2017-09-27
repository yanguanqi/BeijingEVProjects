package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneViewArgsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneViewArgs emptyInstance = new SceneViewArgs(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
