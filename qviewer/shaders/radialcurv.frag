/*****************************************************************************\

ndotv.frag
Author: Vivien Nguyen (vivienn@cs.princeton.edu)
Copyright (c) 2021 Vivien Nguyen 

Renders the polygons of the scene.

qviewer is distributed under the terms of the GNU General Public License.
See the COPYING file for details.

\*****************************************************************************/

// interpolated values
varying vec3 vert_view_world;
varying vec3 vert_normal_world;

void main()
{
	//vec4 out_col = vec4(-vert_buffer, -vert_buffer, -vert_buffer, 1.0);
	float diffuse = max(dot(vert_normal_world, vert_view_world),0.0);
	
	vec4 out_col = diffuse * vec4(1.,1.,1.,1.);
    out_col.a = 1.0;
				      
    gl_FragColor = out_col;
}
