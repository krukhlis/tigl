/* 
* Copyright (C) 2007-2011 German Aerospace Center (DLR/SC)
*
* Created: 2010-08-13 Markus Litz <Markus.Litz@dlr.de>
* Changed: $Id: CCPACSWingSectionElement.h 4416 2011-02-08 21:03:40Z litz_ma $ 
*
* Version: $Revision: 4416 $
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
/**
* @file
* @brief  Implementation of CPACS wing section element handling routines.
*/

#ifndef CCPACSWINGSECTIONELEMENT_H
#define CCPACSWINGSECTIONELEMENT_H

#include "tixi.h"
#include "CTiglTransformation.h"
#include "CTiglPoint.h"
#include <string>

namespace tigl {

	class CCPACSWingSectionElement
	{

	public:
		// Constructor
		CCPACSWingSectionElement();

		// Virtual Destructor
		virtual ~CCPACSWingSectionElement(void);

		// Read CPACS wing section element
		void ReadCPACS(TixiDocumentHandle tixiHandle, const std::string& elementXPath);

		// Returns the UID of the referenced wing profile
		std::string GetProfileIndex(void) const;

		// Returns the UID of the WingSectionElement
		std::string GetUID(void) const;

		// Returns the UID of the profile of this element
		std::string GetProfileUID(void) const;

		// Gets the section element transformation
		CTiglTransformation GetSectionElementTransformation(void) const;

	protected:
		// Cleanup routine
		void Cleanup(void);

		// Build transformation matrix for the section element
		void BuildMatrix(void);

		// Update internal section element data
		void Update(void);

	private:
		// Copy constructor
		CCPACSWingSectionElement(const CCPACSWingSectionElement& ) { /* Do nothing */ }

		// Assignment operator
		void operator=(const CCPACSWingSectionElement& ) { /* Do nothing */ }

	private:
		std::string           name;           /**< Section name                          */
		std::string           profileUID;     /**< Profile index in wing profile library */
		std::string			  uID;			  /**< UID of the WingSectionElement		 */
		CTiglTransformation   transformation; /**< Section element transformation        */
		CTiglPoint            translation;
		CTiglPoint            scaling;
		CTiglPoint            rotation;

	};

} // end namespace tigl

#endif // CCPACSWINGSECTIONELEMENT_H