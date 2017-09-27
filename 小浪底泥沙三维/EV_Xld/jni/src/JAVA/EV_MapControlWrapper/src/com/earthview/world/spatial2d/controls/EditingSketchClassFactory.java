package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geometry.*;
import com.earthview.world.core.*;

public class EditingSketchClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingSketch emptyInstance = new EditingSketch(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
