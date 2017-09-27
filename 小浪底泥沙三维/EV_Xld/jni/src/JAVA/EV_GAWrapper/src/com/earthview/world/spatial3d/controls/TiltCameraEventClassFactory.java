package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TiltCameraEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TiltCameraEvent emptyInstance = new TiltCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
