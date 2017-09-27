package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PopUpMenuEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PopUpMenuEvent emptyInstance = new PopUpMenuEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
