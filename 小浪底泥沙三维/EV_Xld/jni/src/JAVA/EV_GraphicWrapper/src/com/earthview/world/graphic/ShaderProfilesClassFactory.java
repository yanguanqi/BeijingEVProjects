package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShaderProfilesClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShaderProfiles emptyInstance = new ShaderProfiles(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
