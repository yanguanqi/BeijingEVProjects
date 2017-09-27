package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TiltCameraEventEXClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TiltCameraEventEX emptyInstance = new TiltCameraEventEX(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
