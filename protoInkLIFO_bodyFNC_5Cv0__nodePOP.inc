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
    {$if defined (_M_protoInkLIFO_5Cv0__var_STACK)}
        {$define _var_piLifo5Cv0_STACK:=_M_protoInkLIFO_5Cv0__var_STACK}
    {$else}
        {$FATAL 'macro ".._STACK" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_5Cv0__out_NODE)}
        {$define _out_piLifo5Cv0_NODE:=_M_protoInkLIFO_5Cv0__out_NODE}
    {$else}
        {$FATAL 'macro ".._NODE" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_5Cv0__lcl_getNext)}
        {$define _fnc_piLifo5Cv0_getNext:=_M_protoInkLIFO_5Cv0__lcl_getNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetNext)}
        {$define _fnc_piLifo5Cv0_getNext:=_M_protoInkLIFO_blockFNK__GetNext}
    {$else}
        {$FATAL 'macro ".._getNext" : NOT define!'}
    {$endif}
{%endregion 'check "define" for all used macros' /fold}
begin
    {$ifDef inkLIFO_fncHeadMessage}{$message 'inline -> protoInkLLs_bodyFNC_C1__cutNodeFirst'}{$endIF}
    {$deFine _M_protoInkLLs_C1__var_FIRST  :=_var_piLifo5Cv0_STACK}
    {$deFine _M_protoInkLLs_C1__out_NODE   :=_out_piLifo5Cv0_NODE}
    {$deFine _M_protoInkLLs_C1__lcl_getNext:=_fnc_piLifo5Cv0_getNext}
    {$I protoInkLLs_bodyFNC_C1__cutNodeFirst.inc}
end;
{%region /fold 'unDEF used macros'                                       }
    //--- undef Local macros
    {$unDef _var_piLifo5Cv0_STACK}
    {$unDef _out_piLifo5Cv0_NODE}
    {$unDef _fnc_piLifo5Cv0_getNext}
    //--- undef user
    {$unDef _M_protoInkLIFO_5Cv0__var_STACK}
    {$unDef _M_protoInkLIFO_5Cv0__out_NODE}
    {$unDef _M_protoInkLIFO_5Cv0__lcl_getNext}
{%endregion 'unDEF used macros' /fold}
