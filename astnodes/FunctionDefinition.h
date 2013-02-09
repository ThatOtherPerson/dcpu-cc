///
/// @addtogroup LibDCPU-CI-Lang-C/AST-Nodes
/// @{
///

///
/// @file       FunctionDefinition.h
/// @brief      Declaration of the FunctionDefinition AST node.
/// @author     Patrick Flick
///

#include "Node.h"

#ifndef __DCPU_CC_AST_NODES_FUNCTIONDEFINITION_H
#define __DCPU_CC_AST_NODES_FUNCTIONDEFINITION_H

// include needed nodes
#include "ExternalDeclaration.h"
#include "BlockStatement.h"
#include "DeclarationSpecifiers.h"
#include "Declarator.h"


namespace dtcc
{
    namespace astnodes
    {

        ///
        /// @class      FunctionDefinition
        /// @brief      The FunctionDefinition AST node.
        ///
        class FunctionDefinition : public ExternalDeclaration
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
            DeclarationSpecifiers * declSpecifiers;
            Declarator * declarator;
            BlockStatement * block;
            
            // values assigned during semantic analysis
            std::string name;
            uint16_t stackSize;
            uint16_t paramSize;
            bool exportFunction;
            
        public:
            ///
            /// @brief      The constructor of the FunctionDefinition AST node.
            /// @param declSpecifiers TODO: FILLOUT
            /// @param declarator TODO: FILLOUT
            /// @param block TODO: FILLOUT

            ///
            FunctionDefinition(DeclarationSpecifiers * declSpecifiers, Declarator * declarator, BlockStatement * block) : declSpecifiers(declSpecifiers), declarator(declarator), block(block), exportFunction(true) {}
            
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
            /// @brief      The destructor of the FunctionDefinition AST node.
            ///
            virtual ~FunctionDefinition();
        };

    } // namespace dtcc
} // namespace astnode

#endif

///
/// @}
///