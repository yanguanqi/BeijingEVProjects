package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingCircleSectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingCircleSector emptyInstance = new EditingCircleSector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
