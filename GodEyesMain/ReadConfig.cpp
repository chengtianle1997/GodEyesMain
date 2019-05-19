
#define _CRT_SECURE_NO_WARNINGS
#include "ReadConfig.h"


void ReadFile(FILE *configFile, ConfigList *configlist)
{

	char LineBuf[MAX_LEN] = { 0 };

	memset(configlist, 0, sizeof(ConfigList));

	while (NULL != fgets(LineBuf, sizeof(LineBuf), configFile))
	{
		size_t bufLen = strlen(LineBuf);
		if ('\r' == LineBuf[bufLen - 1] || '\n' == LineBuf[bufLen - 1])
		{
			LineBuf[bufLen - 1] = '\0';
		}
		char *pos = strchr(LineBuf, ':');
		if (NULL != pos)
		{
			*pos = '\0';
			pos++;
			if (0 == strcmp(LineBuf, "AppAddr"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->AppAddr, pos);
			}
			if (0 == strcmp(LineBuf, "ServerAppAddr"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->ServerAppAddr, pos);
			}
			if (0 == strcmp(LineBuf, "DeviceNum"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->DeviceNum, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Function"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Function, pos);
			}

			if (0 == strcmp(LineBuf, "Camera0Exptime"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Exptime, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Expauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Expauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Gain"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Gain, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Gainauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Gainauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Frate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Frate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Devid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Devid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0usrid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0usrid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Roih"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Roih, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Roiw"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Roiw, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Roix"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Roix, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Roiy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Roiy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Stampsel"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Stampsel, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Stampon"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Stampon, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Tsele"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Tsele, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Tmode"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Tmode, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Tsrc"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Tsrc, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Tacti"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Tacti, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Tdelay"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Tdelay, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Tcaen"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Tcaen, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Bmm"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Bmm, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Phi"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Phi, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Uo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Uo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Vo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Vo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Fx"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Fx, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Fy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Fy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0K1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0K1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0K2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0K2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0P1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0P1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0P2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0P2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Emax"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Emax, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Emin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Emin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Xr"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Xr, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Gthread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Gthread, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Doorin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Doorin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Fcut"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Fcut, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Brate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Brate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Btol"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Btol, pos);
			}
			if (0 == strcmp(LineBuf, "Camera0Ethread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera0Ethread, pos);
			}
			//---------------------------------------------------------------


			if (0 == strcmp(LineBuf, "Camera1Function"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Function, pos);
			}

			if (0 == strcmp(LineBuf, "Camera1Exptime"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Exptime, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Expauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Expauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Gain"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Gain, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Gainauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Gainauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Frate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Frate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Devid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Devid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1usrid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1usrid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Roih"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Roih, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Roiw"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Roiw, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Roix"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Roix, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Roiy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Roiy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Stampsel"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Stampsel, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Stampon"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Stampon, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Tsele"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Tsele, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Tmode"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Tmode, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Tsrc"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Tsrc, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Tacti"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Tacti, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Tdelay"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Tdelay, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Tcaen"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Tcaen, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Bmm"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Bmm, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Phi"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Phi, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Uo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Uo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Vo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Vo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Fx"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Fx, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Fy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Fy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1K1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1K1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1K2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1K2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1P1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1P1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1P2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1P2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Emax"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Emax, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Emin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Emin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Xr"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Xr, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Gthread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Gthread, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Doorin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Doorin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Fcut"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Fcut, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Brate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Brate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Btol"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Btol, pos);
			}
			if (0 == strcmp(LineBuf, "Camera1Ethread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera1Ethread, pos);
			}

			//---------------------------------------------------------------

			if (0 == strcmp(LineBuf, "Camera2Function"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Function, pos);
			}

			if (0 == strcmp(LineBuf, "Camera2Exptime"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Exptime, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Expauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Expauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Gain"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Gain, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Gainauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Gainauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Frate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Frate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Devid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Devid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2usrid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2usrid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Roih"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Roih, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Roiw"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Roiw, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Roix"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Roix, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Roiy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Roiy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Stampsel"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Stampsel, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Stampon"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Stampon, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Tsele"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Tsele, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Tmode"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Tmode, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Tsrc"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Tsrc, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Tacti"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Tacti, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Tdelay"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Tdelay, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Tcaen"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Tcaen, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Bmm"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Bmm, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Phi"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Phi, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Uo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Uo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Vo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Vo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Fx"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Fx, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Fy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Fy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2K1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2K1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2K2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2K2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2P1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2P1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2P2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2P2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Emax"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Emax, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Emin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Emin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Xr"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Xr, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Gthread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Gthread, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Doorin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Doorin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Fcut"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Fcut, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Brate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Brate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Btol"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Btol, pos);
			}
			if (0 == strcmp(LineBuf, "Camera2Ethread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera2Ethread, pos);
			}

			//-----------------------------------------------------------------
			if (0 == strcmp(LineBuf, "Camera3Function"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Function, pos);
			}

			if (0 == strcmp(LineBuf, "Camera3Exptime"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Exptime, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Expauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Expauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Gain"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Gain, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Gainauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Gainauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Frate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Frate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Devid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Devid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3usrid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3usrid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Roih"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Roih, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Roiw"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Roiw, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Roix"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Roix, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Roiy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Roiy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Stampsel"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Stampsel, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Stampon"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Stampon, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Tsele"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Tsele, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Tmode"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Tmode, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Tsrc"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Tsrc, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Tacti"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Tacti, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Tdelay"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Tdelay, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Tcaen"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Tcaen, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Bmm"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Bmm, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Phi"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Phi, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Uo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Uo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Vo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Vo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Fx"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Fx, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Fy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Fy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3K1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3K1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3K2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3K2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3P1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3P1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3P2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3P2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Emax"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Emax, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Emin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Emin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Xr"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Xr, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Gthread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Gthread, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Doorin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Doorin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Fcut"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Fcut, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Brate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Brate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Btol"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Btol, pos);
			}
			if (0 == strcmp(LineBuf, "Camera3Ethread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera3Ethread, pos);
			}

			//---------------------------------------------------------------


			if (0 == strcmp(LineBuf, "Camera4Function"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Function, pos);
			}

			if (0 == strcmp(LineBuf, "Camera4Exptime"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Exptime, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Expauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Expauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Gain"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Gain, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Gainauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Gainauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Frate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Frate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Devid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Devid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4usrid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4usrid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Roih"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Roih, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Roiw"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Roiw, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Roix"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Roix, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Roiy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Roiy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Stampsel"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Stampsel, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Stampon"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Stampon, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Tsele"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Tsele, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Tmode"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Tmode, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Tsrc"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Tsrc, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Tacti"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Tacti, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Tdelay"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Tdelay, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Tcaen"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Tcaen, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Bmm"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Bmm, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Phi"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Phi, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Uo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Uo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Vo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Vo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Fx"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Fx, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Fy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Fy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4K1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4K1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4K2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4K2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4P1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4P1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4P2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4P2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Emax"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Emax, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Emin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Emin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Xr"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Xr, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Gthread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Gthread, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Doorin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Doorin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Fcut"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Fcut, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Brate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Brate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Btol"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Btol, pos);
			}
			if (0 == strcmp(LineBuf, "Camera4Ethread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera4Ethread, pos);
			}

			//-----------------------------------------------------------------

			if (0 == strcmp(LineBuf, "Camera5Function"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Function, pos);
			}

			if (0 == strcmp(LineBuf, "Camera5Exptime"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Exptime, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Expauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Expauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Gain"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Gain, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Gainauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Gainauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Frate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Frate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Devid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Devid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5usrid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5usrid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Roih"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Roih, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Roiw"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Roiw, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Roix"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Roix, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Roiy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Roiy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Stampsel"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Stampsel, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Stampon"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Stampon, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Tsele"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Tsele, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Tmode"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Tmode, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Tsrc"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Tsrc, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Tacti"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Tacti, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Tdelay"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Tdelay, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Tcaen"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Tcaen, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Bmm"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Bmm, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Phi"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Phi, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Uo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Uo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Vo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Vo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Fx"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Fx, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Fy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Fy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5K1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5K1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5K2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5K2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5P1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5P1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5P2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5P2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Emax"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Emax, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Emin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Emin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Xr"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Xr, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Gthread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Gthread, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Doorin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Doorin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Fcut"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Fcut, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Brate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Brate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Btol"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Btol, pos);
			}
			if (0 == strcmp(LineBuf, "Camera5Ethread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera5Ethread, pos);
			}

			//-----------------------------------------------------------------
			if (0 == strcmp(LineBuf, "Camera6Function"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Function, pos);
			}

			if (0 == strcmp(LineBuf, "Camera6Exptime"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Exptime, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Expauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Expauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Gain"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Gain, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Gainauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Gainauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Frate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Frate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Devid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Devid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6usrid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6usrid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Roih"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Roih, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Roiw"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Roiw, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Roix"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Roix, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Roiy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Roiy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Stampsel"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Stampsel, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Stampon"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Stampon, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Tsele"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Tsele, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Tmode"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Tmode, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Tsrc"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Tsrc, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Tacti"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Tacti, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Tdelay"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Tdelay, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Tcaen"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Tcaen, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Bmm"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Bmm, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Phi"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Phi, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Uo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Uo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Vo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Vo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Fx"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Fx, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Fy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Fy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6K1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6K1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6K2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6K2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6P1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6P1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6P2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6P2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Emax"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Emax, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Emin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Emin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Xr"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Xr, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Gthread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Gthread, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Doorin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Doorin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Fcut"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Fcut, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Brate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Brate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Btol"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Btol, pos);
			}
			if (0 == strcmp(LineBuf, "Camera6Ethread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera6Ethread, pos);
			}

			//-----------------------------------------------------------------
			if (0 == strcmp(LineBuf, "Camera7Function"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Function, pos);
			}

			if (0 == strcmp(LineBuf, "Camera7Exptime"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Exptime, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Expauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Expauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Gain"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Gain, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Gainauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Gainauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Frate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Frate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Devid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Devid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7usrid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7usrid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Roih"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Roih, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Roiw"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Roiw, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Roix"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Roix, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Roiy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Roiy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Stampsel"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Stampsel, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Stampon"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Stampon, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Tsele"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Tsele, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Tmode"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Tmode, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Tsrc"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Tsrc, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Tacti"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Tacti, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Tdelay"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Tdelay, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Tcaen"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Tcaen, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Bmm"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Bmm, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Phi"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Phi, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Uo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Uo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Vo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Vo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Fx"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Fx, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Fy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Fy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7K1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7K1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7K2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7K2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7P1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7P1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7P2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7P2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Emax"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Emax, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Emin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Emin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Xr"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Xr, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Gthread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Gthread, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Doorin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Doorin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Fcut"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Fcut, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Brate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Brate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Btol"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Btol, pos);
			}
			if (0 == strcmp(LineBuf, "Camera7Ethread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera7Ethread, pos);
			}

			//-----------------------------------------------------------------
			if (0 == strcmp(LineBuf, "Camera8Function"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Function, pos);
			}

			if (0 == strcmp(LineBuf, "Camera8Exptime"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Exptime, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Expauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Expauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Gain"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Gain, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Gainauto"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Gainauto, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Frate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Frate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Devid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Devid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8usrid"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8usrid, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Roih"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Roih, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Roiw"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Roiw, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Roix"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Roix, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Roiy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Roiy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Stampsel"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Stampsel, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Stampon"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Stampon, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Tsele"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Tsele, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Tmode"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Tmode, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Tsrc"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Tsrc, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Tacti"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Tacti, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Tdelay"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Tdelay, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Tcaen"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Tcaen, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Bmm"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Bmm, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Phi"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Phi, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Uo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Uo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Vo"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Vo, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Fx"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Fx, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Fy"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Fy, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8K1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8K1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8K2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8K2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8P1"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8P1, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8P2"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8P2, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Emax"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Emax, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Emin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Emin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Xr"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Xr, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Gthread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Gthread, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Doorin"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Doorin, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Fcut"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Fcut, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Brate"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Brate, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Btol"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Btol, pos);
			}
			if (0 == strcmp(LineBuf, "Camera8Ethread"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Camera8Ethread, pos);
			}
			if (0 == strcmp(LineBuf, "Filepath"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Filepath, pos);
			}
			if (0 == strcmp(LineBuf, "Format"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->Format, pos);
			}
			if (0 == strcmp(LineBuf, "ServerPort"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->ServerPort, pos);
			}
			if (0 == strcmp(LineBuf, "ServerAddr"))
			{
				for (; *pos == ' '; pos++) {}
				strcpy(configlist->ServerAddr, pos);
			}
			
			//-----------------------------------------------------------------

			/*else {
				printf("Failed to READ FILE")
				break;
			}*/

		}
	}

	fclose(configFile);
	configFile = NULL;
	return;

}