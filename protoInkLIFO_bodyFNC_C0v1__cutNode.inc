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
    {$if defined (_M_protoInkLIFO_C0v1__var_STACK)}
        {$define _var_piLifoC0v1_STACK:=_M_protoInkLIFO_C0v1__var_STACK}
    {$else}
        {$FATAL 'macro ".._STACK" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_C0v1__cst_NODE)}
        {$define _cst_piLifoC0v1_NODE:=_M_protoInkLIFO_C0v1__cst_NODE}
    {$else}
        {$FATAL 'macro ".._NODE" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_C0v1__lcl_getNext)}
        {$define _fnc_piLifoC0v1_getNext:=_M_protoInkLIFO_C0v1__lcl_getNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetNext)}
        {$define _fnc_piLifoC0v1_getNext:=_M_protoInkLIFO_blockFNK__GetNext}
    {$else}
        {$FATAL 'macro ".._getNext" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_C0v1__lcl_setNext)}
        {$define _prc_piLifoC0v1_setNext:=_M_protoInkLIFO_C0v1__lcl_setNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__SetNext)}
        {$define _prc_piLifoC0v1_setNext:=_M_protoInkLIFO_blockFNK__SetNext}
    {$else}
        {$FATAL 'macro ".._setNext" : NOT define!'}
    {$endif}
{%endregion 'check "define" for all used macros' /fold}
{%region /fold 'setUP local vars'                                        }
{$if defined (_m_protoInkLIFO_C0v1__tmp_POINTER)}
    {$define _tmp_piLifoC0v1_POINTER:=_m_protoInkLIFO_C0v1__tmp_POINTER}
{$else}
var tmp:pointer;
    {$define _tmp_piLifoC0v1_POINTER:=tmp}
{$endif}
{%endregion 'setUP local vars' /fold}
begin
    {$ifDef inkLIFO_fncHeadMessage}{$message 'inline -> protoInkLLs_bodyFNC_C0v1__cutNode'}{$endIF}
    {$deFine _M_protoInkLLs_C0v1__tmp_POINTER:=_tmp_piLifoC0v1_POINTER}
    {$deFine _M_protoInkLLs_C0v1__var_FIRST  :=_var_piLifoC0v1_STACK}
    {$deFine _M_protoInkLLs_C0v1__cst_NODE   :=_cst_piLifoC0v1_NODE}
    {$deFine _M_protoInkLLs_C0v1__lcl_getNext:=_fnc_piLifoC0v1_getNext}
    {$deFine _M_protoInkLLs_C0v1__lcl_setNext:=_prc_piLifoC0v1_setNext}
    {$I protoInkLLs_bodyFNC_C0v1__cutNode.inc}
end;
{%region /fold 'unDEF used macros'                                       }
    //--- undef Supre Local macros
    {$unDef _tmp_piLifoC0v1_POINTER}
    //--- undef Local macros
    {$unDef _var_piLifoC0v1_STACK}
    {$unDef _cst_piLifoC0v1_NODE}
    {$unDef _fnc_piLifoC0v1_getNext}
    {$unDef _prc_piLifoC0v1_setNext}
    //--- undef user
    {$unDef _m_protoInkLIFO_C0v1__tmp_POINTER}
    {$unDef _M_protoInkLIFO_C0v1__var_STACK}
    {$unDef _M_protoInkLIFO_C0v1__cst_NODE}
    {$unDef _M_protoInkLIFO_C0v1__lcl_getNext}
    {$unDef _M_protoInkLIFO_C0v1__lcl_setNext}
{%endregion 'unDEF used macros' /fold}
