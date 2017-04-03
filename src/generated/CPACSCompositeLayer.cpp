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

#include "CPACSCompositeLayer.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSCompositeLayer::CPACSCompositeLayer(){}
        CPACSCompositeLayer::~CPACSCompositeLayer() {}
        
        void CPACSCompositeLayer::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element name
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/name")) {
                m_name = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/name");
            }
            
            // read element description
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/description")) {
                m_description = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/description");
            }
            
            // read element thickness
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/thickness")) {
                m_thickness = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/thickness");
            }
            else {
                LOG(ERROR) << "Required element thickness is missing at xpath " << xpath;
            }
            
            // read element phi
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/phi")) {
                m_phi = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/phi");
            }
            else {
                LOG(ERROR) << "Required element phi is missing at xpath " << xpath;
            }
            
            // read element materialUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/materialUID")) {
                m_materialUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/materialUID");
            }
            else {
                LOG(ERROR) << "Required element materialUID is missing at xpath " << xpath;
            }
            
        }
        
        void CPACSCompositeLayer::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element name
            if (m_name) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/name");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/name", *m_name);
            }
            
            // write element description
            if (m_description) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/description");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/description", *m_description);
            }
            
            // write element thickness
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/thickness");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/thickness", m_thickness);
            
            // write element phi
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/phi");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/phi", m_phi);
            
            // write element materialUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/materialUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/materialUID", m_materialUID);
            
        }
        
        bool CPACSCompositeLayer::HasName() const
        {
            return static_cast<bool>(m_name);
        }
        
        const std::string& CPACSCompositeLayer::GetName() const
        {
            return *m_name;
        }
        
        void CPACSCompositeLayer::SetName(const std::string& value)
        {
            m_name = value;
        }
        
        bool CPACSCompositeLayer::HasDescription() const
        {
            return static_cast<bool>(m_description);
        }
        
        const std::string& CPACSCompositeLayer::GetDescription() const
        {
            return *m_description;
        }
        
        void CPACSCompositeLayer::SetDescription(const std::string& value)
        {
            m_description = value;
        }
        
        const double& CPACSCompositeLayer::GetThickness() const
        {
            return m_thickness;
        }
        
        void CPACSCompositeLayer::SetThickness(const double& value)
        {
            m_thickness = value;
        }
        
        const double& CPACSCompositeLayer::GetPhi() const
        {
            return m_phi;
        }
        
        void CPACSCompositeLayer::SetPhi(const double& value)
        {
            m_phi = value;
        }
        
        const std::string& CPACSCompositeLayer::GetMaterialUID() const
        {
            return m_materialUID;
        }
        
        void CPACSCompositeLayer::SetMaterialUID(const std::string& value)
        {
            m_materialUID = value;
        }
        
    }
}
