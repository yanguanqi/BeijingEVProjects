package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RichTextRenderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RichTextRender emptyInstance = new RichTextRender(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
