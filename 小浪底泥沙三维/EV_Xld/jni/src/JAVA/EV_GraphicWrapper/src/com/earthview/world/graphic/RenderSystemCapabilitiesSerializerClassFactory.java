package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderSystemCapabilitiesSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderSystemCapabilitiesSerializer emptyInstance = new RenderSystemCapabilitiesSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
