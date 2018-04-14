#define new 
#define delete(sel) SLFA_MEM set [sel,[]];sel = -1
#define __stdcall(var) (call compile preprocessFileLineNumbers var)
#define __fastcall(var) (call compile preprocessFile var)
#define METHOD(obj,id) call ((SLFA_MEM select obj) select id)
#define SET_VAR(obj,id,val) (SLFA_MEM select obj) set [id,val]
#define GET_VAR(obj,id) ((SLFA_MEM select obj) select id)
#define initSLFA SLFA_MEM = []; 
#define class(cl) cl = 
#define memorize _ptr = count SLFA_MEM; SLFA_MEM pushback [
#define end_memorize ]; _ptr;
#define function(var)


/* /!\ Only for class use */
#define getvar(var) GET_VAR(_objslmmz,var)
#define setvar(var,val) SET_VAR(_objslmmz,var,val)
#define depend _objslmmz = param[0]
#define here _objslmmz
#define getter(idVar) {	depend; getvar(idVar); }
#define setter(idVar) {	depend; setvar(idVar,param[1]); }

#define void
#define int 
#define string 
#define array
#define bool
#define AObject
#define const

#define property(id,val) [_this,id,val] call BIS_fnc_param
#define strlen(str) (count str)
#define add(var,val) var = var + val
#define sub(var,val) var = var - val

#define cout hint 
#define printf(str) hint str
#define printf1(str,a1) hint format [str,a1]
#define printf2(str,a1,a2) hint format [str,a1,a2]
#define printf3(str,a1,a2,a3) hint format [str,a1,a2,a3]
#define printf4(str,a1,a2,a3,a4) hint format [str,a1,a2,a3,a4]
#define printf5(str,a1,a2,a3,a4,a5) hint format [str,a1,a2,a3,a4,a5]
#define printf6(str,a1,a2,a3,a4,a5,a6) hint format [str,a1,a2,a3,a4,a5,a6]
#define printf7(str,a1,a2,a3,a4,a5,a6,a7) hint format [str,a1,a2,a3,a4,a5,a6,a7]
#define printf8(str,a1,a2,a3,a4,a5,a6,a7,a8) hint format [str,a1,a2,a3,a4,a5,a6,a7,a8]
#define printf9(str,a1,a2,a3,a4,a5,a6,a7,a8,a9) hint format [str,a1,a2,a3,a4,a5,a6,a7,a8,a9]
#define printf10(str,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10) hint format [str,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10]
#define printf11(str,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11) hint format [str,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11]
#define printf12(str,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12) hint format [str,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12]

#define for(var,cnd,inc) for[{var},{cnd},{inc}] do 
#define while(cnd) while{cnd} do
#define delay(ti) sleep (ti / 1000)


/*
  function define ex :

  #define playerSetLife(var) call { [param[0],var] METHOD(param[0],1) }
  #define presentSelf call { [param[0]] METHOD(param[0],2) }
  #define presentWithName(txt) call { [txt] METHOD(param[0],3) }


  Constructor ex :

  #define APlayer(var) ([var] call cl_APlayer)
*/



///////////////////////////////////// PROMPT FUNCT /////////////////////////////////////
