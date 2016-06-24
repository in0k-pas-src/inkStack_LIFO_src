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
    {$if defined (_M_protoInkLIFO_51v0__var_STACK)}
        {$define _var_piLifo51v0_STACK:=_M_protoInkLIFO_51v0__var_STACK}
    {$else}
        {$FATAL 'macro ".._STACK" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_51v0__cst_NODE)}
        {$define _cst_piLifo51v0_NODE:=_M_protoInkLIFO_51v0__cst_NODE}
    {$else}
        {$FATAL 'macro ".._NODE" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_51v0__lcl_setNext)}
        {$define _prc_piLifo51v0_setNext:=_M_protoInkLIFO_51v0__lcl_setNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__SetNext)}
        {$define _prc_piLifo51v0_setNext:=_M_protoInkLIFO_blockFNK__SetNext}
    {$else}
        {$FATAL 'macro ".._setNext" : NOT define!'}
    {$endif}
{%endregion 'check "define" for all used macros' /fold}
begin
    {$ifDef inkLIFO_fncHeadMessage}{$message 'inline -> protoInkLLs_bodyFNC_06__insFirst'}{$endIF}
    {$deFine _M_protoInkLLs_06__var_FIRST  :=_var_piLifo51v0_STACK}
    {$deFine _M_protoInkLLs_06__cst_NODE   :=_cst_piLifo51v0_NODE}
    {$deFine _M_protoInkLLs_06__lcl_setNext:=_prc_piLifo51v0_setNext}
    {$I protoInkLLs_bodyFNC_06__insFirst.inc}
end;
{%region /fold 'unDEF used macros'                                       }
    //--- undef Local macros
    {$unDef _var_piLifo51v0_STACK}
    {$unDef _cst_piLifo51v0_NODE}
    {$unDef _prc_piLifo51v0_setNext}
    //--- undef user
    {$unDef _M_protoInkLIFO_51v0__var_STACK}
    {$unDef _M_protoInkLIFO_51v0__cst_NODE}
    {$unDef _M_protoInkLIFO_51v0__lcl_setNext}
{%endregion 'unDEF used macros' /fold}
