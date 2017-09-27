package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingEllipticSectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingEllipticSector emptyInstance = new EditingEllipticSector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
