#pragma once
#include "ReadConfig.h"

class AnalyseConfig
{
public:
	void AnalyseConfigCamera0(const char* Appaddr, ConfigList *configlist, char* cmd);
	void AnalyseConfigCamera1(const char* Appaddr, ConfigList *configlist, char* cmd);
	void AnalyseConfigCamera2(const char* Appaddr, ConfigList *configlist, char* cmd);
	void AnalyseConfigCamera3(const char* Appaddr, ConfigList *configlist, char* cmd);
	void AnalyseConfigCamera4(const char* Appaddr, ConfigList *configlist, char* cmd);
	void AnalyseConfigCamera5(const char* Appaddr, ConfigList *configlist, char* cmd);
	void AnalyseConfigCamera6(const char* Appaddr, ConfigList *configlist, char* cmd);
	void AnalyseConfigCamera7(const char* Appaddr, ConfigList *configlist, char* cmd);
	void AnalyseConfigCamera8(const char* Appaddr, ConfigList *configlist, char* cmd);

	void AnalyseConfigServer(const char* Serveraddr, ConfigList *configlist, char* cmd);
};