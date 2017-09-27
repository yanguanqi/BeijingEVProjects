package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BillboardParticleRendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BillboardParticleRenderer emptyInstance = new BillboardParticleRenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
