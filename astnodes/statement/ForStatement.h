///
/// @addtogroup LibDCPU-CI-Lang-C/AST-Nodes
/// @{
///

///
/// @file       ForStatement.h
/// @brief      Declaration of the ForStatement AST node.
/// @author     Patrick Flick
///

#include <astnodes/Node.h>

#ifndef __DCPU_CC_AST_NODES_FORSTATEMENT_H
#define __DCPU_CC_AST_NODES_FORSTATEMENT_H

// include needed nodes
#include "Statement.h"
#include "ExpressionStatement.h"
#include <astnodes/expression/Expression.h>
#include "LabelStatement.h"


namespace dcpucc
{
    namespace astnodes
    {

        ///
        /// @class      ForStatement
        /// @brief      The ForStatement AST node.
        ///
        class ForStatement : public Statement
        {
        private:
            ///
            /// @brief          Calls acceptPreRecursive(visitor) on all children nodes.
            /// @param visitor  The visitor to be accepted.
            ///
            void allChildrenAcceptPreRecursive(dcpucc::visitor::Visitor & visitor);
            
            ///
            /// @brief          Calls acceptPostRecursive(visitor) on all children nodes.
            /// @param visitor  The visitor to be accepted.
            ///
            void allChildrenAcceptPostRecursive(dcpucc::visitor::Visitor & visitor);
            
        public:
            Statement * initExpr;
            ExpressionStatement * condExpr;
            Expression * loopExpr;
            Statement * statement;
            
            LabelStatement* startLbl;
            LabelStatement* endLbl;
            LabelStatement* continueLbl;

            
        public:
            ///
            /// @brief      The constructor of the ForStatement AST node.
            /// @param initExpr TODO: FILLOUT
            /// @param condExpr TODO: FILLOUT
            /// @param loopExpr TODO: FILLOUT
            /// @param statement TODO: FILLOUT

            ///
            ForStatement(Statement * initExpr, ExpressionStatement * condExpr, Expression * loopExpr, Statement * statement)
            : initExpr(initExpr), condExpr(condExpr), loopExpr(loopExpr),
            statement(statement), startLbl(NULL), endLbl(NULL), continueLbl(NULL) {}
            
            ///
            /// @brief          The accept method of the Visitor pattern.
            /// @sa             http://en.wikipedia.org/wiki/Visitor_pattern
            /// @param visitor  The visitor to be accepted.
            ///
            /// This is a non recursive version of accept, which calls
            /// only visit(this) and then returns.
            void accept(dcpucc::visitor::Visitor & visitor);
            
            ///
            /// @brief          The accept method of the Visitor pattern.
            /// @sa             http://en.wikipedia.org/wiki/Visitor_pattern
            /// @param visitor  The visitor to be accepted.
            ///
            /// This is a post recursive version of accept, meaning that
            /// it first calls visit(this) and then accept(visitor) for
            /// all its children nodes.
            void acceptPostRecursive(dcpucc::visitor::Visitor & visitor);
            
            ///
            /// @brief          The accept method of the Visitor pattern.
            /// @sa             http://en.wikipedia.org/wiki/Visitor_pattern
            /// @param visitor  The visitor to be accepted.
            ///
            /// This is a pre recursive version of accept, meaning that
            /// it first calls accept(visitor) for
            /// all its children nodes and only then visit(this).
            void acceptPreRecursive(dcpucc::visitor::Visitor & visitor);
            
            ///
            /// @brief          Calls accept(visitor) on all children nodes.
            /// @param visitor  The visitor to be accepted.
            ///
            void allChildrenAccept(dcpucc::visitor::Visitor & visitor);
            
            ///
            /// @brief      The destructor of the ForStatement AST node.
            ///
            virtual ~ForStatement();
        };

    } // namespace dcpucc
} // namespace astnode

#endif

///
/// @}
///