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
    {$if defined (_M_protoInkLIFO_FF__var_STACK)}
        {$define _var_piLifoFF_STACK:=_M_protoInkLIFO_FF__var_STACK}
    {$else}
        {$FATAL 'macro ".._STACK" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_FF__lcl_getNext)}
        {$define _fnc_piLifoFF_getNext:=_M_protoInkLIFO_FF__lcl_getNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetNext)}
        {$define _fnc_piLifoFF_getNext:=_M_protoInkLIFO_blockFNK__GetNext}
    {$else}
        {$FATAL 'macro ".._getNext" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_FF__lcl_nodeDST)}
        {$define _fnc_piLifoFF_nodeDST:=_M_protoInkLIFO_FF__lcl_nodeDST}
    {$else}
        {$FATAL 'macro ".._nodeDST" : NOT define!'}
    {$endif}
{%endregion}
{%region /fold 'setUP local VARs'                                        }
{$if defined (_m_protoInkLIFO_FF__tmp_POINTER)}
    {$define _tmp_piLifoFF_POINTER:=_m_protoInkLIFO_FF__tmp_POINTER}
{$else}
var tmp:pointer;
    {$define _tmp_piLifoFF_POINTER:=tmp}
{$endif}
{%endregion}
begin
    {$ifDef inkLIFO_fncHeadMessage}{$message 'inline -> protoInkLLs_bodyFNC_FF__CLEAR'}{$endIF}
    {$deFine _m_protoInkLLs_FF__tmp_POINTER:=_tmp_piLifoFF_POINTER}
    {$deFine _M_protoInkLLs_FF__var_FIRST  :=_var_piLifoFF_STACK}
    {$deFine _M_protoInkLLs_FF__lcl_getNext:=_fnc_piLifoFF_getNext}
    {$deFine _M_protoInkLLs_FF__lcl_nodeDST:=_fnc_piLifoFF_nodeDST}
    {$I protoInkLLs_bodyFNC_FF__CLEAR.inc}
end;
{%region /fold 'unDEF used macros'                                       }
    //--- undef SUPER local macros
    {$unDef _tmp_piLifoFF_POINTER}
    //--- undef Local macros
    {$unDef _var_piLifoFF_STACK}
    {$unDef _fnc_piLifoFF_getNext}
    {$unDef _fnc_piLifoFF_nodeDST}
    //--- undef user macros
    {$undef _m_protoInkLIFO_FF__tmp_POINTER}
    {$undef _M_protoInkLIFO_FF__var_STACK}
    {$unDef _M_protoInkLIFO_FF__lcl_getNext}
    {$unDef _M_protoInkLIFO_FF__lcl_nodeDST}
{%endregion}

