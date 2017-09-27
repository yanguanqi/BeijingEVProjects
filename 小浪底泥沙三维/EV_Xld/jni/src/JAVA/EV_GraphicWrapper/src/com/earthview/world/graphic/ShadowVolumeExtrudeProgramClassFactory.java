package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShadowVolumeExtrudeProgramClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShadowVolumeExtrudeProgram emptyInstance = new ShadowVolumeExtrudeProgram(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
