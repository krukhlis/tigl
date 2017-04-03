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

#include "CPACSComposite.h"
#include "CPACSComposites.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSComposites::CPACSComposites(){}
        CPACSComposites::~CPACSComposites() {}
        
        void CPACSComposites::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element composite
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/composite")) {
                tixihelper::TixiReadElements(tixiHandle, xpath + "/composite", m_composites);
            }
            
        }
        
        void CPACSComposites::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element composite
            tixihelper::TixiSaveElements(tixiHandle, xpath + "/composite", m_composites);
            
        }
        
        const std::vector<unique_ptr<CPACSComposite> >& CPACSComposites::GetComposites() const
        {
            return m_composites;
        }
        
        std::vector<unique_ptr<CPACSComposite> >& CPACSComposites::GetComposites()
        {
            return m_composites;
        }
        
    }
}
