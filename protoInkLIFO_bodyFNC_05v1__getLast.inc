{//-----------------------------------------------[ mangust © 29.01.2010 ]---///
///                                  __    _ ___                             ///
///             +-+-+-+-+-+_     _  |  |  |_|  _|___first -> -               ///
///             |  PRoTo  |_|___| |_|  |__| |  _| . |        -               ///
///             +-+-+-+-+-| |   | '_|_____|_|_| |___|        -               ///
///                       |_|_|_|_,_|    v 4.0        NIL <- =               ///
///                                                                          ///
///--------------------------------------------[ v 4.0 in0k © 29.05.2013 ]---//}
{%region /fold 'check "define" for all used macros                     ' }
    //--- VARs
    {$if defined (_M_protoInkLIFO_05v1__cst_STACK)}
        {$define _cst_piLifo05v1_STACK:=_M_protoInkLIFO_05v1__cst_STACK}
    {$else}
        {$FATAL 'macro ".._FIRST" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_05v1__out_LAST)}
        {$define _out_piLifo05v1_LAST:=_M_protoInkLIFO_05v1__out_LAST}
    {$else}
        {$FATAL 'macro ".._LAST" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_05v1__lcl_getNext)}
        {$define _fnc_piLifo05v1_getNext:=_M_protoInkLIFO_05v1__lcl_getNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetNext)}
        {$define _fnc_piLifo05v1_getNext:=_M_protoInkLIFO_blockFNK__GetNext}
    {$else}
        {$FATAL 'macro ".._getNext" : NOT define!'}
    {$endif}
{%endregion 'check "define" for all used macros' /fold}
begin
    {$ifDef inkLIFO_fncHeadMessage}{$message 'inline -> protoInkLLs_bodyFNC_05v1__getLast'}{$endIF}
    {$deFine _M_protoInkLLs_05v1__cst_FIRST  :=_cst_piLifo05v1_STACK}
    {$deFine _M_protoInkLLs_05v1__out_LAST   :=_out_piLifo05v1_LAST}
    {$deFine _M_protoInkLLs_05v1__lcl_getNext:=_fnc_piLifo05v1_getNext}
    {$I protoInkLLs_bodyFNC_05v1__getLast.inc}
end;
{%region /fold 'unDEF used macros                                      ' }
    //--- undef Local macros
    {$unDef _cst_piLifo05v1_STACK}
    {$unDef _out_piLifo05v1_LAST}
    {$unDef _fnc_piLifo05v1_getNext}
    //--- undef user
    {$unDef _M_protoInkLIFO_05v1__cst_STACK}
    {$unDef _M_protoInkLIFO_05v1__out_LAST}
    {$unDef _M_protoInkLIFO_05v1__lcl_getNext}
{%endregion 'unDEF used macros' /fold}

