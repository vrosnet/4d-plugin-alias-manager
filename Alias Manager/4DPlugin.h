/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Alias Manager
 #	author : miyako
 #	2014/11/12
 #
 # --------------------------------------------------------------------------------*/



// --- Alias
void AM_Create_link(sLONG_PTR *pResult, PackagePtr pParams);

typedef enum LinkType{
    LinkSymbolic = 0,
    LinkHard,
    LinkAlias
} LinkType;