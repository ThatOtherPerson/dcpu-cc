///
/// @addtogroup LibDCPU-CI-Lang-C/AST-Nodes
/// @{
///

///
/// @file       TypeBaseSpecifier.cpp
/// @brief      Definition of the TypeBaseSpecifier AST node.
/// @author     Patrick Flick
///

#include "TypeBaseSpecifier.h"

using namespace dtcc::astnodes;

// calls acceptPreRecursive(visitor) for all children nodes of this AST node
void TypeBaseSpecifier::allChildrenAcceptPreRecursive(dtcc::visitor::Visitor & visitor)
{
    // nothing to do here
}

// calls acceptPostRecursive(visitor) for all children nodes of this AST node
void TypeBaseSpecifier::allChildrenAcceptPostRecursive(dtcc::visitor::Visitor & visitor)
{
    // nothing to do here
}

// calls accept(visitor) for all children nodes of this AST node
void TypeBaseSpecifier::allChildrenAccept(dtcc::visitor::Visitor & visitor)
{
    // nothing to do here
}

// implements the visitor pattern
void TypeBaseSpecifier::accept(dtcc::visitor::Visitor & visitor)
{
    visitor.visit(this);
}

// implements the post recursive visitor pattern
void TypeBaseSpecifier::acceptPostRecursive(dtcc::visitor::Visitor & visitor)
{
    visitor.visit(this);
    this->allChildrenAcceptPostRecursive(visitor);
}

// implements the pre recursive visitor pattern
void TypeBaseSpecifier::acceptPreRecursive(dtcc::visitor::Visitor & visitor)
{
    this->allChildrenAcceptPreRecursive(visitor);
    visitor.visit(this);
}

// implements the destructor, which deletes all children
TypeBaseSpecifier::~TypeBaseSpecifier()
{
}

///
/// @}
///