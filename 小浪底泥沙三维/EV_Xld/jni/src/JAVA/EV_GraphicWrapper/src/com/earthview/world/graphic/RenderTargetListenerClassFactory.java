package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderTargetListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderTargetListener emptyInstance = new RenderTargetListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
