///
/// @addtogroup LibDCPU-CI-Lang-C/AST-Nodes
/// @{
///

///
/// @file       TypeBaseSpecifier.h
/// @brief      Declaration of the TypeBaseSpecifier AST node.
/// @author     Patrick Flick
///

#include "Node.h"

#ifndef __DCPU_CC_AST_NODES_TYPEBASESPECIFIER_H
#define __DCPU_CC_AST_NODES_TYPEBASESPECIFIER_H

// include needed nodes
#include "TypeSpecifier.h"


namespace dtcc
{
    namespace astnodes
    {

        ///
        /// @class      TypeBaseSpecifier
        /// @brief      The TypeBaseSpecifier AST node.
        ///
        class TypeBaseSpecifier : public TypeSpecifier
        {
        public:
            int token;

        
        private:
            ///
            /// @brief          Calls accept(visitor) on all children nodes.
            /// @param visitor  The visitor to be accepted.
            ///
            void allChildrenAccept(dtcc::visitor::Visitor & visitor);
            
        public:
            ///
            /// @brief      The constructor of the TypeBaseSpecifier AST node.
            /// @param token TODO: FILLOUT

            ///
            TypeBaseSpecifier(int token) : token(token) {}
            
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
            /// @brief      The destructor of the TypeBaseSpecifier AST node.
            ///
            ~TypeBaseSpecifier();
        };

    } // namespace dtcc
} // namespace astnode

#endif

///
/// @}
///