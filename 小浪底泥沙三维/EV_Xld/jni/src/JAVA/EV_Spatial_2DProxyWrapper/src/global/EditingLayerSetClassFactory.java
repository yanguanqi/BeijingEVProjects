package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingLayerSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingLayerSet emptyInstance = new EditingLayerSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
