{//-----------------------------------------------[ mangust © 29.01.2010 ]---///
///                                  __    _ ___                             ///
///             +-+-+-+-+-+_     _  |  |  |_|  _|___first -> -               ///
///             |  PRoTo  |_|___| |_|  |__| |  _| . |        -               ///
///             +-+-+-+-+-| |   | '_|_____|_|_| |___|        -               ///
///                       |_|_|_|_,_|    v 4.0        NIL <- =               ///
///                                                                          ///
///--------------------------------------------[ v 4.0 in0k © 29.05.2013 ]---//}
{%region /fold 'check "define" for all used macros'                      }
    //--- VARs
    {$if defined (_M_protoInkLIFO_51v1__var_STACK)}
        {$define _var_piLifo51v1_STACK:=_M_protoInkLIFO_51v1__var_STACK}
    {$else}
        {$FATAL 'macro ".._STACK" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_51v1__cst_DATA)}
        {$define _cst_piLifo51v1_DATA:=_M_protoInkLIFO_51v1__cst_DATA}
    {$else}
        {$FATAL 'macro ".._NODE" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_51v1__lcl_nodeCRT)}
        {$define _fnc_piLifo51v1_nodeCRT:=_M_protoInkLIFO_51v1__lcl_nodeCRT}
    {$else}
        {$FATAL 'macro ".._nodeCRT" : NOT define!'}
    {$endif}
{%endregion 'check "define" for all used macros' /fold}
begin
   _var_piLifo51v1_STACK:=_fnc_piLifo51v1_nodeCRT(_cst_piLifo51v1_DATA,_var_piLifo51v1_STACK);
end;
{%region /fold 'unDEF used macros'                                       }
    //--- undef Local macros
    {$unDef _var_piLifo51v1_STACK}
    {$unDef _cst_piLifo51v1_DATA}
    {$unDef _fnc_piLifo51v1_nodeCRT}
    //--- undef user
    {$unDef _M_protoInkLIFO_51v1__var_STACK}
    {$unDef _M_protoInkLIFO_51v1__cst_DATA}
    {$unDef _M_protoInkLIFO_51v1__lcl_nodeCRT}
{%endregion 'unDEF used macros' /fold}
