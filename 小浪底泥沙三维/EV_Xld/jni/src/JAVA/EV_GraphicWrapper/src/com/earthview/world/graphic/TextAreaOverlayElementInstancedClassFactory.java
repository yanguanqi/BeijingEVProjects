package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextAreaOverlayElementInstancedClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextAreaOverlayElementInstanced emptyInstance = new TextAreaOverlayElementInstanced(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
