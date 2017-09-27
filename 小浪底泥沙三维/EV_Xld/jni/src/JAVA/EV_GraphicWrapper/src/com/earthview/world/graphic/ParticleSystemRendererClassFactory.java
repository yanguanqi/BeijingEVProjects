package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleSystemRendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleSystemRenderer emptyInstance = new ParticleSystemRenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
