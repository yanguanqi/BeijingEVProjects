package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceDataListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ResourceDataList emptyInstance = new ResourceDataList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
