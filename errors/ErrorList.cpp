/**

    File:           ErrorList.cpp

    Project:        DCPU-16 Tools
    Component:      LibDCPU-ci-lang

    Authors:        Patrick Flick

    Description:    Defines the ErrorList class.

**/

#include "ErrorList.h"

#include <errors/derr.defs.h>

#include <cstdio>
#include <iostream>

using namespace dtcc::errors;

void ErrorList::addWarning(int line, std::string file, int errid)
{
    this->addWarning(line, file, errid, std::string(""));
}

void ErrorList::addWarning(int line, std::string file, int errid, std::string errdata)
{
    Error err(line, file, errid, errdata, ErrorList::ERROR_LIST_WARNING);
    this->m_list.push_back(err);
    this->m_hasWarnings = true;
}

void ErrorList::addError(int line, std::string file, int errid)
{
    this->addError(line, file, errid, std::string(""));
}

void ErrorList::addError(int line, std::string file, int errid, std::string errdata)
{
    Error err(line, file, errid, errdata, ErrorList::ERROR_LIST_ERROR);
    this->m_list.push_back(err);
    this->m_hasErrors = true;
}

void ErrorList::addFatalError(int line, std::string file, int errid)
{
    this->addFatalError(line, file, errid, std::string(""));
}

void ErrorList::addFatalError(int line, std::string file, int errid, std::string errdata)
{
    Error err(line, file, errid, errdata, ErrorList::ERROR_LIST_FATAL_ERROR);
    this->m_list.push_back(err);
    this->m_hasErrors = true;
    
    // TODO 
    // FIXME stop execution right away via dhalt
}

void ErrorList::printall()
{
    std::cout << " printing all errors: " << this->m_list.size() << std::endl;
    
    std::vector<Error>::iterator it;
    for (it = this->m_list.begin(); it != this->m_list.end(); it++)
    {
        std::string errwar;
        switch (it->warnErr)
        {
            case ErrorList::ERROR_LIST_WARNING:
                errwar = "[WARNING]";
                break;
            case ErrorList::ERROR_LIST_ERROR:
                errwar = "[ERROR]";
                break;
            case ErrorList::ERROR_LIST_FATAL_ERROR:
                errwar = "[FATAL ERROR]";
                break;
        }
        
        std::string errormsg(derrstr[it->errid]);
        
        if (it->errdata != std::string(""))
        {
            char buffer[256];
            sprintf(buffer, errormsg.c_str(), it->errdata.c_str());
            errormsg = std::string(buffer);
        }
        
        std::cout << it->file << ":" << it->line << " " << errwar << " " << errormsg << std::endl;
    }
}

bool ErrorList::hasWarnings()
{
    return this->m_hasWarnings;
}

bool ErrorList::hasErrors()
{
    return this->m_hasErrors;
}


