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
    {$if defined (_M_protoInkLIFO_FE__var_STACK)}
        {$define _var_piLifoFE_STACK:=_M_protoInkLIFO_FE__var_STACK}
    {$else}
        {$FATAL 'macro ".._STACK" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_FE__lcl_getNext)}
        {$define _fnc_piLifoFE_getNext:=_M_protoInkLIFO_FE__lcl_getNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetNext)}
        {$define _fnc_piLifoFE_getNext:=_M_protoInkLIFO_blockFNK__GetNext}
    {$else}
        {$FATAL 'macro ".._getNext" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_FE__lcl_getDATA)}
        {$define _fnc_piLifoFE_getDATA:=_M_protoInkLIFO_FE__lcl_getDATA}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetDATA)}
        {$define _fnc_piLifoFE_getDATA:=_M_protoInkLIFO_blockFNK__GetDATA}
    {$else}
        {$FATAL 'macro "..getDATA" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_FE__lcl_dataDST)}
        {$define _fnc_piLifoFE_dataDST:=_M_protoInkLIFO_FE__lcl_dataDST}
    {$else}
        {$FATAL 'macro ".._dataDST" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_FE__lcl_nodeDST)}
        {$define _fnc_piLifoFE_nodeDST:=_M_protoInkLIFO_FE__lcl_nodeDST}
    {$else}
        {$FATAL 'macro ".._nodeDST" : NOT define!'}
    {$endif}
{%endregion}
{%region /fold 'setUP local VARs'                                        }
{$if defined (_m_protoInkLIFO_FE__tmp_POINTER)}
    {$define _tmp_piLifoFE_POINTER:=_m_protoInkLIFO_FE__tmp_POINTER}
{$else}
var tmp:pointer;
    {$define _tmp_piLifoFE_POINTER:=tmp}
{$endif}
{%endregion}
begin
    while _var_piLifoFE_STACK<>nil do begin
        // шаг на СЛЕДУЮЩИЙ
       _tmp_piLifoFE_POINTER:=_var_piLifoFE_STACK;
       _var_piLifoFE_STACK  :=_fnc_piLifoFE_getNext(_tmp_piLifoFE_POINTER);
        // уничтожение элемента tmp
       _fnc_piLifoFE_dataDST(_fnc_piLifoFE_getDATA(_tmp_piLifoFE_POINTER));
       _fnc_piLifoFE_nodeDST(_tmp_piLifoFE_POINTER);
    end;
end;
{%region /fold 'unDEF used macros'                                       }
    //--- undef SUPER local macros
    {$unDef _tmp_piLifoFE_POINTER}
    //--- undef Local macros
    {$unDef _var_piLifoFE_STACK}
    {$unDef _fnc_piLifoFE_getNext}
    {$unDef _fnc_piLifoFE_getDATA}
    {$unDef _fnc_piLifoFE_dataDST}
    {$unDef _fnc_piLifoFE_nodeDST}
    //--- undef user macros
    {$undef _m_protoInkLIFO_FE__tmp_POINTER}
    {$undef _M_protoInkLIFO_FE__var_STACK}
    {$unDef _M_protoInkLIFO_FE__lcl_getNext}
    {$unDef _M_protoInkLIFO_FE__lcl_getDATA}
    {$unDef _M_protoInkLIFO_FE__lcl_dataDST}
    {$unDef _M_protoInkLIFO_FE__lcl_nodeDST}
{%endregion}

