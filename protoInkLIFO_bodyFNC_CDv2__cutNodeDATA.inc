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
    {$if defined (_M_protoInkLIFO_CDv2__var_STACK)}
        {$define _var_piLifoCDv2_STACK:=_M_protoInkLIFO_CDv2__var_STACK}
    {$else}
        {$FATAL 'macro ".._STACK" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_CDv2__cst_DATA)}
        {$define _cst_piLifoCDv2_DATA:=_M_protoInkLIFO_CDv2__cst_DATA}
    {$else}
        {$FATAL 'macro ".._NODE" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_CDv2__out_RES)}
        {$define _out_piLifoCDv2_RES:=_M_protoInkLIFO_CDv2__out_RES}
    {$else}
        {$FATAL 'macro ".._RES" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_CDv2__lcl_getNext)}
        {$define _fnc_piLifoCDv2_getNext:=_M_protoInkLIFO_CDv2__lcl_getNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetNext)}
        {$define _fnc_piLifoCDv2_getNext:=_M_protoInkLIFO_blockFNK__GetNext}
    {$else}
        {$FATAL 'macro ".._getNext" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_CDv2__lcl_setNext)}
        {$define _prc_piLifoCDv2_setNext:=_M_protoInkLIFO_CDv2__lcl_setNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__SetNext)}
        {$define _prc_piLifoCDv2_setNext:=_M_protoInkLIFO_blockFNK__SetNext}
    {$else}
        {$FATAL 'macro ".._setNext" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_CDv2__lcl_getDATA)}
        {$define _fnc_piLifoCDv2_getDATA:=_M_protoInkLIFO_CDv2__lcl_getDATA}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetDATA)}
        {$define _fnc_piLifoCDv2_getDATA:=_M_protoInkLIFO_blockFNK__GetDATA}
    {$else}
        {$FATAL 'macro ".._setNext" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_CDv2__lcl_nodeDST)}
        {$define _fnc_piLifoCDv2_nodeDST:=_M_protoInkLIFO_CDv2__lcl_nodeDST}
    {$else}
        {$FATAL 'macro ".._setNext" : NOT define!'}
    {$endif}
{%endregion}
{%region /fold 'setUP local vars'                                        }
{$if defined (_m_protoInkLIFO_CDv2__tmp_POINTER_01)}
    {$define _tmp_piLifoCDv2_POINTER_01:=_m_protoInkLIFO_CDv2__tmp_POINTER_01}
{$else}
var tmp:pointer;
    {$define _tmp_piLifoCDv2_POINTER_01:=tmp}
{$endif}
//---
{$if defined (_m_protoInkLIFO_CDv2__tmp_POINTER_02)}
    {$define _tmp_piLifoCDv2_POINTER_02:=_m_protoInkLIFO_CDv2__tmp_POINTER_02}
{$else}
var tmq:pointer;
    {$define _tmp_piLifoCDv2_POINTER_02:=tmq}
{$endif}
{%endregion}
begin
    {$ifDef inkLIFO_fncHeadMessage}{$message 'inline -> protoInkLIFO_bodyFNC_CDv0__cutNodeDATA'}{$endIF}
    {$deFine _M_protoInkLIFO_CDv0__tmp_POINTER:=_tmp_piLifoCDv2_POINTER_01}
    {$deFine _M_protoInkLIFO_CDv0__var_STACK  :=_var_piLifoCDv2_STACK}
    {$deFine _M_protoInkLIFO_CDv0__cst_DATA   :=_cst_piLifoCDv2_DATA}
    {$deFine _M_protoInkLIFO_CDv0__out_RES    :=_tmp_piLifoCDv2_POINTER_02}
    {$deFine _M_protoInkLIFO_CDv0__lcl_getNext:=_fnc_piLifoCDv2_getNext}
    {$deFine _M_protoInkLIFO_CDv0__lcl_setNext:=_prc_piLifoCDv2_setNext}
    {$deFine _M_protoInkLIFO_CDv0__lcl_getDATA:=_fnc_piLifoCDv2_getDATA}
    {$I protoInkLIFO_bodyFNC_CDv0__cutNodeDATA.inc}
    {$ifDef inkLIFO_fncHeadMessage}{$message '<<main code>>'}{$endIF}
    if _tmp_piLifoCDv2_POINTER_02<>nil then begin
       _fnc_piLifoCDv2_nodeDST(_tmp_piLifoCDv2_POINTER_02);
       _out_piLifoCDv2_RES:=TRUE;
    end
    else begin
       _out_piLifoCDv2_RES:=FALSE;
    end;
end;
{%region /fold 'unDEF used macros'                                       }
    //--- undef Supre Local macros
    {$unDef _tmp_piLifoCDv2_POINTER_01}
    {$unDef _tmp_piLifoCDv2_POINTER_02}
    //--- undef Local macros
    {$unDef _var_piLifoCDv2_STACK}
    {$unDef _cst_piLifoCDv2_DATA}
    {$unDef _out_piLifoCDv2_RES}
    {$unDef _fnc_piLifoCDv2_getNext}
    {$unDef _prc_piLifoCDv2_setNext}
    {$unDef _fnc_piLifoCDv2_getDATA}
    {$unDef _fnc_piLifoCDv2_nodeDST}
    //--- undef user
    {$unDef _m_protoInkLIFO_CDv2__tmp_POINTER_01}
    {$unDef _m_protoInkLIFO_CDv2__tmp_POINTER_02}
    {$unDef _M_protoInkLIFO_CDv2__var_STACK}
    {$unDef _M_protoInkLIFO_CDv2__cst_DATA}
    {$unDef _M_protoInkLIFO_CDv2__out_RES}
    {$unDef _M_protoInkLIFO_CDv2__lcl_getNext}
    {$unDef _M_protoInkLIFO_CDv2__lcl_setNext}
    {$unDef _M_protoInkLIFO_CDv2__lcl_getDATA}
    {$unDef _M_protoInkLIFO_CDv2__lcl_nodeDST}
{%endregion}
