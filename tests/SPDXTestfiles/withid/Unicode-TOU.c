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
** SPDX License to detect: https://spdx.org/licenses/Unicode-TOU.html				
*/



/* SPDX-License-Identifier: Unicode-TOU */
/*
Unicode Terms of Use 

For the general privacy policy governing access
to this site, see the Unicode Privacy Policy. For trademark usage, see
the Unicode® Consortium Name and Trademark Usage Policy.

A. Unicode
Copyright. 
   
     1. Copyright © 1991-2014 Unicode, Inc. All
rights reserved. 

     2. Certain documents and files on this website
contain a legend indicating that "Modification is permitted." Any
person is hereby authorized, without fee, to modify such documents and
files to create derivative works conforming to the Unicode® Standard,
subject to Terms and Conditions herein. 

     3. Any person is hereby
authorized, without fee, to view, use, reproduce, and distribute all
documents and files solely for informational purposes in the creation
of products supporting the Unicode Standard, subject to the Terms and
Conditions herein. 

     4. Further specifications of rights and
restrictions pertaining to the use of the particular set of data files
known as the "Unicode Character Database" can be found in Exhibit 1.


     5. Each version of the Unicode Standard has further
specifications of rights and restrictions of use. For the book
editions (Unicode 5.0 and earlier), these are found on the back of the
title page. The online code charts carry specific restrictions. All
other files, including online documentation of the core specification
for Unicode 6.0 and later, are covered under these general Terms of
Use. 

     6. No license is granted to "mirror" the Unicode website
where a fee is charged for access to the "mirror" site. 

     7.
Modification is not permitted with respect to this document. All
copies of this document must be verbatim. 

B. Restricted Rights
Legend. Any technical data or software which is licensed to the United
States of America, its agencies and/or instrumentalities under this
Agreement is commercial technical data or commercial computer software
developed exclusively at private expense as defined in FAR 2.101, or
DFARS 252.227-7014 (June 1995), as applicable. For technical data,
use, duplication, or disclosure by the Government is subject to
restrictions as set forth in DFARS 202.227-7015 Technical Data,
Commercial and Items (Nov 1995) and this Agreement. For Software, in
accordance with FAR 12-212 or DFARS 227-7202, as applicable, use,
duplication or disclosure by the Government is subject to the
restrictions set forth in this Agreement. 

C. Warranties and
Disclaimers. 

     1. This publication and/or website may include
technical or typographical errors or other inaccuracies . Changes are
periodically added to the information herein; these changes will be
incorporated in new editions of the publication and/or website.
Unicode may make improvements and/or changes in the product(s) and/or
program(s) described in this publication and/or website at any time.


     2. If this file has been purchased on magnetic or optical media
from Unicode, Inc. the sole and exclusive remedy for any claim will be
exchange of the defective media within ninety (90) days of original
purchase. 

     3. EXCEPT AS PROVIDED IN SECTION C.2, THIS
PUBLICATION AND/OR SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF
ANY KIND EITHER EXPRESS, IMPLIED, OR STATUTORY, INCLUDING, BUT NOT
LIMITED TO, ANY WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
PARTICULAR PURPOSE, OR NON-INFRINGEMENT. UNICODE AND ITS LICENSORS
ASSUME NO RESPONSIBILITY FOR ERRORS OR OMISSIONS IN THIS PUBLICATION
AND/OR SOFTWARE OR OTHER DOCUMENTS WHICH ARE REFERENCED BY OR LINKED
TO THIS PUBLICATION OR THE UNICODE WEBSITE. 

D. Waiver of Damages. In
no event shall Unicode or its licensors be liable for any special,
incidental, indirect or consequential damages of any kind, or any
damages whatsoever, whether or not Unicode was advised of the
possibility of the damage, including, without limitation, those
resulting from the following: loss of use, data or profits, in
connection with the use, modification or distribution of this
information or its derivatives. 

E. Trademarks & Logos. 

     1. The
Unicode Word Mark and the Unicode Logo are trademarks of Unicode, Inc.
“The Unicode Consortium” and “Unicode, Inc.” are trade names
of Unicode, Inc. Use of the information and materials found on this
website indicates your acknowledgement of Unicode, Inc.’s exclusive
worldwide rights in the Unicode Word Mark, the Unicode Logo, and the
Unicode trade names. 

     2. The Unicode Consortium Name and
Trademark Usage Policy (“Trademark Policy”) are incorporated
herein by reference and you agree to abide by the provisions of the
Trademark Policy, which may be changed from time to time in the sole
discretion of Unicode, Inc. 

     3. All third party trademarks
referenced herein are the property of their respective owners. 

F.
Miscellaneous. 

     1. Jurisdiction and Venue. This server is
operated from a location in the State of California, United States of
America. Unicode makes no representation that the materials are
appropriate for use in other locations. If you access this server from
other locations, you are responsible for compliance with local laws.
This Agreement, all use of this site and any claims and damages
resulting from use of this site are governed solely by the laws of the
State of California without regard to any principles which would apply
the laws of a different jurisdiction. The user agrees that any
disputes regarding this site shall be resolved solely in the courts
located in Santa Clara County, California. The user agrees said courts
have personal jurisdiction and agree to waive any right to transfer
the dispute to any other forum. 

     2. Modification by Unicode
Unicode shall have the right to modify this Agreement at any time by
posting it to this site. The user may not assign any part of this
Agreement without Unicode’s prior written consent. 

     3. Taxes.
The user agrees to pay any taxes arising from access to this website
or use of the information herein, except for those based on
Unicode’s net income. 

     4. Severability. If any provision of
this Agreement is declared invalid or unenforceable, the remaining
provisions of this Agreement shall remain in effect. 

     5. Entire
Agreement. This Agreement constitutes the entire agreement between the
parties. 
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

