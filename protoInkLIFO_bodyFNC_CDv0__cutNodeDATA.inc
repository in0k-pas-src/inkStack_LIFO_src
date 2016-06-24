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
    {$if defined (_M_protoInkLIFO_CDv0__var_STACK)}
        {$define _var_piLifoCDv0_STACK:=_M_protoInkLIFO_CDv0__var_STACK}
    {$else}
        {$FATAL 'macro ".._STACK" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_CDv0__cst_DATA)}
        {$define _cst_piLifoCDv0_DATA:=_M_protoInkLIFO_CDv0__cst_DATA}
    {$else}
        {$FATAL 'macro ".._NODE" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_CDv0__out_RES)}
        {$define _out_piLifoCDv0_RES:=_M_protoInkLIFO_CDv0__out_RES}
    {$else}
        {$FATAL 'macro ".._RES" : NOT define!'}
    {$endif}
    //--- FNCs
    {$if defined (_M_protoInkLIFO_CDv0__lcl_getNext)}
        {$define _fnc_piLifoCDv0_getNext:=_M_protoInkLIFO_CDv0__lcl_getNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetNext)}
        {$define _fnc_piLifoCDv0_getNext:=_M_protoInkLIFO_blockFNK__GetNext}
    {$else}
        {$FATAL 'macro ".._getNext" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_CDv0__lcl_setNext)}
        {$define _prc_piLifoCDv0_setNext:=_M_protoInkLIFO_CDv0__lcl_setNext}
    {$elseif defined (_M_protoInkLIFO_blockFNK__SetNext)}
        {$define _prc_piLifoCDv0_setNext:=_M_protoInkLIFO_blockFNK__SetNext}
    {$else}
        {$FATAL 'macro ".._setNext" : NOT define!'}
    {$endif}
    //---
    {$if defined (_M_protoInkLIFO_CDv0__lcl_getDATA)}
        {$define _fnc_piLifoCDv0_getDATA:=_M_protoInkLIFO_CDv0__lcl_getDATA}
    {$elseif defined (_M_protoInkLIFO_blockFNK__GetDATA)}
        {$define _fnc_piLifoCDv0_getDATA:=_M_protoInkLIFO_blockFNK__GetDATA}
    {$else}
        {$FATAL 'macro ".._setNext" : NOT define!'}
    {$endif}
{%endregion}
{%region /fold 'setUP local vars'                                        }
{$if defined (_m_protoInkLIFO_CDv0__tmp_POINTER)}
    {$define _tmp_piLifoCDv0_POINTER:=_m_protoInkLIFO_CDv0__tmp_POINTER}
{$else}
var tmp:pointer;
    {$define _tmp_piLifoCDv0_POINTER:=tmp}
{$endif}
{%endregion}
begin
    //-- проверки
    {$ifOpt D+}
        if _cst_piLifoCDv0_DATA=nil then begin
            raise Exception.CReate('_cst_piLifoCDv0_DATA==nil !!!');
        end;
    {$endif}
    //-- агоритм-ритм-ритм
   _out_piLifoCDv0_RES:=NIL;
    if _var_piLifoCDv0_STACK<>nil then begin //< имеет ли смысл работать
        if _cst_piLifoCDv0_DATA<>_fnc_piLifoCDv0_getDATA(_var_piLifoCDv0_STACK) //< такая ситуация должна быть чаще
        then begin //< мда, надо искать предыдущий
           _tmp_piLifoCDv0_POINTER:=_var_piLifoCDv0_STACK;
           _out_piLifoCDv0_RES   :=_fnc_piLifoCDv0_getNext(_tmp_piLifoCDv0_POINTER);
            while (_out_piLifoCDv0_RES<>nil)and
                  (_fnc_piLifoCDv0_getDATA(_out_piLifoCDv0_RES)<>_cst_piLifoCDv0_DATA)
            do begin
               _tmp_piLifoCDv0_POINTER:=_out_piLifoCDv0_RES;
               _out_piLifoCDv0_RES   :=_fnc_piLifoCDv0_getNext(_tmp_piLifoCDv0_POINTER);
            end;
            if _out_piLifoCDv0_RES<>nil then begin //< НАШЕЛСЯ? вырезаем
               _prc_piLifoCDv0_setNext(_tmp_piLifoCDv0_POINTER, _fnc_piLifoCDv0_getNext(_out_piLifoCDv0_RES));
            end;
        end
        else begin
           _out_piLifoCDv0_RES  :=_var_piLifoCDv0_STACK;
           _var_piLifoCDv0_STACK:=_fnc_piLifoCDv0_getNext(_out_piLifoCDv0_RES); //<это был первый элемент, его и вырезаем
        end;
    end
end;
{%region /fold 'unDEF used macros'                                       }
    //--- undef Supre Local macros
    {$unDef _tmp_piLifoCDv0_POINTER}
    //--- undef Local macros
    {$unDef _var_piLifoCDv0_STACK}
    {$unDef _cst_piLifoCDv0_DATA}
    {$unDef _out_piLifoCDv0_RES}
    {$unDef _fnc_piLifoCDv0_getNext}
    {$unDef _prc_piLifoCDv0_setNext}
    {$unDef _fnc_piLifoCDv0_getDATA}
    //--- undef user
    {$unDef _m_protoInkLIFO_CDv0__tmp_POINTER}
    {$unDef _M_protoInkLIFO_CDv0__var_STACK}
    {$unDef _M_protoInkLIFO_CDv0__cst_DATA}
    {$unDef _M_protoInkLIFO_CDv0__out_RES}
    {$unDef _M_protoInkLIFO_CDv0__lcl_getNext}
    {$unDef _M_protoInkLIFO_CDv0__lcl_setNext}
    {$unDef _M_protoInkLIFO_CDv0__lcl_getDATA}
{%endregion}
