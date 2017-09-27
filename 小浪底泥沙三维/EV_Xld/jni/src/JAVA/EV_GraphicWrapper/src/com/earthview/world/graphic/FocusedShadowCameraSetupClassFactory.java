package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FocusedShadowCameraSetupClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FocusedShadowCameraSetup emptyInstance = new FocusedShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
