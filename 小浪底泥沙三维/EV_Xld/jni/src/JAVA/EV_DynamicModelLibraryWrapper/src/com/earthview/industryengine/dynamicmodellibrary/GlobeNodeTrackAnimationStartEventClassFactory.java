package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeNodeTrackAnimationStartEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeNodeTrackAnimationStartEvent emptyInstance = new GlobeNodeTrackAnimationStartEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
