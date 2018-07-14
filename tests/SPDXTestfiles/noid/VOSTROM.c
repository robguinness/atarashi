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
** SPDX License to detect: https://spdx.org/licenses/VOSTROM.html				
*/



/*
VOSTROM Public License for Open Source 

Copyright (c) 2007 VOSTROM
Holdings, Inc.

This VOSTROM Holdings, Inc. (VOSTROM) Distribution
(code and documentation) is made available to the open source
community as a public service by VOSTROM. Contact VOSTROM at
license@vostrom.com for information on other licensing arrangements
(e.g. for use in proprietary applications).

Under this license, this
Distribution may be modified and the original version and modified
versions may be copied, distributed, publicly displayed and performed
provided that the following conditions are met:

1. Modified versions
are distributed with source code and documentation and with permission
for others to use any code and documentation (whether in original or
modified versions) as granted under this license;

2. if modified, the
source code, documentation, and user run-time elements should be
clearly labeled by placing an identifier of origin (such as a name,
initial, or other tag) after the version number;

3. users, modifiers,
distributors, and others coming into possession or using the
Distribution in original or modified form accept the entire risk as to
the possession, use, and performance of the Distribution;

4. this
copyright management information (software identifier and version
number, copyright notice and license) shall be retained in all
versions of the Distribution;

5. VOSTROM may make modifications to
the Distribution that are substantially similar to modified versions
of the Distribution, and may make, use, sell, copy, distribute,
publicly display, and perform such modifications, including making
such modifications available under this or other licenses, without
obligation or restriction;

6. modifications incorporating code,
libraries, and/or documentation subject to any other open source
license may be made, and the resulting work may be distributed under
the terms of such open source license if required by that open source
license, but doing so will not affect this Distribution, other
modifications made under this license or modifications made under
other VOSTROM licensing arrangements;

7. no permission is granted to
distribute, publicly display, or publicly perform modifications to the
Distribution made using proprietary materials that cannot be released
in source format under conditions of this license;

8. the name of
VOSTROM may not be used in advertising or publicity pertaining to
Distribution of the software without specific, prior written
permission.

This software is made available "as is", and

VOSTROM
DISCLAIMS ALL WARRANTIES, EXPRESS OR IMPLIED, WITH REGARD TO THIS
SOFTWARE, INCLUDING WITHOUT LIMITATION ALL IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, AND IN NO EVENT
SHALL VOSTROM BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL
DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
PROFITS, WHETHER IN AN ACTION OF CONTRACT, TORT (INCLUDING NEGLIGENCE)
OR STRICT LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
PERFORMANCE OF THIS SOFTWARE. 
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

