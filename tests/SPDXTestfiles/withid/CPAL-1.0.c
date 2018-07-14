/*
** THIS IS A TEST FILE FOR THE SPDX LICENSE DETECTION TESTS											
**																										
** This file has been auto generated using the SPDX License List as represented by
** the JSON files:  https://github.com/spdx/license-list-data 
** 
** This file is for test purposes only. It WILL NOT compile or do anything useful otherwise.
**
** Test File Version: 1.0 No SPDX Identifiers - License List version 2.6
**
** DISCLAIMER
**
** Any copyrights appearing in this test file do so because they were part of the license text as stored by SPDX and are included 
** only for test purposes as they are part of the license text.	They have no meaning, implied or specific, otherwise.	
*/




/*
** LICENSE HEADER AND COPYRIGHT TO DETECT	
** This section either uses either the standard license header, or if one does not exist, the license 
** text as shown on the SPDX License List. In addition, if the file was generated using the write 
** license identifiers option, they will appear before the license text.
** 										
**
** SPDX License to detect: https://spdx.org/licenses/CPAL-1.0.html				
*/



/* SPDX-License-Identifier: CPAL-1.0 */
/*
The contents of this file are subject to the Common Public Attribution
License Version 1.0 (the “License”); you may not use this file
except in compliance with the License. You may obtain a copy of the
License at _____. The License is based on the Mozilla Public License
Version 1.1 but Sections 14 and 15 have been added to cover use of
software over a computer network and provide for limited attribution
for the Original Developer. In addition, Exhibit A has been modified
to be consistent with Exhibit B.

Software distributed under the
License is distributed on an “AS IS” basis, WITHOUT WARRANTY OF
ANY KIND, either express or implied. See the License for the specific
language governing rights and limitations under the License.

The
Original Code is <<var;name=code;original=_____;match=.+>>.
The
Original Developer is not the Initial Developer and is
<<var;name=developer;original=_____;match=.+>>. If left blank, the
Original Developer is the Initial Developer.
The Initial Developer of
the Original Code is
<<var;name=InitialDeveloper;original=_____;match=.+>>. All portions of
the code written by <<var;name=createdby;original=_____;match=.+>> 
are Copyright (c) <<var;name=copyright;original=_____;match=.+>>. All
Rights Reserved.
Contributor
<<var;name=contributor;original=_____;match=.+>>.

Alternatively, the
contents of this file may be used under the terms of the
<<var;name=AltLicense;original=_____;match=.+>> license (the
<<var;name=licenseName;original=[____];match=.+>> License), in which
case the provisions of
<<var;name=licenseName;original=[____];match=.+>>  License are
applicable instead of those above. If you wish to allow use of your
version of this file only under the terms of the
<<var;name=licenseName;original=[____];match=.+>> License and not to
allow others to use your version of this file under the CPAL, indicate
your decision by deleting the provisions above and replace them with
the notice and other provisions required by the
<<var;name=licenseName;original=[____];match=.+>> License. If you do
not delete the provisions above, a recipient may use your version of
this file under either the CPAL or the
<<var;name=licenseName;original=[____];match=.+>> License.
*/

/*
** Fake code so we have something.
*/
#include <nothing.h>


int
noop_fun(int arg1)
{
	short retval;
	
	recalculatearg(&arg1);
	
	switch (arg1)
	{
		case 0:
			if (arg1) {
					retval = 1;
			} else {
			retval = 2;
			}
		case 1:
			retval = 2;
		case 2:
			retval = morpharg(arg1);
		case 3:
			if (arg1) {
				retval = 6;
			} else {
				retval = 7;
			}
		case 4:
			retval = upscalearg(arg1);
		default:
			retval = 0;
	}
	
	return retval;
}

