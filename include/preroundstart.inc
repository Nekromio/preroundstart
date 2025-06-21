#if defined _preroundstart_included
    #endinput
#endif
#define _preroundstart_included

#include <cstrike>

forward void OnPreRoundStart();

public Action CS_OnTerminateRound(float &fDelay, CSRoundEndReason &reason)
{
    CreateTimer(0.1, Timer_PreRoundStart);
    return Plugin_Continue;
}

public Action Timer_PreRoundStart(Handle timer)
{
    OnPreRoundStart();
    return Plugin_Continue;
}