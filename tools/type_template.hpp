///
/// @addtogroup LibDCPU-CI-Lang-C/Types
/// @{
///

///
/// @file       %ClassName%.h
/// @brief      Declaration of the %ClassName% type class.
/// @author     Patrick Flick
///

#ifndef __DCPU_CC_TYPES_%CLASSNAME%_H
#define __DCPU_CC_TYPES_%CLASSNAME%_H

#include <string>
#include <stdint.h>

// include needed type classes
%nodes_include%

namespace dtcc
{
    namespace types
    {

        ///
        /// @class      %ClassName%
        /// @brief      The %ClassName% type class.
        ///
        class %ClassName% : public %SuperClassName%
        {
            
        public:
%ClassMembers%
            
        public:
            ///
            /// @brief      The constructor of the %ClassName% type class.
%DoxygenConstructorParams%
            ///
            %ClassName%(%Params%) %ParamInit% {}
            
            ///
            /// @brief          Returns the size of the type in words.
            /// @return         The size of the type.
            ///
            /// This might return 0 if the type is not yet resolved
            /// (i.e. for structs).
            virtual uint16_t getWordSize();

            ///
            /// @brief          Returns whether the type is a complete type.
            /// @return         True, if the type is a complete type, false
            ///                 otherwise
            ///
            virtual bool isComplete();
            
            ///
            /// @brief          Returns a string representation of the type.
            /// @return         A string representation of the type.
            ///
            /// This is used especially for error messages and warnings.
            virtual std::string toString();
            
            ///
            /// @brief      The destructor of the %ClassName% type class.
            ///
            virtual ~%ClassName%();
        };

    } // namespace types
} // namespace dtcc

#endif

///
/// @}
///