package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingEllipticArcClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingEllipticArc emptyInstance = new EditingEllipticArc(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
