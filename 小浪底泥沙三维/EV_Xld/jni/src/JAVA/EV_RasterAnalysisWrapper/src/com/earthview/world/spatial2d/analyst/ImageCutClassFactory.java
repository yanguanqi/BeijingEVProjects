package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageCutClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImageCut emptyInstance = new ImageCut(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
