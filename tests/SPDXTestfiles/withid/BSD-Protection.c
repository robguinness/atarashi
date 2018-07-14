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
** SPDX License to detect: https://spdx.org/licenses/BSD-Protection.html				
*/



/* SPDX-License-Identifier: BSD-Protection */
/*
BSD Protection License 
February 2002

Preamble 
--------

The
Berkeley Software Distribution ("BSD") license has proven very
effective over the years at allowing for a wide spread of work
throughout both commercial and non-commercial products. For
programmers whose primary intention is to improve the general quality
of available software, it is arguable that there is no better license
than the BSD license, as it permits improvements to be used wherever
they will help, without idealogical or metallic constraint.

This is
of particular value to those who produce reference implementations of
proposed standards: The case of TCP/IP clearly illustrates that freely
and universally available implementations leads the rapid acceptance
of standards -- often even being used instead of a de jure standard
(eg, OSI network models).

With the rapid proliferation of software
licensed under the GNU General Public License, however, the continued
success of this role is called into question. Given that the inclusion
of a few lines of "GPL-tainted" work into a larger body of work will
result in restricted distribution -- and given that further work will
likely build upon the "tainted" portions, making them difficult to
remove at a future date -- there are inevitable circumstances where
authors would, in order to protect their goal of providing for the
widespread usage of their work, wish to guard against such
"GPL-taint".

In addition, one can imagine that companies which
operate by producing and selling (possibly closed-source) code would
wish to protect themselves against the rise of a GPL-licensed
competitor. While under existing licenses this would mean not
releasing their code under any form of open license, if a license
existed under which they could incorporate any improvements back into
their own (commercial) products then they might be far more willing to
provide for non-closed distribution.

For the above reasons, we put
forth this "BSD Protection License": A license designed to retain the
freedom granted by the BSD license to use licensed works in a wide
variety of settings, both non-commercial and commercial, while
protecting the work from having future contributors restrict that
freedom.

The precise terms and conditions for copying, distribution,
and modification follow.

BSD PROTECTION LICENSE TERMS AND CONDITIONS
FOR COPYING, DISTRIBUTION, AND MODIFICATION

----------------------------------------------------------------

0.
Definitions. 

     a) "Program", below, refers to any program or work
distributed under the terms of this license. 
     b) A "work based on
the Program", below, refers to either the Program or any derivative
work under copyright law. 
     c) "Modification", below, refers to
the act of creating derivative works. 
     d) "You", below, refers to
each licensee.

1. Scope. 
This license governs the copying,
distribution, and modification of the Program. Other activities are
outside the scope of this license; The act of running the Program is
not restricted, and the output from the Program is covered only if its
contents constitute a work based on the Program.

2. Verbatim copies.

You may copy and distribute verbatim copies of the Program as you
receive it, in any medium, provided that you conspicuously and
appropriately publish on each copy an appropriate copyright notice;
keep intact all the notices that refer to this License and to the
absence of any warranty; and give any other recipients of the Program
a copy of this License along with the Program.

3. Modification and
redistribution under closed license. 
You may modify your copy or
copies of the Program, and distribute the resulting derivative works,
provided that you meet the following conditions: 

     a) The
copyright notice and disclaimer on the Program must be reproduced and
included in the source code, documentation, and/or other materials
provided in a manner in which such notices are normally distributed. 

    b) The derivative work must be clearly identified as such, in
order that it may not be confused with the original work. 
     c) The
license under which the derivative work is distributed must expressly
prohibit the distribution of further derivative works.

4.
Modification and redistribution under open license. 
You may modify
your copy or copies of the Program, and distribute the resulting
derivative works, provided that you meet the following conditions: 

 
   a) The copyright notice and disclaimer on the Program must be
reproduced and included in the source code, documentation, and/or
other materials provided in a manner in which such notices are
normally distributed. 
     b) You must clearly indicate the nature
and date of any changes made to the Program. The full details need not
necessarily be included in the individual modified files, provided
that each modified file is clearly marked as such and instructions are
included on where the full details of the modifications may be found.

     c) You must cause any work that you distribute or publish, that
in whole or in part contains or is derived from the Program or any
part thereof, to be licensed as a whole at no charge to all third
parties under the terms of this License.

5. Implied acceptance. 
You
may not copy or distribute the Program or any derivative works except
as expressly provided under this license. Consequently, any such
action will be taken as implied acceptance of the terms of this
license.

6. NO WARRANTY. 
THIS SOFTWARE IS PROVIDED "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER, OR ANY
OTHER PARTY WHO MAY MODIFY AND/OR REDISTRIBUTE THE PROGRAM AS
PERMITTED ABOVE, BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OR
INABILITY TO USE THE PROGRAM (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT, EVEN IF
SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
DAMAGES.
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

