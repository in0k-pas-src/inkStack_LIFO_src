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
    {$if defined (_M_protoInkLIFO_11__cst_STACK)}
        {$define _cst_piLifo11_STACK:=_M_protoInkLIFO_11__cst_STACK}
    {$else}
        {$FATAL 'macro ".._STACK" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_11__out_COUNT)}
        {$define _out_piLifo11_COUNT:=_M_protoInkLIFO_11__out_COUNT}
    {$else}
        {$FATAL 'macro ".._COUNT" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_11__lcl_getNext)}
        {$define _fnc_piLifo11_getNext:=_M_protoInkLIFO_11__lcl_getNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetNext)}
        {$define _fnc_piLifo11_getNext:=_M_protoInkLIFO_blockFNK__GetNext}
    {$else}
        {$FATAL 'macro ".._getNext" : NOT define!'}
    {$endif}
{%endregion}
{%region /fold 'setUP local VARs'                                        }
{$if defined (_m_protoInkLIFO_11__tmp_POINTER)}
    {$define _tmp_piLifo11_POINTER:=_m_protoInkLIFO_11__tmp_POINTER}
{$else}
var tmp:pointer;
    {$define _tmp_piLifo11_POINTER:=tmp}
{$endif}
{%endregion}
begin
    {$ifDef inkLIFO_fncHeadMessage}{$message 'inline -> protoInkLLs_bodyFNC_11__Count'}{$endIF}
    {$deFine _M_protoInkLLs_11__lcl_getNext:=_fnc_piLifo11_getNext}
    {$deFine _M_protoInkLLs_11__tmp_POINTER:=_tmp_piLifo11_POINTER}
    {$deFine _M_protoInkLLs_11__cst_FIRST  :=_cst_piLifo11_STACK}
    {$deFine _M_protoInkLLs_11__out_COUNT  :=_out_piLifo11_COUNT}
    {$I protoInkLLs_bodyFNC_11__Count.inc}
end;
{%region /fold 'unDEF used macros'                                       }
    //--- undef SUPER local macros
    {$unDef _tmp_piLifo11_POINTER}
    //--- undef Local macros
    {$unDef _cst_piLifo11_STACK}
    {$unDef _out_piLifo11_COUNT}
    {$unDef _fnc_piLifo11_getNext}
    //--- undef user macros
    {$undef _m_protoInkLIFO_11__tmp_POINTER}
    {$undef _M_protoInkLIFO_11__cst_STACK}
    {$unDef _M_protoInkLIFO_11__out_COUNT}
    {$unDef _M_protoInkLIFO_11__lcl_getNext}
{%endregion}

