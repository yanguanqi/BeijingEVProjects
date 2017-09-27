package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingRoundRectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingRoundRect emptyInstance = new EditingRoundRect(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
