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
** SPDX License to detect: https://spdx.org/licenses/ClArtistic.html				
*/



/* SPDX-License-Identifier: ClArtistic */
/*
The Clarified Artistic License

Preamble

The intent of this document
is to state the conditions under which a Package may be copied, such
that the Copyright Holder maintains some semblance of artistic control
over the development of the package, while giving the users of the
package the right to use and distribute the Package in a more-or-less
customary fashion, plus the right to make reasonable
modifications.

Definitions:

 "Package" refers to the collection of
files distributed by the Copyright Holder, and derivatives of that
collection of files created through textual modification.

 "Standard
Version" refers to such a Package if it has not been modified, or has
been modified in accordance with the wishes of the Copyright Holder as
specified below.

 "Copyright Holder" is whoever is named in the
copyright or copyrights for the package.

 "You" is you, if you're
thinking about copying or distributing this Package.

 "Distribution
fee" is a fee you charge for providing a copy of this Package to
another party.

 "Freely Available" means that no fee is charged for
the right to use the item, though there may be fees involved in
handling the item. It also means that recipients of the item may
redistribute it under the same conditions they received it.

1. You
may make and give away verbatim copies of the source form of the
Standard Version of this Package without restriction, provided that
you duplicate all of the original copyright notices and associated
disclaimers.

2. You may apply bug fixes, portability fixes and other
modifications derived from the Public Domain, or those made Freely
Available, or from the Copyright Holder. A Package modified in such a
way shall still be considered the Standard Version.

3. You may
otherwise modify your copy of this Package in any way, provided that
you insert a prominent notice in each changed file stating how and
when you changed that file, and provided that you do at least ONE of
the following:

     a) place your modifications in the Public Domain
or otherwise make them Freely Available, such as by posting said
modifications to Usenet or an equivalent medium, or placing the
modifications on a major network archive site allowing unrestricted
access to them, or by allowing the Copyright Holder to include your
modifications in the Standard Version of the Package.

     b) use the
modified Package only within your corporation or organization.

    
c) rename any non-standard executables so the names do not conflict
with standard executables, which must also be provided, and provide a
separate manual page for each non-standard executable that clearly
documents how it differs from the Standard Version.

     d) make
other distribution arrangements with the Copyright Holder.

     e)
permit and encourge anyone who receives a copy of the modified Package
permission to make your modifications Freely Available in some
specific way. 

4. You may distribute the programs of this Package in
object code or executable form, provided that you do at least ONE of
the following:

     a) distribute a Standard Version of the
executables and library files, together with instructions (in the
manual page or equivalent) on where to get the Standard Version.

    
b) accompany the distribution with the machine-readable source of the
Package with your modifications.

     c) give non-standard
executables non-standard names, and clearly document the differences
in manual pages (or equivalent), together with instructions on where
to get the Standard Version.

     d) make other distribution
arrangements with the Copyright Holder.

     e) offer the
machine-readable source of the Package, with your modifications, by
mail order.

5. You may charge a distribution fee for any distribution
of this Package. If you offer support for this Package, you may charge
any fee you choose for that support. You may not charge a license fee
for the right to use this Package itself. You may distribute this
Package in aggregate with other (possibly commercial and possibly
nonfree) programs as part of a larger (possibly commercial and
possibly nonfree) software distribution, and charge license fees for
other parts of that software distribution, provided that you do not
advertise this Package as a product of your own. If the Package
includes an interpreter, You may embed this Package's interpreter
within an executable of yours (by linking); this shall be construed as
a mere form of aggregation, provided that the complete Standard
Version of the interpreter is so embedded.

6. The scripts and library
files supplied as input to or produced as output from the programs of
this Package do not automatically fall under the copyright of this
Package, but belong to whoever generated them, and may be sold
commercially, and may be aggregated with this Package. If such scripts
or library files are aggregated with this Package via the so-called
"undump" or "unexec" methods of producing a binary executable image,
then distribution of such an image shall neither be construed as a
distribution of this Package nor shall it fall under the restrictions
of Paragraphs 3 and 4, provided that you do not represent such an
executable image as a Standard Version of this Package.

7. C
subroutines (or comparably compiled subroutines in other languages)
supplied by you and linked into this Package in order to emulate
subroutines and variables of the language defined by this Package
shall not be considered part of this Package, but are the equivalent
of input as in Paragraph 6, provided these subroutines do not change
the language in any way that would cause it to fail the regression
tests for the language.

8. Aggregation of the Standard Version of the
Package with a commercial distribution is always permitted provided
that the use of this Package is embedded; that is, when no overt
attempt is made to make this Package's interfaces visible to the end
user of the commercial distribution. Such use shall not be construed
as a distribution of this Package.

9. The name of the Copyright
Holder may not be used to endorse or promote products derived from
this software without specific prior written permission.

10. THIS
PACKAGE IS PROVIDED "AS IS" AND WITHOUT ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.

The End
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

