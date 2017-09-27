package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingLineStringClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingLineString emptyInstance = new EditingLineString(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
