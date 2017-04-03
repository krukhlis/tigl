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

namespace tigl
{
    class CCPACSWingCell;
    
    namespace generated
    {
        // This class is used in:
        // CPACSWingCell
        
        // generated from /xsd:schema/xsd:complexType[117]
        class CPACSCellPositioningChordwise
        {
        public:
            TIGL_EXPORT CPACSCellPositioningChordwise(CCPACSWingCell* parent);
            
            TIGL_EXPORT virtual ~CPACSCellPositioningChordwise();
            
            TIGL_EXPORT CCPACSWingCell* GetParent() const;
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasSparUID_choice1() const;
            TIGL_EXPORT const std::string& GetSparUID_choice1() const;
            TIGL_EXPORT void SetSparUID_choice1(const std::string& value);
            
            TIGL_EXPORT bool HasXsi1_choice2() const;
            TIGL_EXPORT const double& GetXsi1_choice2() const;
            TIGL_EXPORT void SetXsi1_choice2(const double& value);
            
            TIGL_EXPORT bool HasXsi2_choice2() const;
            TIGL_EXPORT const double& GetXsi2_choice2() const;
            TIGL_EXPORT void SetXsi2_choice2(const double& value);
            
        protected:
            CCPACSWingCell* m_parent;
            
            boost::optional<std::string> m_sparUID_choice1;
            boost::optional<double>      m_xsi1_choice2;
            boost::optional<double>      m_xsi2_choice2;
            
        private:
            #ifdef HAVE_CPP11
            CPACSCellPositioningChordwise(const CPACSCellPositioningChordwise&) = delete;
            CPACSCellPositioningChordwise& operator=(const CPACSCellPositioningChordwise&) = delete;
            
            CPACSCellPositioningChordwise(CPACSCellPositioningChordwise&&) = delete;
            CPACSCellPositioningChordwise& operator=(CPACSCellPositioningChordwise&&) = delete;
            #else
            CPACSCellPositioningChordwise(const CPACSCellPositioningChordwise&);
            CPACSCellPositioningChordwise& operator=(const CPACSCellPositioningChordwise&);
            #endif
        };
    }
    
    // Aliases in tigl namespace
    // CPACSCellPositioningChordwise is customized, use type CCPACSWingCellPositionChordwise directly
}
