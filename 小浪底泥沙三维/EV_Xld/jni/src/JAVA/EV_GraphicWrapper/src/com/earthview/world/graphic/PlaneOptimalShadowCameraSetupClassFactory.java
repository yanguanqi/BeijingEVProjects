package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PlaneOptimalShadowCameraSetupClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PlaneOptimalShadowCameraSetup emptyInstance = new PlaneOptimalShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
