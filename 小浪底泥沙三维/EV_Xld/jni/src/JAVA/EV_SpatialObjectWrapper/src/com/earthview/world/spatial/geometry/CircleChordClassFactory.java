package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CircleChordClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CircleChord emptyInstance = new CircleChord(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
