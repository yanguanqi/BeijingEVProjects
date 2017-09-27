package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LatitudeLonitudeTextBoxClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LatitudeLonitudeTextBox emptyInstance = new LatitudeLonitudeTextBox(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
