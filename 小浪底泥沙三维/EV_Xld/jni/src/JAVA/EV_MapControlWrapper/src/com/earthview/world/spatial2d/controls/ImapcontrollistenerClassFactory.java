package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImapcontrollistenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Imapcontrollistener emptyInstance = new Imapcontrollistener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
