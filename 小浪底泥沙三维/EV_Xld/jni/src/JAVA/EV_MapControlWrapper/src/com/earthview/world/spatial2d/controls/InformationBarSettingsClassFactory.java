package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InformationBarSettingsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InformationBarSettings emptyInstance = new InformationBarSettings(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
