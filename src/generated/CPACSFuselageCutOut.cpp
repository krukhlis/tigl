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

#include "CPACSFuselageCutOut.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSFuselageCutOut::CPACSFuselageCutOut(){}
        CPACSFuselageCutOut::~CPACSFuselageCutOut() {}
        
        void CPACSFuselageCutOut::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            }
            else {
                LOG(ERROR) << "Required attribute uID is missing at xpath " << xpath;
            }
            
            // read element name
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/name")) {
                m_name = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/name");
            }
            
            // read element description
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/description")) {
                m_description = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/description");
            }
            
            // read element positionX
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/positionX")) {
                m_positionX = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/positionX");
            }
            else {
                LOG(ERROR) << "Required element positionX is missing at xpath " << xpath;
            }
            
            // read element referenceY
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/referenceY")) {
                m_referenceY = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/referenceY");
            }
            else {
                LOG(ERROR) << "Required element referenceY is missing at xpath " << xpath;
            }
            
            // read element referenceZ
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/referenceZ")) {
                m_referenceZ = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/referenceZ");
            }
            else {
                LOG(ERROR) << "Required element referenceZ is missing at xpath " << xpath;
            }
            
            // read element referenceAngle
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/referenceAngle")) {
                m_referenceAngle = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/referenceAngle");
            }
            else {
                LOG(ERROR) << "Required element referenceAngle is missing at xpath " << xpath;
            }
            
            // read element orientationVector
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/orientationVector")) {
                m_orientationVector.ReadCPACS(tixiHandle, xpath + "/orientationVector");
            }
            else {
                LOG(ERROR) << "Required element orientationVector is missing at xpath " << xpath;
            }
            
            // read element alignmentVector
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/alignmentVector")) {
                m_alignmentVector = boost::in_place();
                try {
                    m_alignmentVector->ReadCPACS(tixiHandle, xpath + "/alignmentVector");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read alignmentVector at xpath << " << xpath << ": " << e.what();
                    m_alignmentVector = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read alignmentVector at xpath << " << xpath << ": " << e.getError();
                    m_alignmentVector = boost::none;
                }
            }
            
            // read element deltaY
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/deltaY")) {
                m_deltaY = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/deltaY");
            }
            else {
                LOG(ERROR) << "Required element deltaY is missing at xpath " << xpath;
            }
            
            // read element deltaZ
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/deltaZ")) {
                m_deltaZ = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/deltaZ");
            }
            else {
                LOG(ERROR) << "Required element deltaZ is missing at xpath " << xpath;
            }
            
            // read element deltaY1
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/deltaY1")) {
                m_deltaY1 = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/deltaY1");
            }
            
            // read element deltaZ1
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/deltaZ1")) {
                m_deltaZ1 = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/deltaZ1");
            }
            
            // read element filletRadius
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/filletRadius")) {
                m_filletRadius = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/filletRadius");
            }
            else {
                LOG(ERROR) << "Required element filletRadius is missing at xpath " << xpath;
            }
            
            // read element cutoutType
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/cutoutType")) {
                m_cutoutType.ReadCPACS(tixiHandle, xpath + "/cutoutType");
            }
            else {
                LOG(ERROR) << "Required element cutoutType is missing at xpath " << xpath;
            }
            
        }
        
        void CPACSFuselageCutOut::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/uID");
            tixihelper::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);
            
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
            
            // write element positionX
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/positionX");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/positionX", m_positionX);
            
            // write element referenceY
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/referenceY");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/referenceY", m_referenceY);
            
            // write element referenceZ
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/referenceZ");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/referenceZ", m_referenceZ);
            
            // write element referenceAngle
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/referenceAngle");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/referenceAngle", m_referenceAngle);
            
            // write element orientationVector
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/orientationVector");
            m_orientationVector.WriteCPACS(tixiHandle, xpath + "/orientationVector");
            
            // write element alignmentVector
            if (m_alignmentVector) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/alignmentVector");
                m_alignmentVector->WriteCPACS(tixiHandle, xpath + "/alignmentVector");
            }
            
            // write element deltaY
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/deltaY");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/deltaY", m_deltaY);
            
            // write element deltaZ
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/deltaZ");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/deltaZ", m_deltaZ);
            
            // write element deltaY1
            if (m_deltaY1) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/deltaY1");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/deltaY1", *m_deltaY1);
            }
            
            // write element deltaZ1
            if (m_deltaZ1) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/deltaZ1");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/deltaZ1", *m_deltaZ1);
            }
            
            // write element filletRadius
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/filletRadius");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/filletRadius", m_filletRadius);
            
            // write element cutoutType
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/cutoutType");
            m_cutoutType.WriteCPACS(tixiHandle, xpath + "/cutoutType");
            
        }
        
        const std::string& CPACSFuselageCutOut::GetUID() const
        {
            return m_uID;
        }
        
        void CPACSFuselageCutOut::SetUID(const std::string& value)
        {
            m_uID = value;
        }
        
        bool CPACSFuselageCutOut::HasName() const
        {
            return static_cast<bool>(m_name);
        }
        
        const std::string& CPACSFuselageCutOut::GetName() const
        {
            return *m_name;
        }
        
        void CPACSFuselageCutOut::SetName(const std::string& value)
        {
            m_name = value;
        }
        
        bool CPACSFuselageCutOut::HasDescription() const
        {
            return static_cast<bool>(m_description);
        }
        
        const std::string& CPACSFuselageCutOut::GetDescription() const
        {
            return *m_description;
        }
        
        void CPACSFuselageCutOut::SetDescription(const std::string& value)
        {
            m_description = value;
        }
        
        const double& CPACSFuselageCutOut::GetPositionX() const
        {
            return m_positionX;
        }
        
        void CPACSFuselageCutOut::SetPositionX(const double& value)
        {
            m_positionX = value;
        }
        
        const double& CPACSFuselageCutOut::GetReferenceY() const
        {
            return m_referenceY;
        }
        
        void CPACSFuselageCutOut::SetReferenceY(const double& value)
        {
            m_referenceY = value;
        }
        
        const double& CPACSFuselageCutOut::GetReferenceZ() const
        {
            return m_referenceZ;
        }
        
        void CPACSFuselageCutOut::SetReferenceZ(const double& value)
        {
            m_referenceZ = value;
        }
        
        const double& CPACSFuselageCutOut::GetReferenceAngle() const
        {
            return m_referenceAngle;
        }
        
        void CPACSFuselageCutOut::SetReferenceAngle(const double& value)
        {
            m_referenceAngle = value;
        }
        
        const CPACSPointXYZ& CPACSFuselageCutOut::GetOrientationVector() const
        {
            return m_orientationVector;
        }
        
        CPACSPointXYZ& CPACSFuselageCutOut::GetOrientationVector()
        {
            return m_orientationVector;
        }
        
        bool CPACSFuselageCutOut::HasAlignmentVector() const
        {
            return static_cast<bool>(m_alignmentVector);
        }
        
        const CPACSPointXYZ& CPACSFuselageCutOut::GetAlignmentVector() const
        {
            return *m_alignmentVector;
        }
        
        CPACSPointXYZ& CPACSFuselageCutOut::GetAlignmentVector()
        {
            return *m_alignmentVector;
        }
        
        const double& CPACSFuselageCutOut::GetDeltaY() const
        {
            return m_deltaY;
        }
        
        void CPACSFuselageCutOut::SetDeltaY(const double& value)
        {
            m_deltaY = value;
        }
        
        const double& CPACSFuselageCutOut::GetDeltaZ() const
        {
            return m_deltaZ;
        }
        
        void CPACSFuselageCutOut::SetDeltaZ(const double& value)
        {
            m_deltaZ = value;
        }
        
        bool CPACSFuselageCutOut::HasDeltaY1() const
        {
            return static_cast<bool>(m_deltaY1);
        }
        
        const double& CPACSFuselageCutOut::GetDeltaY1() const
        {
            return *m_deltaY1;
        }
        
        void CPACSFuselageCutOut::SetDeltaY1(const double& value)
        {
            m_deltaY1 = value;
        }
        
        bool CPACSFuselageCutOut::HasDeltaZ1() const
        {
            return static_cast<bool>(m_deltaZ1);
        }
        
        const double& CPACSFuselageCutOut::GetDeltaZ1() const
        {
            return *m_deltaZ1;
        }
        
        void CPACSFuselageCutOut::SetDeltaZ1(const double& value)
        {
            m_deltaZ1 = value;
        }
        
        const double& CPACSFuselageCutOut::GetFilletRadius() const
        {
            return m_filletRadius;
        }
        
        void CPACSFuselageCutOut::SetFilletRadius(const double& value)
        {
            m_filletRadius = value;
        }
        
        const CPACSFuselageCutOut_cutoutType& CPACSFuselageCutOut::GetCutoutType() const
        {
            return m_cutoutType;
        }
        
        CPACSFuselageCutOut_cutoutType& CPACSFuselageCutOut::GetCutoutType()
        {
            return m_cutoutType;
        }
        
    }
}
