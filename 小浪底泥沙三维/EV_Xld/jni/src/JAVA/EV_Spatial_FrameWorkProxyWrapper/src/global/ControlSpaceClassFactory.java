package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControlSpaceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ControlSpace emptyInstance = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
