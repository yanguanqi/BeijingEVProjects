package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnalysisCameraListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnalysisCameraListener emptyInstance = new AnalysisCameraListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
