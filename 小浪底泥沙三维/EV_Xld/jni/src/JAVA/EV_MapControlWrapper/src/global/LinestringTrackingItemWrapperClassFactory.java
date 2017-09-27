package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LinestringTrackingItemWrapperClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LinestringTrackingItemWrapper emptyInstance = new LinestringTrackingItemWrapper(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
