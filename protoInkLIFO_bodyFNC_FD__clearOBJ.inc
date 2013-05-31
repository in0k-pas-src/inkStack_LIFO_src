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
    {$if defined (_M_protoInkLIFO_FD__var_STACK)}
        {$define _var_piLifoFD_STACK:=_M_protoInkLIFO_FD__var_STACK}
    {$else}
        {$FATAL 'macro ".._STACK" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_FD__lcl_getNext)}
        {$define _fnc_piLifoFD_getNext:=_M_protoInkLIFO_FD__lcl_getNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetNext)}
        {$define _fnc_piLifoFD_getNext:=_M_protoInkLIFO_blockFNK__GetNext}
    {$else}
        {$FATAL 'macro ".._getNext" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_FD__lcl_getDATA)}
        {$define _fnc_piLifoFD_getDATA:=_M_protoInkLIFO_FD__lcl_getDATA}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetDATA)}
        {$define _fnc_piLifoFD_getDATA:=_M_protoInkLIFO_blockFNK__GetDATA}
    {$else}
        {$FATAL 'macro ".._getDATA" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_FD__lcl_nodeDST)}
        {$define _fnc_piLifoFD_nodeDST:=_M_protoInkLIFO_FD__lcl_nodeDST}
    {$else}
        {$FATAL 'macro ".._nodeDST" : NOT define!'}
    {$endif}
{%endregion}
{%region /fold 'setUP local VARs'                                        }
{$if defined (_m_protoInkLIFO_FD__tmp_POINTER)}
    {$define _tmp_piLifoFD_POINTER:=_m_protoInkLIFO_FD__tmp_POINTER}
{$else}
var tmp:pointer;
    {$define _tmp_piLifoFD_POINTER:=tmp}
{$endif}
{%endregion}
begin
    while _var_piLifoFD_STACK<>nil do begin
        // шаг на СЛЕДУЮЩИЙ
       _tmp_piLifoFD_POINTER:=_var_piLifoFD_STACK;
       _var_piLifoFD_STACK  :=_fnc_piLifoFD_getNext(_tmp_piLifoFD_POINTER);
        // уничтожение элемента: сначала содержимого как tObject, потом САМОГО
        tObject(_fnc_piLifoFD_getDATA(_tmp_piLifoFD_POINTER)).FREE;
       _fnc_piLifoFD_nodeDST(_tmp_piLifoFD_POINTER);
    end;
end;
{%region /fold 'unDEF used macros'                                       }
    //--- undef SUPER local macros
    {$unDef _tmp_piLifoFD_POINTER}
    //--- undef Local macros
    {$unDef _var_piLifoFD_STACK}
    {$unDef _fnc_piLifoFD_getNext}
    {$unDef _fnc_piLifoFD_getDATA}
    {$unDef _fnc_piLifoFD_nodeDST}
    //--- undef user macros
    {$undef _m_protoInkLIFO_FD__tmp_POINTER}
    {$undef _M_protoInkLIFO_FD__var_STACK}
    {$unDef _M_protoInkLIFO_FD__lcl_getNext}
    {$unDef _M_protoInkLIFO_FD__lcl_getDATA}
    {$unDef _M_protoInkLIFO_FD__lcl_nodeDST}
{%endregion}

