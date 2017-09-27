package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectLayerEditorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectLayerEditor emptyInstance = new EffectLayerEditor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
