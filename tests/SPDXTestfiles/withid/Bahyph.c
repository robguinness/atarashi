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
** SPDX License to detect: https://spdx.org/licenses/Bahyph.html				
*/



/* SPDX-License-Identifier: Bahyph */
/*
COPYRIGHT NOTICE   

These patterns and the generating sh script are
Copyright (c) GMV 1991  

These patterns were developed for internal
GMV use and are made public in the hope that they will benefit others.
Also, spreading these patterns throughout the Spanish-language TeX
community is expected to provide back-benefits to GMV in that it can
help keeping GMV in the mainstream of spanish users. 

However, this
is given for free and WITHOUT ANY WARRANTY. Under no circumstances can
Julio Sanchez, GMV, Jos'e A. Ma~nas or any agents or representatives
thereof be held responsible for any errors in this software nor for
any damages derived from its use, even in case any of the above has
been notified of the possibility of such damages. If any such
situation arises, you responsible for repair. Use of this software is
an explicit  acceptance of these conditions.   

You can use this
software for any purpose. You cannot delete this  copyright notice. If
you change this software, you must include comments explaining who,
when and why. You are kindly requested to send any changes to
tex@gmv.es. If you change the generating script, you must include code
in it such that any output is clearly labeled as generated by a
modified script.   Despite the lack of warranty, we would like to hear
about any problem you find. Please report problems to tex@gmv.es.  


END OF COPYRIGHT NOTICE
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

