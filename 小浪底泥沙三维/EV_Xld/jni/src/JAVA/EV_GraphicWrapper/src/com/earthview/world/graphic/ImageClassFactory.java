package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Image emptyInstance = new Image(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
