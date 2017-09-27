package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LabelDrawAlgorithmClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LabelDrawAlgorithm emptyInstance = new LabelDrawAlgorithm(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
