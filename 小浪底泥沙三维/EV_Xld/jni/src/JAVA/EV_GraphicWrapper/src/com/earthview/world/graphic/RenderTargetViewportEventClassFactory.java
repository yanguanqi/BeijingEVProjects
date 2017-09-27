package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderTargetViewportEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderTargetViewportEvent emptyInstance = new RenderTargetViewportEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
