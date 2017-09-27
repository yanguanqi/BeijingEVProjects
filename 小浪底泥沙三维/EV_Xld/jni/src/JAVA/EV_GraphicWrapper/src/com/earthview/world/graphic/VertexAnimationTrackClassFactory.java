package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VertexAnimationTrackClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VertexAnimationTrack emptyInstance = new VertexAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
