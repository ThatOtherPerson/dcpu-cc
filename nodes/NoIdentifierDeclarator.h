///
/// @addtogroup LibDCPU-CI-Lang-C/AST-Nodes
/// @{
///

///
/// @file       NoIdentifierDeclarator.h
/// @brief      Declaration of the NoIdentifierDeclarator AST node.
/// @author     Patrick Flick
///

#include "Node.h"

#ifndef __DCPU_CC_AST_NODES_NOIDENTIFIERDECLARATOR_H
#define __DCPU_CC_AST_NODES_NOIDENTIFIERDECLARATOR_H

// include needed nodes
#include "Declarator.h"


namespace dtcc
{
    namespace astnodes
    {

        ///
        /// @class      NoIdentifierDeclarator
        /// @brief      The NoIdentifierDeclarator AST node.
        ///
        class NoIdentifierDeclarator : public Declarator
        {
        public:

        
        private:
            ///
            /// @brief          Calls accept(visitor) on all children nodes.
            /// @param visitor  The visitor to be accepted.
            ///
            void allChildrenAccept(dtcc::visitor::Visitor & visitor);
            
        public:
            ///
            /// @brief      The constructor of the NoIdentifierDeclarator AST node.

            ///
            NoIdentifierDeclarator()  {}
            
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
            /// @brief      The destructor of the NoIdentifierDeclarator AST node.
            ///
            ~NoIdentifierDeclarator();
        };

    } // namespace dtcc
} // namespace astnode

#endif

///
/// @}
///