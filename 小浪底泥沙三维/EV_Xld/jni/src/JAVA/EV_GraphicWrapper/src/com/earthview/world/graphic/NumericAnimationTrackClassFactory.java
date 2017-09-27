package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NumericAnimationTrackClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NumericAnimationTrack emptyInstance = new NumericAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
