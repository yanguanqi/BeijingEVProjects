package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SectionLineInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SectionLineInfo emptyInstance = new SectionLineInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
