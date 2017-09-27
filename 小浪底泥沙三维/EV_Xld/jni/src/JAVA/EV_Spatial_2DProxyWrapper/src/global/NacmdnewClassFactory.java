package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NacmdnewClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Nacmdnew emptyInstance = new Nacmdnew(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
