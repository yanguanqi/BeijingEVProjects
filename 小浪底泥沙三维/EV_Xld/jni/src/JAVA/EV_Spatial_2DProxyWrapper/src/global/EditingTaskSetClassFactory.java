package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingTaskSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingTaskSet emptyInstance = new EditingTaskSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
