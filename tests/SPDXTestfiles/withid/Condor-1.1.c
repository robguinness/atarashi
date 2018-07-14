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
** SPDX License to detect: https://spdx.org/licenses/Condor-1.1.html				
*/



/* SPDX-License-Identifier: Condor-1.1 */
/*
Condor Public License

Version 1.1, October 30, 2003

Copyright ©
1990-2006 Condor Team, Computer Sciences Department, University of
Wisconsin-Madison, Madison, WI. All Rights Reserved. For more
information contact: Condor Team, Attention: Professor Miron Livny,
Dept of Computer Sciences, 1210 W. Dayton St., Madison, WI 53706-1685,
(608) 262-0856 or miron@cs.wisc.edu.

This software referred to as the
Condor® Version 6.x software ("Software") was developed by the Condor
Project, Condor Team, Computer Sciences Department, University of
Wisconsin-Madison, under the authority of the Board of Regents of the
University of Wisconsin System and includes voluntary contributions
made to the Condor Project ("Copyright Holders and Contributors and
the University"). For more information on the Condor Project, please
see http://www.condorproject.org/.

Installation, use, reproduction,
display, modification and redistribution of this Software, with or
without modification, in source and binary forms, are permitted. Any
exercise of rights under this license including sublicenses by you is
subject to the following conditions:

1.	Redistributions of this
Software, with or without modification, must reproduce this Condor
Public License in: (1) the Software, and (2) any user documentation or
other similar material which is provided with the Software.

2.	Any
user documentation included with a redistribution must include the
following notice: ``This product includes software from the Condor®
Project (http://www.condorproject.org/)" Alternatively, if that is
where third-party acknowledgments normally appear, this acknowledgment
must be reproduced in the Software itself. 
3.	Any academic report,
publication, or other academic disclosure of results obtained with
this Software will acknowledge this Software's use by an appropriate
citation.

4.	The name Condor® is a registered trademark of the
University of Wisconsin-Madison. The trademark may not be used to
endorse or promote software, or products derived therefrom, and, other
than as required by section 2 and 3 above, it may not be affixed to
modified redistributions of this Software without the prior written
approval, obtainable via email to condor-admin@cs.wisc.edu.

5.	To the
extent that patent claims licensable by the University of
Wisconsin-Madison are necessarily infringed by the use or sale of the
Software, you are granted a non-exclusive, worldwide, royalty- free
perpetual license under such patent claims, with the rights for you to
make, use, sell, offer to sell, import and otherwise transfer the
Software in source code and object code form and derivative works.
This patent license shall apply to the combination of the Software
with other software if, at the time the Software is added by you, such
addition of the Software causes such combination to be covered by such
patent claims. This patent license shall not apply to any other
combinations which include the Software. No hardware per se is
licensed hereunder.If you or any subsequent sub-licensee (a
``Recipient") institutes patent litigation against any entity
(including a cross-claim or counterclaim in a lawsuit) alleging that
the Software infringes such Recipient's patent(s), then such
Recipient's rights granted (directly or indirectly) under the patent
license above shall terminate as of the date such litigation is filed.
All sublicenses to the Software which have been properly granted prior
to termination shall survive any termination of said patent license,
if not otherwise terminated pursuant to this section.

6.	DISCLAIMER

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
AND THE UNIVERSITY "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY, OF SATISFACTORY QUALITY, AND FITNESS FOR A PARTICULAR
PURPOSE OR USE ARE DISCLAIMED. THE COPYRIGHT HOLDERS AND CONTRIBUTORS
AND THE UNIVERSITY MAKE NO REPRESENTATION THAT THE SOFTWARE,
MODIFICATIONS, ENHANCEMENTS OR DERIVATIVE WORKS THEREOF, WILL NOT
INFRINGE ANY PATENT, COPYRIGHT, TRADEMARK, TRADE SECRET OR OTHER
PROPRIETARY RIGHT. 
7.	LIMITATION OF LIABILITY 
THE COPYRIGHT
HOLDERS AND CONTRIBUTORS AND ANY OTHER OFFICER, AGENT, OR EMPLOYEE OF
THE UNIVERSITY SHALL HAVE NO LIABILITY TO LICENSEE OR OTHER PERSONS
FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, CONSEQUENTIAL, EXEMPLARY,
OR PUNITIVE DAMAGES OF ANY CHARACTER INCLUDING, WITHOUT LIMITATION,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES, LOSS OF USE, DATA OR
PROFITS, OR BUSINESS INTERRUPTION, HOWEVER CAUSED AND ON ANY THEORY OF
CONTRACT, WARRANTY, TORT (INCLUDING NEGLIGENCE), PRODUCT LIABILITY OR
OTHERWISE, ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISED OF THE POSSIBILITY OF SUCH DAMAGES. 
8.	Certain uses and
transfers of the Software or documentation, and/or items or software
incorporating the Condor Software or documentation, may require a
license under U.S. Export Control laws. Licensee represents and
warrants that all uses and transfers of the Condor Software or
documentation and/or any items or software incorporating Condor shall
be in compliance with U.S. Export Control laws, and Licensee further
understands that failure to comply with such export control laws may
result in criminal liability to Licensee under U.S. laws.

9.	The
Condor Team may publish revised and/or new versions of this Condor
Public License (``this License") from time to time. Each version will
be given a distinguishing version number. Once Software has been
published under a particular version of this License, you may always
continue to use it under the terms of that version. You may also
choose to use such Software under the terms of any subsequent version
of this License published by the Condor Team. No one other than the
Condor Team has the right to modify the terms of this License.

For
more information: 

Condor Team 
Attention: Professor Miron Livny

7367 Computer Sciences 
1210 W. Dayton St. 
Madison, WI 53706-1685

miron@cs.wisc.edu 
http://pages.cs.wisc.edu/~miron/miron.html 



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

