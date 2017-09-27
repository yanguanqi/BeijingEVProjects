/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			public enum LOGSCHEDULE
			{
						MONTHLY = 0,
						WEEKLY,
						DAILY,
						TWICE_DAILY,
						HOURLY,
						MINUTELY
			
			}

			public enum LOGLEVEL
			{
						FATAL_LEVEL = 0,
						ERROR_LEVEL,
						WARN_LEVEL,
						INFO_LEVEL,
						DEBUG_LEVEL,
						TRACE_LEVEL,
						OFF_LEVEL
			
			}

			public enum APPENDERTYPE
			{
						CONSOLE = 0,
						COMMONFILE,
						ROLLINGFILE,
						DAILYROLLINGFILE,
						REMOTE
			
			}

		}
	}
}
