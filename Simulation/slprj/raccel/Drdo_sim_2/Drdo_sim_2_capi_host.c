#include "Drdo_sim_2_capi_host.h"
static Drdo_sim_2_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Drdo_sim_2_host_InitializeDataMapInfo(&(root), "Drdo_sim_2");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
