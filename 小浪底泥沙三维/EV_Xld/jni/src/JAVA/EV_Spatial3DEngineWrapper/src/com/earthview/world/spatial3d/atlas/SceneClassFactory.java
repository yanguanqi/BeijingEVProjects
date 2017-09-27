package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Scene emptyInstance = new Scene(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
