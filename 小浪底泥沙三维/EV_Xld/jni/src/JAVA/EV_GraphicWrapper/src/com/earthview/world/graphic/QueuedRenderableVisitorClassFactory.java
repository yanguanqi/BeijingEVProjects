package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class QueuedRenderableVisitorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		QueuedRenderableVisitor emptyInstance = new QueuedRenderableVisitor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
