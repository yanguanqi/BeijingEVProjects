package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BitmapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Bitmap emptyInstance = new Bitmap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
