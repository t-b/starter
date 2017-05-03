/*----- PROTECTED REGION ID(StarterClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        StarterClass.h
//
// description : Include for the StarterClass root class.
//               This class is the singleton class for.
//               the Starter device class..
//               It contains all properties and methods which the .
//               Starter requires only once e.g. the commands.
//
// project :     Starter for Tango Administration.
//
// Copyright (C) :      2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015
//						European Synchrotron Radiation Facility
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
// $Author$
//
// $Revision$
// $Date$
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef STARTERCLASS_H
#define STARTERCLASS_H

#include <tango.h>
#include <Starter.h>

/*----- PROTECTED REGION END -----*/	//	StarterClass.h


namespace Starter_ns
{
/*----- PROTECTED REGION ID(StarterClass::classes for dynamic creation) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	StarterClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute NotifdState class definition
class NotifdStateAttrib: public Tango::Attr
{
public:
	NotifdStateAttrib():Attr("NotifdState",
			Tango::DEV_STATE, Tango::READ) {};
	~NotifdStateAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Starter *>(dev))->read_NotifdState(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Starter *>(dev))->is_NotifdState_allowed(ty);}
};

//	Attribute HostState class definition
class HostStateAttrib: public Tango::Attr
{
public:
	HostStateAttrib():Attr("HostState",
			Tango::DEV_SHORT, Tango::READ) {};
	~HostStateAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Starter *>(dev))->read_HostState(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Starter *>(dev))->is_HostState_allowed(ty);}
};

//	Attribute RunningServers class definition
class RunningServersAttrib: public Tango::SpectrumAttr
{
public:
	RunningServersAttrib():SpectrumAttr("RunningServers",
			Tango::DEV_STRING, Tango::READ, 1024) {};
	~RunningServersAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Starter *>(dev))->read_RunningServers(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Starter *>(dev))->is_RunningServers_allowed(ty);}
};

//	Attribute StoppedServers class definition
class StoppedServersAttrib: public Tango::SpectrumAttr
{
public:
	StoppedServersAttrib():SpectrumAttr("StoppedServers",
			Tango::DEV_STRING, Tango::READ, 1024) {};
	~StoppedServersAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Starter *>(dev))->read_StoppedServers(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Starter *>(dev))->is_StoppedServers_allowed(ty);}
};

//	Attribute Servers class definition
class ServersAttrib: public Tango::SpectrumAttr
{
public:
	ServersAttrib():SpectrumAttr("Servers",
			Tango::DEV_STRING, Tango::READ, 1024) {};
	~ServersAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Starter *>(dev))->read_Servers(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Starter *>(dev))->is_Servers_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command DevStart class definition
class DevStartClass : public Tango::Command
{
public:
	DevStartClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevStartClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevStartClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Starter *>(dev))->is_DevStart_allowed(any);}
};

//	Command DevStop class definition
class DevStopClass : public Tango::Command
{
public:
	DevStopClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevStopClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevStopClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Starter *>(dev))->is_DevStop_allowed(any);}
};

//	Command DevStartAll class definition
class DevStartAllClass : public Tango::Command
{
public:
	DevStartAllClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevStartAllClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevStartAllClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Starter *>(dev))->is_DevStartAll_allowed(any);}
};

//	Command DevStopAll class definition
class DevStopAllClass : public Tango::Command
{
public:
	DevStopAllClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevStopAllClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevStopAllClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Starter *>(dev))->is_DevStopAll_allowed(any);}
};

//	Command DevGetRunningServers class definition
class DevGetRunningServersClass : public Tango::Command
{
public:
	DevGetRunningServersClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevGetRunningServersClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevGetRunningServersClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Starter *>(dev))->is_DevGetRunningServers_allowed(any);}
};

//	Command DevGetStopServers class definition
class DevGetStopServersClass : public Tango::Command
{
public:
	DevGetStopServersClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevGetStopServersClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevGetStopServersClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Starter *>(dev))->is_DevGetStopServers_allowed(any);}
};

//	Command DevReadLog class definition
class DevReadLogClass : public Tango::Command
{
public:
	DevReadLogClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevReadLogClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevReadLogClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Starter *>(dev))->is_DevReadLog_allowed(any);}
};

//	Command HardKillServer class definition
class HardKillServerClass : public Tango::Command
{
public:
	HardKillServerClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	HardKillServerClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~HardKillServerClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Starter *>(dev))->is_HardKillServer_allowed(any);}
};

//	Command NotifyDaemonState class definition
class NotifyDaemonStateClass : public Tango::Command
{
public:
	NotifyDaemonStateClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	NotifyDaemonStateClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~NotifyDaemonStateClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Starter *>(dev))->is_NotifyDaemonState_allowed(any);}
};

//	Command ResetStatistics class definition
class ResetStatisticsClass : public Tango::Command
{
public:
	ResetStatisticsClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ResetStatisticsClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ResetStatisticsClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Starter *>(dev))->is_ResetStatistics_allowed(any);}
};

//	Command UpdateServersInfo class definition
class UpdateServersInfoClass : public Tango::Command
{
public:
	UpdateServersInfoClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	UpdateServersInfoClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~UpdateServersInfoClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Starter *>(dev))->is_UpdateServersInfo_allowed(any);}
};


/**
 *	The StarterClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  StarterClass : public Tango::DeviceClass
#else
class StarterClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(StarterClass::Additionnal DServer data members) ENABLED START -----*/
public:

	/*----- PROTECTED REGION END -----*/	//	StarterClass::Additionnal DServer data members

	//	Class properties data members
	public:
		//	AutoRestartDuration:	If this property is greater than 0, if a server has been running more than the specified value (in minutes), and has failed, it will be restart automaticly.
		Tango::DevLong	autoRestartDuration;
		//	LogFileHome:	The home directory to log servers traces.
		//  For Linux the default value is /var/tmp
		//  For Win32 it is c:\temp
		string	logFileHome;
		//	NbStartupLevels:	Number of startup levels managed by starter.
		Tango::DevShort	nbStartupLevels;
		//	ReadInfoDbPeriod:	Period to read database for new info if not fired from Database server.
		Tango::DevShort	readInfoDbPeriod;
		//	ServerStartupTimeout:	Timeout on device server startup in seconds.
		Tango::DevLong	serverStartupTimeout;
		//	StartServersAtStartup:	Skip starting servers at startup if false. It a way to do not have a big re-start of many servers after a power cut.
		Tango::DevBoolean	startServersAtStartup;
		//	UseEvents:	Use events if not null.
		Tango::DevShort	useEvents;
	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static StarterClass *init(const char *);
		static StarterClass *instance();
		~StarterClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		StarterClass(string &);
		static StarterClass *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void pipe_factory();
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	Starter_H
