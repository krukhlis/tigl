/* 
* Copyright (C) 2007-2011 German Aerospace Center (DLR/SC)
*
* Created: 2010-08-13 Markus Litz <Markus.Litz@dlr.de>
* Changed: $Id: CCPACSWingSectionElements.h 4416 2011-02-08 21:03:40Z litz_ma $ 
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
* @brief  Implementation of CPACS wing section elements handling routines.
*/

#ifndef CCPACSWINGSECTIONELEMENTS_H
#define CCPACSWINGSECTIONELEMENTS_H

#include "tixi.h"
#include "CCPACSWingSectionElement.h"
#include <string>
#include <vector>

namespace tigl {

	class CCPACSWingSectionElements
	{
	private:
		// Typedef for a CCPACSWingSectionElement container to store the profiles of a section.
		typedef std::vector<CCPACSWingSectionElement*> CCPACSWingSectionElementContainer;

	public:
		// Constructor
		CCPACSWingSectionElements(void);

		// Virtual Destructor
		virtual ~CCPACSWingSectionElements(void);

		// Read CPACS section elements
		void ReadCPACS(TixiDocumentHandle tixiHandle, const std::string& sectionXPath);

		// Get element count for this section
		int GetSectionElementCount(void) const;

		// Get element for a given index
		CCPACSWingSectionElement& GetSectionElement(int index) const;

	protected:
		// Cleanup routine
		void Cleanup(void);

	private:
		// Copy constructor
		CCPACSWingSectionElements(const CCPACSWingSectionElements& ) { /* Do nothing */ }

		// Assignment operator
		void operator=(const CCPACSWingSectionElements& ) { /* Do nothing */ }

	private:
		CCPACSWingSectionElementContainer elements; /**< Section elements */

	};

} // end namespace tigl

#endif // CCPACSWINGSECTIONELEMENTS_H