package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TexCoordModifierControllerValueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TexCoordModifierControllerValue emptyInstance = new TexCoordModifierControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
