package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingMultiPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingMultiPoint emptyInstance = new EditingMultiPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
