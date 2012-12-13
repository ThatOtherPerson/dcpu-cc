ERR_CC_ASM_NO_SECTION_GLOBAL_INIT                    cc-asm-no-section-global-init            "Initializers not permitted on global variables for assemblers that don't support sections."
ERR_CC_ASM_NO_SECTION_GLOBAL_ARRAY                   cc-asm-no-section-global-array           "Global arrays not permitted for assemblers that don't support sections."
ERR_CC_ASM_NO_IMPORT_DECL_FUNC                       cc-asm-no-import-decl-func               "Can't declare a function with no body without linker support in the target assembler."
ERR_CC_ASM_NO_DAT_FOR_STRING                         cc-asm-no-dat-for-string                 "Unable to compile strings without DAT support in assembler."
ERR_CC_SPACE_FOR_ARRAY_NOT_ALLOC                     cc-space-for-array-not-alloc             "The space for the array '%s' was not allocated."
ERR_CC_EXCESS_ELEMENTS_IN_ARRAY_INIT                 cc-excess-elements-in-array-init         "Excess elements in array initializer of array '%s'"
ERR_CC_CANNOT_IMPLICIT_CAST                          cc-cannot-implicit-cast                  "Unable to implicitly cast %s"
ERR_CC_CANNOT_EXPLICIT_CAST                          cc-cannot-explicit-cast                  "Unable to explicitly cast %s"
ERR_CC_VARIABLE_NOT_IN_SCOPE                         cc-variable-not-in-scope                 "The variable '%s' was not found in the scope."
ERR_CC_FUNCTION_AND_PTR_NOT_IN_SCOPE                 cc-function-and-ptr-not-in-scope         "Neither a function nor a function pointer was found by the name '%s'."
ERR_CC_VARIABLE_NOT_CALLABLE                         cc-variable-not-callable                 "Unable to call variable '%s' as it is not a function pointer."
ERR_CC_NO_MATCHING_SIGNATURES                        cc-no-matching-signatures                "Unable to find function with singature: %s"
ERR_CC_CANDIDATES_ARE                                cc-no-candidates-are                     "                        Candidates are: %s"
ERR_CC_CANNOT_REFERENCE_REFOP                        cc-cannot-reference-refop                "Unable to get reference to the result of an address-of operator."
ERR_CC_INVALID_ARRAY_ACCESS_TYPE                     cc-invalid-array-access-type             "Invalid operand as array access type. (have '%s')"
ERR_CC_INVALID_ARRAY_ACCESS_OFFSET                   cc-invalid-array-access-offset           "Invalid operand as array access offset. (have '%s')"
ERR_CC_CANNOT_REFERENCE                              cc-cannot-reference                      "Unable to reference %s"
ERR_CC_WRITE_TO_CONST                                cc-write-to-const                        "Assignment of read-only variable."
ERR_CC_INVALID_ASSIGN_OPERANDS                       cc-invalid-assign-operands               "Invalid operands to assign operation: %s"
ERR_CC_CASE_OUTSIDE_OF_SWITCH                        cc-case-outside-of-switch                "Invalid case statement outside of a switch statement."
ERR_CC_BREAK_OUTSIDE_OF_LOOP                         cc-break-outside-of-loop                 "Invalid break statement outside of a loop."
ERR_CC_CONTINUE_OUTSIDE_OF_LOOP                      cc-continue-outside-of-loop              "Invalid continue statement outside of a loop."
ERR_CC_DEFAULT_OUTSIDE_OF_SWITCH                     cc-default-outside-of-switch             "Invalid default statement outside of a switch statement."
ERR_CC_DEREF_NON_POINTER                             cc-deref-non-pointer                     "Attempting to dereference non-pointer type during type resolution."
ERR_CC_VALUE_OF_FUNCTION                             cc-value-of-function                     "Can not get value representation of function '%s'; did you want a reference instead?"
ERR_CC_INVALID_INC_DEC_OPERAND                       cc-invalid-inc-dec-operand               "Invalid operand to post increase/decrease operation. (have '%s')"
ERR_CC_INC_DEC_CONST                                 cc-inc-dec-const                         "Cannot increase/decrease read-only variable"
ERR_CC_MULTIPLE_DEFAULT                              cc-multiple-default                      "Invalid multiple default statements within switch statement."
ERR_CC_INVALID_UNARY_OPERAND                         cc-invalid-unary-operand                 "Invalid operand to unary operation. (have '%s')"
ERR_CC_MALFORMED_ASM_BLOCK                           cc-malformed-asm-block                   "Malformed assembler in inline asm, check that every '<' is accompanied by another '>'."
ERR_CC_VAR_NOT_ATOMIC_ADR                            cc-var-not-atomic-adr                    "Cannot get atomic adress of '%s'. Make sure that only variables in the local scope are accessed."
ERR_CC_VAR_ASM_REF                                   cc-var-asm-ref                           "Cannot reference a local variable in __asm."
ERR_CC_EXPECTED_SCALAR_FOR                           cc-expected-scalar-for                   "Expected scalar type for conditinal expression in for statement"
ERR_CC_EXPECTED_SCALAR_WHILE                         cc-expected-scalar-while                 "Expected scalar type for conditinal expression in while statement"
ERR_CC_EXPECTED_SCALAR_DOWHILE                       cc-expected-scalar-dowhile               "Expected scalar type for conditinal expression in do-while statement"

