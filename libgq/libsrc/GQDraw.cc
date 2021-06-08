/*****************************************************************************\

GQDraw.cc
Author: Forrester Cole (fcole@cs.princeton.edu)
Copyright (c) 2009 Forrester Cole

Utility drawing calls that wrap OpenGL calls.

libgq is distributed under the terms of the GNU General Public License.
See the COPYING file for details.

\*****************************************************************************/

#include "GQDraw.h"

#include <assert.h>

void GQDraw::drawElements(const GQVertexBufferSet& vb, int gl_mode, int offset, 
						  int length, const int* indices)
{
	assert(vb.isBound());
		
	if (indices > (int*)0) 
	{
		assert(!vb.vbosLoaded());
		const int* start = indices + offset;
		glDrawElements(gl_mode, length, GL_UNSIGNED_INT, (const GLvoid*)(start));
	}
	else 
	{
		assert(vb.vbosLoaded());
		assert(vb.hasBuffer(GQ_INDEX));
		int byte_offset = offset * sizeof(GLint);
		glDrawElements(gl_mode, length, GL_UNSIGNED_INT, (const GLvoid*)(byte_offset));		
	}
}
