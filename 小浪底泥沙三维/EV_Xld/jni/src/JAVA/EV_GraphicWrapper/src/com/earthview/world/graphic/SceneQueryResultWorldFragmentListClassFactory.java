package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryResultWorldFragmentListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneQueryResultWorldFragmentList emptyInstance = new SceneQueryResultWorldFragmentList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
