///
/// @addtogroup LibDCPU-CI-Lang-C/AST-Nodes
/// @{
///

///
/// @file       BlockStatement.cpp
/// @brief      Definition of the BlockStatement AST node.
/// @author     Patrick Flick
///

#include "BlockStatement.h"

using namespace dcpucc::astnodes;

// calls acceptPreRecursive(visitor) for all children nodes of this AST node
void BlockStatement::allChildrenAcceptPreRecursive(dcpucc::visitor::Visitor & visitor)
{
    // call accept for all children
    if (this->declarations != NULL)
        for (Declarations::iterator i = this->declarations->begin(); i != this->declarations->end(); ++i)
            (*i)->acceptPreRecursive(visitor);
    if (this->statements != NULL)
        for (Statements::iterator i = this->statements->begin(); i != this->statements->end(); ++i)
            (*i)->acceptPreRecursive(visitor);
}

// calls acceptPostRecursive(visitor) for all children nodes of this AST node
void BlockStatement::allChildrenAcceptPostRecursive(dcpucc::visitor::Visitor & visitor)
{
    // call accept for all children
    if (this->declarations != NULL)
        for (Declarations::iterator i = this->declarations->begin(); i != this->declarations->end(); ++i)
            (*i)->acceptPostRecursive(visitor);
    if (this->statements != NULL)
        for (Statements::iterator i = this->statements->begin(); i != this->statements->end(); ++i)
            (*i)->acceptPostRecursive(visitor);
}

// calls accept(visitor) for all children nodes of this AST node
void BlockStatement::allChildrenAccept(dcpucc::visitor::Visitor & visitor)
{
    // call accept for all children
    if (this->declarations != NULL)
        for (Declarations::iterator i = this->declarations->begin(); i != this->declarations->end(); ++i)
            (*i)->accept(visitor);
    if (this->statements != NULL)
        for (Statements::iterator i = this->statements->begin(); i != this->statements->end(); ++i)
            (*i)->accept(visitor);
}

// implements the visitor pattern
void BlockStatement::accept(dcpucc::visitor::Visitor & visitor)
{
    visitor.visit(this);
}

// implements the post recursive visitor pattern
void BlockStatement::acceptPostRecursive(dcpucc::visitor::Visitor & visitor)
{
    visitor.visit(this);
    this->allChildrenAcceptPostRecursive(visitor);
}

// implements the pre recursive visitor pattern
void BlockStatement::acceptPreRecursive(dcpucc::visitor::Visitor & visitor)
{
    this->allChildrenAcceptPreRecursive(visitor);
    visitor.visit(this);
}

// implements the destructor, which deletes all children
BlockStatement::~BlockStatement()
{
    if (this->declarations != NULL)
        for (Declarations::iterator i = this->declarations->begin(); i != this->declarations->end(); ++i)
            this->safe_delete((*i));
    if (this->statements != NULL)
        for (Statements::iterator i = this->statements->begin(); i != this->statements->end(); ++i)
            this->safe_delete((*i));
    this->safe_delete(this->declarations);
    this->safe_delete(this->statements);
}

///
/// @}
///