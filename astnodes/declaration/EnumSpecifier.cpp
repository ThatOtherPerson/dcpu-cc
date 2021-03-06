///
/// @addtogroup LibDCPU-CI-Lang-C/AST-Nodes
/// @{
///

///
/// @file       EnumSpecifier.cpp
/// @brief      Definition of the EnumSpecifier AST node.
/// @author     Patrick Flick
///

#include "EnumSpecifier.h"

using namespace dcpucc::astnodes;

// calls acceptPreRecursive(visitor) for all children nodes of this AST node
void EnumSpecifier::allChildrenAcceptPreRecursive(dcpucc::visitor::Visitor & visitor)
{
    if (this->enums != NULL)
        for(Enumerators::iterator i = this->enums->begin(); i != this->enums->end(); ++i)
            (*i)->acceptPreRecursive(visitor);
}

// calls acceptPostRecursive(visitor) for all children nodes of this AST node
void EnumSpecifier::allChildrenAcceptPostRecursive(dcpucc::visitor::Visitor & visitor)
{
    if (this->enums != NULL)
        for(Enumerators::iterator i = this->enums->begin(); i != this->enums->end(); ++i)
            (*i)->acceptPostRecursive(visitor);
}

// calls accept(visitor) for all children nodes of this AST node
void EnumSpecifier::allChildrenAccept(dcpucc::visitor::Visitor & visitor)
{
    if (this->enums != NULL)
        for(Enumerators::iterator i = this->enums->begin(); i != this->enums->end(); ++i)
            (*i)->accept(visitor);
}

// implements the visitor pattern
void EnumSpecifier::accept(dcpucc::visitor::Visitor & visitor)
{
    visitor.visit(this);
}

// implements the post recursive visitor pattern
void EnumSpecifier::acceptPostRecursive(dcpucc::visitor::Visitor & visitor)
{
    visitor.visit(this);
    this->allChildrenAcceptPostRecursive(visitor);
}

// implements the pre recursive visitor pattern
void EnumSpecifier::acceptPreRecursive(dcpucc::visitor::Visitor & visitor)
{
    this->allChildrenAcceptPreRecursive(visitor);
    visitor.visit(this);
}

// implements the destructor, which deletes all children
EnumSpecifier::~EnumSpecifier()
{
    if (this->enums != NULL)
        for(Enumerators::iterator i = this->enums->begin(); i != this->enums->end(); ++i)
            this->safe_delete(*i);
    this->safe_delete(this->enums);
}

///
/// @}
///