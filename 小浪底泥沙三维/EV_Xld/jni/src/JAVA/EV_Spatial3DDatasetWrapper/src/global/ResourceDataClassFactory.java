package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ResourceData emptyInstance = new ResourceData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
