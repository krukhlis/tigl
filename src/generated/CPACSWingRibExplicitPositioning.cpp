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

#include <cassert>
#include "CCPACSWingRibsDefinition.h"
#include "CPACSWingRibExplicitPositioning.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSWingRibExplicitPositioning::CPACSWingRibExplicitPositioning(CCPACSWingRibsDefinition* parent)
        {
            //assert(parent != NULL);
            m_parent = parent;
        }
        
        CPACSWingRibExplicitPositioning::~CPACSWingRibExplicitPositioning() {}
        
        CCPACSWingRibsDefinition* CPACSWingRibExplicitPositioning::GetParent() const
        {
            return m_parent;
        }
        
        void CPACSWingRibExplicitPositioning::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element startReference
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/startReference")) {
                m_startReference = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/startReference");
            }
            else {
                LOG(ERROR) << "Required element startReference is missing at xpath " << xpath;
            }
            
            // read element etaStart
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/etaStart")) {
                m_etaStart = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/etaStart");
            }
            else {
                LOG(ERROR) << "Required element etaStart is missing at xpath " << xpath;
            }
            
            // read element endReference
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/endReference")) {
                m_endReference = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/endReference");
            }
            else {
                LOG(ERROR) << "Required element endReference is missing at xpath " << xpath;
            }
            
            // read element etaEnd
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/etaEnd")) {
                m_etaEnd = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/etaEnd");
            }
            else {
                LOG(ERROR) << "Required element etaEnd is missing at xpath " << xpath;
            }
            
        }
        
        void CPACSWingRibExplicitPositioning::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element startReference
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/startReference");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/startReference", m_startReference);
            
            // write element etaStart
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/etaStart");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/etaStart", m_etaStart);
            
            // write element endReference
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/endReference");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/endReference", m_endReference);
            
            // write element etaEnd
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/etaEnd");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/etaEnd", m_etaEnd);
            
        }
        
        const std::string& CPACSWingRibExplicitPositioning::GetStartReference() const
        {
            return m_startReference;
        }
        
        void CPACSWingRibExplicitPositioning::SetStartReference(const std::string& value)
        {
            m_startReference = value;
        }
        
        const double& CPACSWingRibExplicitPositioning::GetEtaStart() const
        {
            return m_etaStart;
        }
        
        void CPACSWingRibExplicitPositioning::SetEtaStart(const double& value)
        {
            m_etaStart = value;
        }
        
        const std::string& CPACSWingRibExplicitPositioning::GetEndReference() const
        {
            return m_endReference;
        }
        
        void CPACSWingRibExplicitPositioning::SetEndReference(const std::string& value)
        {
            m_endReference = value;
        }
        
        const double& CPACSWingRibExplicitPositioning::GetEtaEnd() const
        {
            return m_etaEnd;
        }
        
        void CPACSWingRibExplicitPositioning::SetEtaEnd(const double& value)
        {
            m_etaEnd = value;
        }
        
    }
}
