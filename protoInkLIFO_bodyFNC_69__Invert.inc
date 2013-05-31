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
    {$if defined (_M_protoInkLIFO_69__var_STACK)}
        {$define _var_piLIFO69_STACK:=_M_protoInkLIFO_69__var_STACK}
    {$else}
        {$FATAL 'macro ".._FIRST" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_69__lcl_getNext)}
        {$define _fnc_piLIFO69_getNext:=_M_protoInkLIFO_69__lcl_getNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetNext)}
        {$define _fnc_piLIFO69_getNext:=_M_protoInkLIFO_blockFNK__GetNext}
    {$else}
        {$FATAL 'macro ".._getNext" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_69__lcl_setNext)}
        {$define _prc_piLIFO69_setNext:=_M_protoInkLIFO_69__lcl_setNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__SetNext)}
        {$define _prc_piLIFO69_setNext:=_M_protoInkLIFO_blockFNK__SetNext}
    {$else}
        {$FATAL 'macro ".._getNext" : NOT define!'}
    {$endif}
{%endregion 'check "define" for all used macros' /fold}
{%region /fold 'setUP local VARs'                                        }
{$if defined (_m_protoInkLIFO_69__tmp_POINTER_01)}
    {$define _tmp_piLIFO69_P01:=_m_protoInkLIFO_69__tmp_POINTER_01}
{$else}
var tmp:pointer;
    {$define _tmp_piLIFO69_P01:=tmp}
{$endif}
//---
{$if defined (_m_protoInkLIFO_69__tmp_POINTER_02)}
    {$define _tmp_piLIFO69_P02:=_m_protoInkLIFO_69__tmp_POINTER_02}
{$else}
var tmq:pointer;
    {$define _tmp_piLIFO69_P02:=tmq}
{$endif}
{%endregion}
begin
    {$ifDef inkLIFO_fncHeadMessage}{$message 'inline -> protoInkLLs_bodyFNC_69__Invert'}{$endIF}
    {$deFine _m_protoInkLLs_69__tmp_POINTER_01:=_tmp_piLIFO69_P01}
    {$deFine _m_protoInkLLs_69__tmp_POINTER_02:=_tmp_piLIFO69_P02}
    {$deFine _M_protoInkLLs_69__var_FIRST     :=_var_piLIFO69_STACK}
    {$deFine _M_protoInkLLs_69__lcl_getNext   :=_fnc_piLifo69_getNext}
    {$deFine _M_protoInkLLs_69__lcl_setNext   :=_prc_piLIFO69_setNext}
    {$I protoInkLLs_bodyFNC_69__Invert.inc}
end;
{%region /fold 'unDEF used macros'                                       }
    //--- undef Supre Local
    {$unDef _tmp_piLIFO69_P01}
    {$unDef _tmp_piLIFO69_P02}
    //--- undef Local macros
    {$unDef _var_piLIFO69_STACK}
    {$unDef _fnc_piLIFO69_getNext}
    {$unDef _prc_piLIFO69_setNext}
    //--- undef user
    {$undef _m_protoInkLIFO_69__tmp_POINTER_01}
    {$undef _m_protoInkLIFO_69__tmp_POINTER_02}
    {$undef _M_protoInkLIFO_69__var_STACK}
    {$unDef _M_protoInkLIFO_69__lcl_getNext}
    {$unDef _M_protoInkLIFO_69__lcl_setNext}
{%endregion 'unDEF used macros' /fold}

