package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingEllipseClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingEllipse emptyInstance = new EditingEllipse(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
