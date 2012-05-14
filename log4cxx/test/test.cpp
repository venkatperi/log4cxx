// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <log4cxx/helpers/pool.h>
#include <log4cxx/fileappender.h>
#include <log4cxx/patternlayout.h>
#include "log4cxx/basicconfigurator.h"
#include <log4cxx/propertyconfigurator.h>

using namespace log4cxx;
using namespace log4cxx::helpers;

int _tmain(int argc, _TCHAR* argv[])
{
	 //PropertyConfigurator::configure(argv[1]);

	LoggerPtr logger(Logger::getLogger("com.foo"));
	PatternLayout l();

	LOG4CXX_INFO(logger, "Simple message text.");

	
	return 0;
}

