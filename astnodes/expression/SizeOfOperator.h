///
/// @addtogroup LibDCPU-CI-Lang-C/AST-Nodes
/// @{
///

///
/// @file       SizeOfOperator.h
/// @brief      Declaration of the SizeOfOperator AST node.
/// @author     Patrick Flick
///

#include "Node.h"

#ifndef __DCPU_CC_AST_NODES_SIZEOFOPERATOR_H
#define __DCPU_CC_AST_NODES_SIZEOFOPERATOR_H

// include needed nodes
#include "Expression.h"
#include "TypeName.h"


namespace dtcc
{
    namespace astnodes
    {

        ///
        /// @class      SizeOfOperator
        /// @brief      The SizeOfOperator AST node.
        ///
        class SizeOfOperator : public Expression
        {
        private:
            ///
            /// @brief          Calls acceptPreRecursive(visitor) on all children nodes.
            /// @param visitor  The visitor to be accepted.
            ///
            void allChildrenAcceptPreRecursive(dtcc::visitor::Visitor & visitor);
            
            ///
            /// @brief          Calls acceptPostRecursive(visitor) on all children nodes.
            /// @param visitor  The visitor to be accepted.
            ///
            void allChildrenAcceptPostRecursive(dtcc::visitor::Visitor & visitor);
            
        public:
            TypeName * typeName;
            Expression * expr;
            Expression * constExpr;

            
        public:
            ///
            /// @brief      The constructor of the SizeOfOperator AST node.
            /// @param typeName TODO: FILLOUT

            ///
            SizeOfOperator(TypeName * typeName) : typeName(typeName), expr(NULL) {}
            
            ///
            /// @brief      The constructor of the SizeOfOperator AST node.
            /// @param typeName TODO: FILLOUT
            
            ///
            SizeOfOperator(Expression * expr) : typeName(NULL), expr(expr) {}
            
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
            /// @brief          Calls accept(visitor) on all children nodes.
            /// @param visitor  The visitor to be accepted.
            ///
            void allChildrenAccept(dtcc::visitor::Visitor & visitor);
            
            ///
            /// @brief      The destructor of the SizeOfOperator AST node.
            ///
            virtual ~SizeOfOperator();
        };

    } // namespace dtcc
} // namespace astnode

#endif

///
/// @}
///