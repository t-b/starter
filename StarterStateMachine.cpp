/*----- PROTECTED REGION ID(StarterStateMachine.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        StarterStateMachine.cpp
//
// description : C++ source for the �name� and its alowed
//               methods for commands and attributes
//
// project :     Starter for Tango Administration.
//
// $Author$
//
// Copyright (C) :      2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014
//						European Synchrotron Radiation Facility,2015
//                      BP 220, Grenoble 38043
//                      FRANCE
//
// This file is part of Tango.
//
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
//
// $Revision$
// $Date$
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================



#include <Starter.h>
#include <StarterClass.h>

/*----- PROTECTED REGION END -----*/	//	Starter::StarterStateMachine.cpp

//================================================================
//  States   |  Description
//================================================================
//  UNKNOWN  |  This device server has NOT been correctly initialised.
//  ON       |  All controlled servers are running.
//  ALARM    |  At least one controled device server is not running.
//  MOVING   |  The Sarter is starting servers.


namespace Starter_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Starter::is_NotifdState_allowed()
 *	Description : Execution allowed for NotifdState attribute
 */
//--------------------------------------------------------
bool Starter::is_NotifdState_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for NotifdState attribute in read access.
	/*----- PROTECTED REGION ID(Starter::NotifdStateStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Starter::NotifdStateStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_HostState_allowed()
 *	Description : Execution allowed for HostState attribute
 */
//--------------------------------------------------------
bool Starter::is_HostState_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for HostState attribute in read access.
	/*----- PROTECTED REGION ID(Starter::HostStateStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Starter::HostStateStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_RunningServers_allowed()
 *	Description : Execution allowed for RunningServers attribute
 */
//--------------------------------------------------------
bool Starter::is_RunningServers_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for RunningServers attribute in read access.
	/*----- PROTECTED REGION ID(Starter::RunningServersStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Starter::RunningServersStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_StoppedServers_allowed()
 *	Description : Execution allowed for StoppedServers attribute
 */
//--------------------------------------------------------
bool Starter::is_StoppedServers_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for StoppedServers attribute in read access.
	/*----- PROTECTED REGION ID(Starter::StoppedServersStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Starter::StoppedServersStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_Servers_allowed()
 *	Description : Execution allowed for Servers attribute
 */
//--------------------------------------------------------
bool Starter::is_Servers_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for Servers attribute in read access.
	/*----- PROTECTED REGION ID(Starter::ServersStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Starter::ServersStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Starter::is_DevStart_allowed()
 *	Description : Execution allowed for DevStart attribute
 */
//--------------------------------------------------------
bool Starter::is_DevStart_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevStart command.
	/*----- PROTECTED REGION ID(Starter::DevStartStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Starter::DevStartStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_DevStop_allowed()
 *	Description : Execution allowed for DevStop attribute
 */
//--------------------------------------------------------
bool Starter::is_DevStop_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevStop command.
	/*----- PROTECTED REGION ID(Starter::DevStopStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Starter::DevStopStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_DevStartAll_allowed()
 *	Description : Execution allowed for DevStartAll attribute
 */
//--------------------------------------------------------
bool Starter::is_DevStartAll_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevStartAll command.
	/*----- PROTECTED REGION ID(Starter::DevStartAllStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Starter::DevStartAllStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_DevStopAll_allowed()
 *	Description : Execution allowed for DevStopAll attribute
 */
//--------------------------------------------------------
bool Starter::is_DevStopAll_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevStopAll command.
	/*----- PROTECTED REGION ID(Starter::DevStopAllStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Starter::DevStopAllStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_DevGetRunningServers_allowed()
 *	Description : Execution allowed for DevGetRunningServers attribute
 */
//--------------------------------------------------------
bool Starter::is_DevGetRunningServers_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevGetRunningServers command.
	/*----- PROTECTED REGION ID(Starter::DevGetRunningServersStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Starter::DevGetRunningServersStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_DevGetStopServers_allowed()
 *	Description : Execution allowed for DevGetStopServers attribute
 */
//--------------------------------------------------------
bool Starter::is_DevGetStopServers_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevGetStopServers command.
	/*----- PROTECTED REGION ID(Starter::DevGetStopServersStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Starter::DevGetStopServersStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_DevReadLog_allowed()
 *	Description : Execution allowed for DevReadLog attribute
 */
//--------------------------------------------------------
bool Starter::is_DevReadLog_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevReadLog command.
	/*----- PROTECTED REGION ID(Starter::DevReadLogStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Starter::DevReadLogStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_HardKillServer_allowed()
 *	Description : Execution allowed for HardKillServer attribute
 */
//--------------------------------------------------------
bool Starter::is_HardKillServer_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for HardKillServer command.
	/*----- PROTECTED REGION ID(Starter::HardKillServerStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Starter::HardKillServerStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_NotifyDaemonState_allowed()
 *	Description : Execution allowed for NotifyDaemonState attribute
 */
//--------------------------------------------------------
bool Starter::is_NotifyDaemonState_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for NotifyDaemonState command.
	/*----- PROTECTED REGION ID(Starter::NotifyDaemonStateStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Starter::NotifyDaemonStateStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_ResetStatistics_allowed()
 *	Description : Execution allowed for ResetStatistics attribute
 */
//--------------------------------------------------------
bool Starter::is_ResetStatistics_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for ResetStatistics command.
	/*----- PROTECTED REGION ID(Starter::ResetStatisticsStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Starter::ResetStatisticsStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Starter::is_UpdateServersInfo_allowed()
 *	Description : Execution allowed for UpdateServersInfo attribute
 */
//--------------------------------------------------------
bool Starter::is_UpdateServersInfo_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for UpdateServersInfo command.
	/*----- PROTECTED REGION ID(Starter::UpdateServersInfoStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Starter::UpdateServersInfoStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(Starter::StarterStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	Starter::StarterStateAllowed.AdditionalMethods

}	//	End of namespace
