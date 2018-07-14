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
** SPDX License to detect: https://spdx.org/licenses/NGPL.html				
*/



/* SPDX-License-Identifier: NGPL */
/*
NETHACK GENERAL PUBLIC LICENSE

(Copyright 1989 M. Stephenson) 
(Based
on the BISON general public license, copyright 1988 Richard M.
Stallman)

Everyone is permitted to copy and distribute verbatim
copies of this license, but changing it is not allowed. You can also
use this wording to make the terms for other programs.

The license
agreements of most software companies keep you at the mercy of those
companies. By contrast, our general public license is intended to give
everyone the right to share NetHack. To make sure that you get the
rights we want you to have, we need to make restrictions that forbid
anyone to deny you these rights or to ask you to surrender the rights.
Hence this license agreement.

Specifically, we want to make sure that
you have the right to give away copies of NetHack, that you receive
source code or else can get it if you want it, that you can change
NetHack or use pieces of it in new free programs, and that you know
you can do these things.

To make sure that everyone has such rights,
we have to forbid you to deprive anyone else of these rights. For
example, if you distribute copies of NetHack, you must give the
recipients all the rights that you have. You must make sure that they,
too, receive or can get the source code. And you must tell them their
rights.

Also, for our own protection, we must make certain that
everyone finds out that there is no warranty for NetHack. If NetHack
is modified by someone else and passed on, we want its recipients to
know that what they have is not what we distributed.

Therefore we
(Mike Stephenson and other holders of NetHack copyrights) make the
following terms which say what you must do to be allowed to distribute
or change NetHack.

COPYING POLICIES

You may copy and distribute
verbatim copies of NetHack source code as you receive it, in any
medium, provided that you keep intact the notices on all files that
refer to copyrights, to this License Agreement, and to the absence of
any warranty; and give any other recipients of the NetHack program a
copy of this License Agreement along with the program.

You may modify
your copy or copies of NetHack or any portion of it, and copy and
distribute such modifications under the terms of Paragraph 1 above
(including distributing this License Agreement), provided that you
also do the following:

     a) cause the modified files to carry
prominent notices stating that you changed the files and the date of
any change; and

     b) cause the whole of any work that you
distribute or publish, that in whole or in part contains or is a
derivative of NetHack or any part thereof, to be licensed at no charge
to all third parties on terms identical to those contained in this
License Agreement (except that you may choose to grant more extensive
warranty protection to some or all third parties, at your option)

   
 c) You may charge a distribution fee for the physical act of
transferring a copy, and you may at your option offer warranty
protection in exchange for a fee.

You may copy and distribute NetHack
(or a portion or derivative of it, under Paragraph 2) in object code
or executable form under the terms of Paragraphs 1 and 2 above
provided that you also do one of the following:

     a) accompany it
with the complete machine-readable source code, which must be
distributed under the terms of Paragraphs 1 and 2 above; or,

     b)
accompany it with full information as to how to obtain the complete
machine-readable source code from an appropriate archive site. (This
alternative is allowed only for noncommercial distribution.)

For
these purposes, complete source code means either the full source
distribution as originally released over Usenet or updated copies of
the files in this distribution used to create the object code or
executable.

You may not copy, sublicense, distribute or transfer
NetHack except as expressly provided under this License Agreement. Any
attempt otherwise to copy, sublicense, distribute or transfer NetHack
is void and your rights to use the program under this License
agreement shall be automatically terminated. However, parties who have
received computer software programs from you with this License
Agreement will not have their licenses terminated so long as such
parties remain in full compliance.
Stated plainly: You are permitted
to modify NetHack, or otherwise use parts of NetHack, provided that
you comply with the conditions specified above; in particular, your
modified NetHack or program containing parts of NetHack must remain
freely available as provided in this License Agreement. In other
words, go ahead and share NetHack, but don't try to stop anyone else
from sharing it farther. 
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

