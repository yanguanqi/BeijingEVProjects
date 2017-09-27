package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NatoolstopClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Natoolstop emptyInstance = new Natoolstop(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
