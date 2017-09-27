package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageTileMetaInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImageTileMetaInfo emptyInstance = new ImageTileMetaInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
