//========= MEOW!!!!!!!!!! ============//
// 
// Purpose: Console commands for reverse kelptomania. 
// 
//===========================================================================// 
#include "cbase.h" 
#include "convar.h" 
//------------------------------------------------------------------------------ 
//These are the older custom commands for Reverse Kleptomania retained from the old mapbase build. 
//------------------------------------------------------------------------------ 

void MaoMao_f(void) 
{ 
    Msg("Just a small cat on the land...\n"); 
} 

ConCommand MaoMao("MaoMao", MaoMao_f, "smol cat", FCVAR_CHEAT);

void meow_f(void) 
{ 
    Msg("Meow!!\n"); 
} 

ConCommand Meow("Meow", meow_f, "smoler cat", FCVAR_CHEAT);

void Mao_f(void) 
{ 
    Msg("You've appeared to have made a typo, resulting in an "); 
    Warning("erronious meow!!\n"); 
} 

ConCommand Mao("Mao", Mao_f, "wrong map", FCVAR_CHEAT);

//------------------------------------------------------------------------------ 
// Purpose: Return reverse kelptomania build number 
//------------------------------------------------------------------------------ 

void versionklepto_f(void)
{
    Msg("Klepto Source 0.2a1\n");
    Msg("SDK 2013ce 'CleanKatt'\n");
    Msg("Expecting resource files  C 0.1 / S 0.1\n");
}

ConCommand versionklpeto("version_klepto", versionklepto_f, "Returns the build number for Reverse Kleptomania", FCVAR_CHEAT);

//------------------------------------------------------------------------------ 
// Purpose: Sound Debugging 
//------------------------------------------------------------------------------ 

void executeCommands_f(void)
{
    // Display the sound list
    engine->ServerCommand("displaysoundlist\n");

    // Report sound patches
    engine->ServerCommand("report_soundpatch\n");

    // Visualize sound
    engine->ServerCommand("setang 1 snd_visualize\n");
}

// Register the console command

ConCommand executeCommands("KSound", executeCommands_f, "Quick Sound Debug", FCVAR_CHEAT);

//------------------------------------------------------------------------------
