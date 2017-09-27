package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NatoolbarriarClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Natoolbarriar emptyInstance = new Natoolbarriar(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
