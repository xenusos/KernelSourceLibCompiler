;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;    Purpose: 							                             ;;
;;    Author:                                                        ;;
;;    License:                                                       ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC __chkstk

.code

__chkstk PROC
	;; im too lazy
	;; if we're overflowing, we have bigger issues
	ret 
__chkstk ENDP

END