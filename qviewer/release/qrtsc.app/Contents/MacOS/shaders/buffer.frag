/*****************************************************************************\

ndotv.frag
Author: Vivien Nguyen (vivienn@cs.princeton.edu)
Copyright (c) 2021 Vivien Nguyen 

Renders the polygons of the scene.

qviewer is distributed under the terms of the GNU General Public License.
See the COPYING file for details.

\*****************************************************************************/

// interpolated values
varying float	vert_buffer;
uniform float normalization;

void main()
{
	float val = float(vert_buffer) / float(normalization);
	vec4 out_col = vec4(val, val, val, 1.0);
				      
    gl_FragColor = out_col;
}
