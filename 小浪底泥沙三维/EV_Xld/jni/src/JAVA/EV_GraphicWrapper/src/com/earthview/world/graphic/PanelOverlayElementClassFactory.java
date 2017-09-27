package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PanelOverlayElementClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PanelOverlayElement emptyInstance = new PanelOverlayElement(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
