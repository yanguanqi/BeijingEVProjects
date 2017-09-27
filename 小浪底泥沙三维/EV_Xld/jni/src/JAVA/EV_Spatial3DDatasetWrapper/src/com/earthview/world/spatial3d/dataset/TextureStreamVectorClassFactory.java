package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureStreamVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TextureStreamVector emptyInstance = new TextureStreamVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
