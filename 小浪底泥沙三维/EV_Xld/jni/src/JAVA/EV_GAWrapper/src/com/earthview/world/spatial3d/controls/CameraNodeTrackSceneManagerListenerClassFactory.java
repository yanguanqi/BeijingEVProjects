package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CameraNodeTrackSceneManagerListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CameraNodeTrackSceneManagerListener emptyInstance = new CameraNodeTrackSceneManagerListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
