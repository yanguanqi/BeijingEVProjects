package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ArrowEditorToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ArrowEditorTool emptyInstance = new ArrowEditorTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
