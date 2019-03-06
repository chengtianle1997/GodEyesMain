#define _CRT_SECURE_NO_WARNINGS
#define _AFXDLL

#include "ReadConfig.h"
#include "AnalyseConfig.h"
#include "afxwin.h"

//ConfigList *configlist;

int DevNum = 0;
STARTUPINFO StartInfo = { sizeof(StartInfo) };
PROCESS_INFORMATION ProcInfo0, ProcInfo1, ProcInfo2, ProcInfo3, ProcInfo4, ProcInfo5, ProcInfo6, ProcInfo7, ProcInfo8, ProcInfo9;

//≥Ã–ÚÕ£÷π÷∏¡Óº‡Ã˝
BOOL __stdcall ConsoleHandler(DWORD cevent) {
	//char mesg[128];

	switch (cevent)
	{

	case CTRL_C_EVENT:
	{
		printf("Terminate Process");
		if (ProcInfo0.hProcess!=NULL) {
			TerminateProcess(ProcInfo0.hProcess,0);
		}
		if (ProcInfo1.hProcess != NULL) {
			TerminateProcess(ProcInfo1.hProcess, 0);
		}
		if (ProcInfo2.hProcess != NULL) {
			TerminateProcess(ProcInfo2.hProcess, 0);
		}
		if (ProcInfo3.hProcess != NULL) {
			TerminateProcess(ProcInfo3.hProcess, 0);
		}
		if (ProcInfo4.hProcess != NULL) {
			TerminateProcess(ProcInfo4.hProcess, 0);
		}
		if (ProcInfo5.hProcess != NULL) {
			TerminateProcess(ProcInfo5.hProcess, 0);
		}
		if (ProcInfo6.hProcess != NULL) {
			TerminateProcess(ProcInfo6.hProcess, 0);
		}
		if (ProcInfo7.hProcess != NULL) {
			TerminateProcess(ProcInfo7.hProcess, 0);
		}
		if (ProcInfo8.hProcess != NULL) {
			TerminateProcess(ProcInfo8.hProcess, 0);
		}
		TerminateProcess(ProcInfo9.hProcess, 0);
	}
	break;
	case CTRL_BREAK_EVENT:
		
		break;
	case CTRL_CLOSE_EVENT:
		
	{
		
	}
	break;

	case CTRL_LOGOFF_EVENT:
		
		break;
	case CTRL_SHUTDOWN_EVENT:
		
		break;

	}
	return true;
}

