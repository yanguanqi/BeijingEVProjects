package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NatooladjustClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Natooladjust emptyInstance = new Natooladjust(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
