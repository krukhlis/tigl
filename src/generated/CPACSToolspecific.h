// Copyright (c) 2016 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <tixi.h>
#include <string>
#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include "tigl_internal.h"
#include "CPACSCFDTool.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSCpacs
        
        // generated from /xsd:schema/xsd:complexType[827]
        class CPACSToolspecific
        {
        public:
            TIGL_EXPORT CPACSToolspecific();
            TIGL_EXPORT virtual ~CPACSToolspecific();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasCFD() const;
            TIGL_EXPORT const CPACSCFDTool& GetCFD() const;
            TIGL_EXPORT CPACSCFDTool& GetCFD();
            
        protected:
            boost::optional<CPACSCFDTool> m_cFD;
            
        private:
            #ifdef HAVE_CPP11
            CPACSToolspecific(const CPACSToolspecific&) = delete;
            CPACSToolspecific& operator=(const CPACSToolspecific&) = delete;
            
            CPACSToolspecific(CPACSToolspecific&&) = delete;
            CPACSToolspecific& operator=(CPACSToolspecific&&) = delete;
            #else
            CPACSToolspecific(const CPACSToolspecific&);
            CPACSToolspecific& operator=(const CPACSToolspecific&);
            #endif
        };
    }
    
    // Aliases in tigl namespace
    #ifdef HAVE_CPP11
    using CCPACSToolspecific = generated::CPACSToolspecific;
    #else
    typedef generated::CPACSToolspecific CCPACSToolspecific;
    #endif
}
