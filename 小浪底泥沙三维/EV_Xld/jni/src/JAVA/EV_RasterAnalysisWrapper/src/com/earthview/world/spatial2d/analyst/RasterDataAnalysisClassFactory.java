package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterDataAnalysisClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterDataAnalysis emptyInstance = new RasterDataAnalysis(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
