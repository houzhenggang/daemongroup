/*******************************************************************************
Copyright (C) Autelan Technology


This software file is owned and distributed by Autelan Technology 
********************************************************************************


THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR 
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
********************************************************************************
* AsdDbusPathInit.c
*
*
* CREATOR:
* autelan.software.WirelessControl. team
*
* DESCRIPTION:
* asd module
*
*
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include "wcpss/waw.h"
#include "wcpss/wid/WID.h"
#include "asd.h"
#include "dbus/asd/ASDDbusDef1.h"

void InitPath(unsigned int vrrid,char *buf){
	int len = strlen(buf);
	#ifndef _DISTRIBUTION_
		sprintf(buf+len,"%d",vrrid);
	#else
		sprintf(buf+len,"%d_%d",local,vrrid);
	#endif
	if(buf == ASD_DBUS_STA_OBJPATH){
			len = strlen(buf);
			sprintf(buf+len,"/%s","sta");
	}
	else if(buf == ASD_DBUS_STA_INTERFACE)
	{	
			len = strlen(buf);
			sprintf(buf+len,".%s","sta");			
	}
	else if(buf == ASD_DBUS_SECURITY_OBJPATH){
			len = strlen(buf);
			sprintf(buf+len,"/%s","security");
	}
	else if(buf == ASD_DBUS_SECURITY_INTERFACE)
	{	
			len = strlen(buf);
			sprintf(buf+len,".%s","security");			
	}
	else if(buf == ASD_DBUS_AC_GROUP_OBJPATH){
			len = strlen(buf);
			sprintf(buf+len,"/%s","acgroup");
	}
	else if(buf == ASD_DBUS_AC_GROUP_INTERFACE)
	{	
			len = strlen(buf);
			sprintf(buf+len,".%s","acgroup");			
	}
} 

void CWASDDbusPathInit(){
	InitPath(vrrid,ASD_DBUS_BUSNAME);
	InitPath(vrrid,ASD_DBUS_OBJPATH);
	InitPath(vrrid,ASD_DBUS_INTERFACE);
	InitPath(vrrid,ASD_DBUS_STA_OBJPATH);
	InitPath(vrrid,ASD_DBUS_STA_INTERFACE);
	InitPath(vrrid,ASD_DBUS_SECURITY_OBJPATH);
	InitPath(vrrid,ASD_DBUS_SECURITY_INTERFACE);	
	InitPath(vrrid,ASD_DBUS_AC_GROUP_OBJPATH);
	InitPath(vrrid,ASD_DBUS_AC_GROUP_INTERFACE);
}