int main()
{
	
	StartInfo.dwFlags = STARTF_USESHOWWINDOW;
	StartInfo.wShowWindow = TRUE;

	ConfigList *configlist = (ConfigList*)malloc(sizeof(ConfigList));

	//memset(configlist, 0, sizeof(ConfigList));

	//ReadConfig Readconfig;

	const char *Filename = "config.ini";

	FILE *configFile = fopen(Filename, "r");

	ReadFile(configFile,configlist);

	const char* Appaddr = configlist->AppAddr;
	const char* ServerAppaddr = configlist->ServerAppAddr;

	char* cmd0 = (char*)malloc(102400);
	char* cmd1 = (char*)malloc(102400);
	char* cmd2 = (char*)malloc(102400);
	char* cmd3 = (char*)malloc(102400);
	char* cmd4 = (char*)malloc(102400);
	char* cmd5 = (char*)malloc(102400);
	char* cmd6 = (char*)malloc(102400);
	char* cmd7 = (char*)malloc(102400);
	char* cmd8 = (char*)malloc(102400);
	char* cmd9 = (char*)malloc(102400);


	AnalyseConfig Analyseconfig;

	//Start The Server First
	Analyseconfig.AnalyseConfigServer(ServerAppaddr, configlist, cmd9);
	TCHAR *tcmd9 = { TEXT(cmd9) };
	CreateProcess(NULL, tcmd9, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo9);

	Analyseconfig.AnalyseConfigCamera0(Appaddr, configlist, cmd0);
	Analyseconfig.AnalyseConfigCamera1(Appaddr, configlist, cmd1);
	Analyseconfig.AnalyseConfigCamera2(Appaddr, configlist, cmd2);
	Analyseconfig.AnalyseConfigCamera3(Appaddr, configlist, cmd3);
	Analyseconfig.AnalyseConfigCamera4(Appaddr, configlist, cmd4);
	Analyseconfig.AnalyseConfigCamera5(Appaddr, configlist, cmd5);
	Analyseconfig.AnalyseConfigCamera6(Appaddr, configlist, cmd6);
	Analyseconfig.AnalyseConfigCamera7(Appaddr, configlist, cmd7);
	Analyseconfig.AnalyseConfigCamera8(Appaddr, configlist, cmd8);

	TCHAR *tcmd0 = { TEXT(cmd0) };
	TCHAR *tcmd1 = { TEXT(cmd1) };
	TCHAR *tcmd2 = { TEXT(cmd2) };
	TCHAR *tcmd3 = { TEXT(cmd3) };
	TCHAR *tcmd4 = { TEXT(cmd4) };
	TCHAR *tcmd5 = { TEXT(cmd5) };
	TCHAR *tcmd6 = { TEXT(cmd6) };
	TCHAR *tcmd7 = { TEXT(cmd7) };
	TCHAR *tcmd8 = { TEXT(cmd8) };

	int Devnum = atoi(configlist->DeviceNum);

	//Start All the Camera
	switch (Devnum)
	{
	case 0:
		break;
	case 1:
		CreateProcess(NULL, tcmd0, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo0);
		break;
	case 2:
		CreateProcess(NULL, tcmd0, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo0);
		CreateProcess(NULL, tcmd1, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo1);
		break;
	case 3:
		CreateProcess(NULL, tcmd0, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo0);
		CreateProcess(NULL, tcmd1, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo1);
		CreateProcess(NULL, tcmd2, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo2);
		break;
	case 4:
		CreateProcess(NULL, tcmd0, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo0);
		CreateProcess(NULL, tcmd1, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo1);
		CreateProcess(NULL, tcmd2, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo2);
		CreateProcess(NULL, tcmd3, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo3);
		break;
	case 5:
		CreateProcess(NULL, tcmd0, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo0);
		CreateProcess(NULL, tcmd1, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo1);
		CreateProcess(NULL, tcmd2, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo2);
		CreateProcess(NULL, tcmd3, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo3);
		CreateProcess(NULL, tcmd4, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo4);
		break;
	case 6:
		CreateProcess(NULL, tcmd0, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo0);
		CreateProcess(NULL, tcmd1, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo1);
		CreateProcess(NULL, tcmd2, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo2);
		CreateProcess(NULL, tcmd3, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo3);
		CreateProcess(NULL, tcmd4, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo4);
		CreateProcess(NULL, tcmd5, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo5);
		break;
	case 7:
		CreateProcess(NULL, tcmd0, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo0);
		CreateProcess(NULL, tcmd1, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo1);
		CreateProcess(NULL, tcmd2, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo2);
		CreateProcess(NULL, tcmd3, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo3);
		CreateProcess(NULL, tcmd4, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo4);
		CreateProcess(NULL, tcmd5, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo5);
		CreateProcess(NULL, tcmd6, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo6);
		break;
	case 8:
		CreateProcess(NULL, tcmd0, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo0);
		CreateProcess(NULL, tcmd1, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo1);
		CreateProcess(NULL, tcmd2, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo2);
		CreateProcess(NULL, tcmd3, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo3);
		CreateProcess(NULL, tcmd4, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo4);
		CreateProcess(NULL, tcmd5, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo5);
		CreateProcess(NULL, tcmd6, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo6);
		CreateProcess(NULL, tcmd7, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo7);
		CreateProcess(NULL, tcmd8, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo8);
		break;
	}

	//∑≈÷√≥Ã–Úº‡Ã˝
	SetConsoleCtrlHandler(ConsoleHandler, TRUE);



	

	free(configlist);
	free(cmd0);
	free(cmd1);
	free(cmd2);
	free(cmd3);
	free(cmd4);
	free(cmd5);
	free(cmd6);
	free(cmd7);
	free(cmd8);
	return 0;
}