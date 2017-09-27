package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LinkControllerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LinkController emptyInstance = new LinkController(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
