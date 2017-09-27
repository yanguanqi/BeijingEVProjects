package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DefaultShadowCameraSetupClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DefaultShadowCameraSetup emptyInstance = new DefaultShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
