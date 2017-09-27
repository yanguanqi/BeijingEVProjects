package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingEllipticArchedClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingEllipticArched emptyInstance = new EditingEllipticArched(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
