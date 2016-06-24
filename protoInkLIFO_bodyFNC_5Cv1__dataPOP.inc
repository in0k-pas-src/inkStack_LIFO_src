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
    {$if defined (_M_protoInkLIFO_5Cv1__var_STACK)}
        {$define _var_piLifo5Cv1_STACK:=_M_protoInkLIFO_5Cv1__var_STACK}
    {$else}
        {$FATAL 'macro ".._STACK" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_5Cv1__out_DATA)}
        {$define _out_piLifo5Cv1_DATA:=_M_protoInkLIFO_5Cv1__out_DATA}
    {$else}
        {$FATAL 'macro ".._NODE" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_5Cv1__lcl_getNext)}
        {$define _fnc_piLifo5Cv1_getNext:=_M_protoInkLIFO_5Cv1__lcl_getNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetNext)}
        {$define _fnc_piLifo5Cv1_getNext:=_M_protoInkLIFO_blockFNK__GetNext}
    {$else}
        {$FATAL 'macro ".._getNext" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_5Cv1__lcl_getDATA)}
        {$define _fnc_piLifo5Cv1_getDATA:=_M_protoInkLIFO_5Cv1__lcl_getDATA}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetDATA)}
        {$define _fnc_piLifo5Cv1_getDATA:=_M_protoInkLIFO_blockFNK__GetDATA}
    {$else}
        {$FATAL 'macro ".._getDATA" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_5Cv1__lcl_nodeDST)}
        {$define _fnc_piLifo5Cv1_nodeDST:=_M_protoInkLIFO_5Cv1__lcl_nodeDST}
    {$else}
        {$FATAL 'macro ".._nodeDST" : NOT define!'}
    {$endif}
{%endregion 'check "define" for all used macros' /fold}
{%region /fold 'setUP local vars'                                        }
{$if defined (_m_protoInkLIFO_5Cv1__tmp_POINTER)}
    {$define _tmp_piLifo5Cv1_POINTER:=_m_protoInkLIFO_5Cv1__tmp_POINTER}
{$else}
var tmp:pointer;
    {$define _tmp_piLifo5Cv1_POINTER:=tmp}
{$endif}
{%endregion 'setUP local vars' /fold}
begin
   _out_piLifo5Cv1_DATA:=_var_piLifo5Cv1_STACK;
    if _out_piLifo5Cv1_DATA<>nil then begin
       _tmp_piLifo5Cv1_POINTER:=_out_piLifo5Cv1_DATA;
       _var_piLifo5Cv1_STACK  :=_fnc_piLifo5Cv1_getNext(_tmp_piLifo5Cv1_POINTER);
       _out_piLifo5Cv1_DATA   :=_fnc_piLifo5Cv1_getDATA(_tmp_piLifo5Cv1_POINTER);
       _fnc_piLifo5Cv1_nodeDST(_tmp_piLifo5Cv1_POINTER);
    end
end;
{%region /fold 'unDEF used macros'                                       }
    //--- undef Local macros
    {$unDef _tmp_piLifo5Cv1_POINTER}
    //--- undef Local macros
    {$unDef _var_piLifo5Cv1_STACK}
    {$unDef _out_piLifo5Cv1_DATA}
    {$unDef _fnc_piLifo5Cv1_getNext}
    {$unDef _fnc_piLifo5Cv1_getDATA}
    {$unDef _fnc_piLifo5Cv1_nodeDST}
    //--- undef user
    {$unDef _m_protoInkLIFO_5Cv1__tmp_POINTER}
    {$unDef _M_protoInkLIFO_5Cv1__var_STACK}
    {$unDef _M_protoInkLIFO_5Cv1__out_DATA}
    {$unDef _M_protoInkLIFO_5Cv1__lcl_getNext}
    {$unDef _M_protoInkLIFO_5Cv1__lcl_getDATA}
    {$unDef _M_protoInkLIFO_5Cv1__lcl_nodeDST}
{%endregion 'unDEF used macros' /fold}
