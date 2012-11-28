///
/// @addtogroup LibDCPU-CI-Lang-C/AST-Nodes
/// @{
///

///
/// @file       LabelStatement.h
/// @brief      Declaration of the LabelStatement AST node.
/// @author     Patrick Flick
///

#include "Node.h"

#ifndef __DCPU_CC_AST_NODES_LABELSTATEMENT_H
#define __DCPU_CC_AST_NODES_LABELSTATEMENT_H

// include needed nodes
#include "Statement.h"
#include <string>

namespace dtcc
{
    namespace astnodes
    {

        ///
        /// @class      LabelStatement
        /// @brief      The LabelStatement AST node.
        ///
        class LabelStatement : public Statement
        {
        public:
            std::string& label;
            Statement * statement;

        
        private:
            ///
            /// @brief          Calls accept(visitor) on all children nodes.
            /// @param visitor  The visitor to be accepted.
            ///
            void allChildrenAccept(dtcc::visitor::Visitor & visitor);
            
        public:
            ///
            /// @brief      The constructor of the LabelStatement AST node.
            /// @param label TODO: FILLOUT
            /// @param statement TODO: FILLOUT

            ///
            LabelStatement(std::string& label, Statement * statement) : label(label), statement(statement) {}
            
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
            /// @brief      The destructor of the LabelStatement AST node.
            ///
            ~LabelStatement();
        };

    } // namespace dtcc
} // namespace astnode

#endif

///
/// @}
///