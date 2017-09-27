package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BorderPanelOverlayElementClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BorderPanelOverlayElement emptyInstance = new BorderPanelOverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
