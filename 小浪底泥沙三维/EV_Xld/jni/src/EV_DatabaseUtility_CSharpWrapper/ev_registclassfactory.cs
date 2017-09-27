using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_DatabaseUtility_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlDriverCreatorBase", new EarthView.World.Core.Database.SqlDriverCreatorBaseClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlDriverCreatorBaseProxy", new EarthView.World.Core.Database.SqlDriverCreatorBaseClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlDatabase", new EarthView.World.Core.Database.SqlDatabaseClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlDriver", new EarthView.World.Core.Database.SqlDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlDriverProxy", new EarthView.World.Core.Database.SqlDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlError", new EarthView.World.Core.Database.SqlErrorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlField", new EarthView.World.Core.Database.SqlFieldClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlIndex", new EarthView.World.Core.Database.SqlIndexClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlQuery", new EarthView.World.Core.Database.SqlQueryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlRecord", new EarthView.World.Core.Database.SqlRecordClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlResult", new EarthView.World.Core.Database.SqlResultClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Database::CSqlResultProxy", new EarthView.World.Core.Database.SqlResultClassFactory());
	}
}

