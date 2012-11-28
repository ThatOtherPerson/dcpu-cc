///
/// @addtogroup LibDCPU-CI-Lang-C/AST-Nodes
/// @{
///

///
/// @file       TypeNameSpecifier.h
/// @brief      Declaration of the TypeNameSpecifier AST node.
/// @author     Patrick Flick
///

#include "Node.h"

#ifndef __DCPU_CC_AST_NODES_TYPENAMESPECIFIER_H
#define __DCPU_CC_AST_NODES_TYPENAMESPECIFIER_H

// include needed nodes
#include "TypeSpecifier.h"
#include <string>

namespace dtcc
{
    namespace astnodes
    {

        ///
        /// @class      TypeNameSpecifier
        /// @brief      The TypeNameSpecifier AST node.
        ///
        class TypeNameSpecifier : public TypeSpecifier
        {
        public:
            std::string& name;

        
        private:
            ///
            /// @brief          Calls accept(visitor) on all children nodes.
            /// @param visitor  The visitor to be accepted.
            ///
            void allChildrenAccept(dtcc::visitor::Visitor & visitor);
            
        public:
            ///
            /// @brief      The constructor of the TypeNameSpecifier AST node.
            /// @param name TODO: FILLOUT

            ///
            TypeNameSpecifier(std::string& name) : name(name) {}
            
            ///
            /// @brief          The accept method of the Visitor pattern.
            /// @sa             http://en.wikipedia.org/wiki/Visitor_pattern
            /// @param visitor  The visitor to be accepted.
            ///
            /// This is a non recursive version of accept, which calls
            /// only visit(this) and then returns.
            void accept(dtcc::visitor::Visitor & visitor);
            
            ///
            /// @brief          The accept method of the Visitor pattern.
            /// @sa             http://en.wikipedia.org/wiki/Visitor_pattern
            /// @param visitor  The visitor to be accepted.
            ///
            /// This is a post recursive version of accept, meaning that
            /// it first calls visit(this) and then accept(visitor) for
            /// all its children nodes.
            void acceptPostRecursive(dtcc::visitor::Visitor & visitor);
            
            ///
            /// @brief          The accept method of the Visitor pattern.
            /// @sa             http://en.wikipedia.org/wiki/Visitor_pattern
            /// @param visitor  The visitor to be accepted.
            ///
            /// This is a pre recursive version of accept, meaning that
            /// it first calls accept(visitor) for
            /// all its children nodes and only then visit(this).
            void acceptPreRecursive(dtcc::visitor::Visitor & visitor);
            
            ///
            /// @brief      The destructor of the TypeNameSpecifier AST node.
            ///
            ~TypeNameSpecifier();
        };

    } // namespace dtcc
} // namespace astnode

#endif

///
/// @}
///