ERR_CC_EXPECTED_SCALAR_IF                            cc-expected-scalar-if                    "Expected scalar type for conditinal expression in if statement"
ERR_CC_EXPECTED_INTEGRAL_SWITCH                      cc-expected-integral-switch              "Expected integral type for controlling expression in switch statement"
ERR_CC_DUPLICATE_LABEL                               cc-duplicate-label                       "duplicate label ‘%s’"

ERR_CC_NOTE_DUPLICATE_LABEL                          cc-note-duplicate-label                  "NOTE: previous definition of ‘%s’ was here"
ERR_CC_ARRAY_ACCESS_NO_POINTER                       cc-array-access-no-pointer               "subscripted value is neither array nor pointer."
ERR_CC_DEREF_INCOMPLETE_TYPE                         cc-deref-incomplete-type                 "dereferencing pointer to incomplete type."
ERR_CC_ARRAY_SUB_NOT_INT                             cc-array-sub-not-int                     "array subscript is not an integer."

ERR_CC_CALLED_OBJ_NOT_FUNC                           cc-called-obj-not-func                   "called object is not a function."
ERR_CC_CALLED_FUNC_NUM_PARAMS                        cc-called-func-num-params                "the function call has the wrong amount of arguments."

ERR_CC_EXPECTED_SCALAR_INCDEC                        cc-expected-scalar-incdec                "Expected scalar type for inner expression of ++, -- operator"
ERR_CC_INCDEC_NO_MOD_LVALUE                          cc-incdec-no-mod-lvalue                  "invalid ++,-- operator on non modifiable expression."
ERR_CC_ASSIGN_NO_MOD_LVALUE                          cc-assign-no-mod-lvalue                  "Left side of assignment is not modifiable."

ERR_CC_UNARY_PLUS_MINUS_ARITH                        cc-unary-plus-minus-arith                "expected arithmetc type for operand of unary +,- operator."
ERR_CC_UNARY_INV_INTEGRAL                            cc-unary-inv-integral                    "expected integral type for operand of unary ~ operator."
ERR_CC_UNARY_NOT_SCALAR                              cc-unary-not-scalar                      "expected scalar type for operand of unary ! operator."
ERR_CC_SIZEOF_FUNC                                   cc-sizeof-func                           "cannot get size of function designator."
ERR_CC_BIN_EXPECTED_ARITH                            cc-bin-expected-arith                    "expected arithmetic type in binary operator."
ERR_CC_BIN_EXPECTED_INTEGRAL                         cc-bin-expected-integral                 "expected integral type in binary operator."
ERR_CC_BIN_ADD_INVALID_TYPES                         cc-bin-add-invalid-types                 "invalid type(s) to binary +"
ERR_CC_BIN_SUB_INVALID_TYPES                         cc-bin-sub-invalid-types                 "invalid type(s) to binary -"
ERR_CC_COMP_INVALID_TYPES                            cc-comp-invalid-types                    "invalid type(s) to comparison operator."
ERR_CC_PTR_NOT_COMPAT                                cc-ptr-not-compat                        "base types of pointers in binary operation not compatible"
ERR_CC_ASSIGN_INVALID_TYPES                          cc-assign-invalid-types                  "non compatible types in assignment operation"

ERR_CC_DECLSPEC_CHAR_DUPL                            cc-declspec-char-dupl                    "duplicate base type 'char' in type specifiers"
ERR_CC_DECLSPEC_SHORT_DUPL                           cc-declspec-short-dupl                   "duplicate base type 'short' in type specifiers"
ERR_CC_DECLSPEC_INT_DUPL                             cc-declspec-int-dupl                     "duplicate base type 'int' in type specifiers"
ERR_CC_DECLSPEC_VOID_DUPL                            cc-declspec-void-dupl                    "duplicate base type 'void' in type specifiers"
ERR_CC_DECLSPEC_LONG_DUPL                            cc-declspec-long-dupl                    "duplicate base type 'long' in type specifiers"
ERR_CC_DECLSPEC_FLOAT_DUPL                           cc-declspec-float-dupl                   "duplicate base type 'float' in type specifiers"
ERR_CC_DECLSPEC_DOUBLE_DUPL                          cc-declspec-double-dupl                  "duplicate base type 'double' in type specifiers"
ERR_CC_DECLSPEC_SIGNED_DUPL                          cc-declspec-signed-dupl                  "duplicate base type 'signed' in type specifiers"
ERR_CC_DECLSPEC_UNSIGNED_DUPL                        cc-declspec-unsigned-dupl                "duplicate base type 'unsigned' in type specifiers"
ERR_CC_DECLSPEC_CONFL_SIGNED                         cc-declspec-confl-signed                 "type specifiers define a conflicting signedness, both: 'unsigned' and 'signed' appear"
ERR_CC_DECLSPEC_CONFL                                cc-declspec-confl                        "type specifiers conflict and do not define a unique type"
