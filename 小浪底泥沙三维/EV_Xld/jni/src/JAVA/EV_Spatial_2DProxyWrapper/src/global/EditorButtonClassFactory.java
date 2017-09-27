package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditorButtonClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditorButton emptyInstance = new EditorButton(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
