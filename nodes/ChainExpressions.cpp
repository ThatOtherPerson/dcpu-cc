///
/// @addtogroup LibDCPU-CI-Lang-C/AST-Nodes
/// @{
///

///
/// @file       ChainExpressions.cpp
/// @brief      Definition of the ChainExpressions AST node.
/// @author     Patrick Flick
///

#include "ChainExpressions.h"

using namespace dtcc::astnodes;

// calls acceptPreRecursive(visitor) for all children nodes of this AST node
void ChainExpressions::allChildrenAcceptPreRecursive(dtcc::visitor::Visitor & visitor)
{

}

// calls acceptPostRecursive(visitor) for all children nodes of this AST node
void ChainExpressions::allChildrenAcceptPostRecursive(dtcc::visitor::Visitor & visitor)
{

}

// calls accept(visitor) for all children nodes of this AST node
void ChainExpressions::allChildrenAccept(dtcc::visitor::Visitor & visitor)
{
    // TODO implement this to call .accept(visitor) for all children nodes
    if (this->exprs != NULL)
        for (Expressions::iterator i = this->exprs->begin(); i != this->exprs->end(); ++i)
            (*i)->accept(visitor);
}

// implements the visitor pattern
void ChainExpressions::accept(dtcc::visitor::Visitor & visitor)
{
    visitor.visit(this);
}

// implements the post recursive visitor pattern
void ChainExpressions::acceptPostRecursive(dtcc::visitor::Visitor & visitor)
{
    visitor.visit(this);
    this->allChildrenAcceptPostRecursive(visitor);
}

// implements the pre recursive visitor pattern
void ChainExpressions::acceptPreRecursive(dtcc::visitor::Visitor & visitor)
{
    this->allChildrenAcceptPreRecursive(visitor);
    visitor.visit(this);
}

// implements the destructor, which deletes all children
ChainExpressions::~ChainExpressions()
{
    delete this->exprs;
}

///
/// @}
///