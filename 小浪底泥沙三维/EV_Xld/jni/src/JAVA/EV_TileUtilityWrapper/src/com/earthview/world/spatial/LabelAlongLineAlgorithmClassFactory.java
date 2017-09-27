package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LabelAlongLineAlgorithmClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LabelAlongLineAlgorithm emptyInstance = new LabelAlongLineAlgorithm(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
