package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneManagerMetaDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneManagerMetaData emptyInstance = new SceneManagerMetaData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
