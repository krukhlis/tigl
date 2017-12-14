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

#include "CPACSPointAbsRel.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSPointAbsRel::CPACSPointAbsRel(CTiglUIDManager* uidMgr) :
            m_uidMgr(uidMgr) {}
        
        CPACSPointAbsRel::~CPACSPointAbsRel()
        {
            if (m_uidMgr) m_uidMgr->TryUnregisterObject(m_uID);
        }
        
        CTiglUIDManager& CPACSPointAbsRel::GetUIDManager()
        {
            return *m_uidMgr;
        }
        
        const CTiglUIDManager& CPACSPointAbsRel::GetUIDManager() const
        {
            return *m_uidMgr;
        }
        
        void CPACSPointAbsRel::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixi::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixi::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
                if (m_uID.empty()) {
                    LOG(WARNING) << "Required attribute uID is empty at xpath " << xpath;
                }
            }
            else {
                LOG(ERROR) << "Required attribute uID is missing at xpath " << xpath;
            }
            
            // read attribute refType
            if (tixi::TixiCheckAttribute(tixiHandle, xpath, "refType")) {
                m_refType = stringToECPACSTranslationType(tixi::TixiGetAttribute<std::string>(tixiHandle, xpath, "refType"));
            }
            
            // read element x
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/x")) {
                m_x = tixi::TixiGetElement<double>(tixiHandle, xpath + "/x");
            }
            
            // read element y
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/y")) {
                m_y = tixi::TixiGetElement<double>(tixiHandle, xpath + "/y");
            }
            
            // read element z
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/z")) {
                m_z = tixi::TixiGetElement<double>(tixiHandle, xpath + "/z");
            }
            
            if (m_uidMgr && !m_uID.empty()) m_uidMgr->RegisterObject(m_uID, *this);
        }
        
        void CPACSPointAbsRel::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            tixi::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);
            
            // write attribute refType
            if (m_refType) {
                tixi::TixiSaveAttribute(tixiHandle, xpath, "refType", ECPACSTranslationTypeToString(*m_refType));
            } else {
                if (tixi::TixiCheckAttribute(tixiHandle, xpath, "refType")) {
                    tixi::TixiRemoveAttribute(tixiHandle, xpath, "refType");
                }
            }
            
            // write element x
            if (m_x) {
                tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/x");
                tixi::TixiSaveElement(tixiHandle, xpath + "/x", *m_x);
            } else {
                if (tixi::TixiCheckElement(tixiHandle, xpath + "/x")) {
                    tixi::TixiRemoveElement(tixiHandle, xpath + "/x");
                }
            }
            
            // write element y
            if (m_y) {
                tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/y");
                tixi::TixiSaveElement(tixiHandle, xpath + "/y", *m_y);
            } else {
                if (tixi::TixiCheckElement(tixiHandle, xpath + "/y")) {
                    tixi::TixiRemoveElement(tixiHandle, xpath + "/y");
                }
            }
            
            // write element z
            if (m_z) {
                tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/z");
                tixi::TixiSaveElement(tixiHandle, xpath + "/z", *m_z);
            } else {
                if (tixi::TixiCheckElement(tixiHandle, xpath + "/z")) {
                    tixi::TixiRemoveElement(tixiHandle, xpath + "/z");
                }
            }
            
        }
        
        const std::string& CPACSPointAbsRel::GetUID() const
        {
            return m_uID;
        }
        
        void CPACSPointAbsRel::SetUID(const std::string& value)
        {
            if (m_uidMgr) {
                m_uidMgr->TryUnregisterObject(m_uID);
                m_uidMgr->RegisterObject(value, *this);
            }
            m_uID = value;
        }
        
        const boost::optional<ECPACSTranslationType>& CPACSPointAbsRel::GetRefType() const
        {
            return m_refType;
        }
        
        void CPACSPointAbsRel::SetRefType(const ECPACSTranslationType& value)
        {
            m_refType = value;
        }
        
        void CPACSPointAbsRel::SetRefType(const boost::optional<ECPACSTranslationType>& value)
        {
            m_refType = value;
        }
        
        const boost::optional<double>& CPACSPointAbsRel::GetX() const
        {
            return m_x;
        }
        
        void CPACSPointAbsRel::SetX(const double& value)
        {
            m_x = value;
        }
        
        void CPACSPointAbsRel::SetX(const boost::optional<double>& value)
        {
            m_x = value;
        }
        
        const boost::optional<double>& CPACSPointAbsRel::GetY() const
        {
            return m_y;
        }
        
        void CPACSPointAbsRel::SetY(const double& value)
        {
            m_y = value;
        }
        
        void CPACSPointAbsRel::SetY(const boost::optional<double>& value)
        {
            m_y = value;
        }
        
        const boost::optional<double>& CPACSPointAbsRel::GetZ() const
        {
            return m_z;
        }
        
        void CPACSPointAbsRel::SetZ(const double& value)
        {
            m_z = value;
        }
        
        void CPACSPointAbsRel::SetZ(const boost::optional<double>& value)
        {
            m_z = value;
        }
        
    }
}