/*
 Rtsc.h
 
 A port of real-time suggestive contours to Qt.
 
 Authors:
 Szymon Rusinkiewicz, Princeton University
 Doug DeCarlo, Rutgers University
 
 With contributions by:
 Xiaofeng Mi, Rutgers University
 Tilke Judd, MIT
 
 Port modifications by:
 Forrester Cole, MIT
 
 */


#include "XForm.h"

class TriMesh;

namespace Rtsc {

// Initialize global variables that were previous done in main()
void initialize(TriMesh* mesh);
void setCameraTransform(xform main);
void setLightDir(const vec& lightdir);
void redraw();

// Smooth the mesh
void filter_mesh(int dummy = 0);
void filter_mesh(int i, bool use_val);
// Diffuse the normals across the mesh
void filter_normals(int dummy = 0);
void filter_normals(int i, bool use_val);
// Diffuse the curvatures across the mesh
void filter_curv(int dummy = 0);
// Diffuse the curvature derivatives across the mesh
void filter_dcurv(int dummy = 0);
// Perform an iteration of subdivision
void subdivide_mesh(int dummy = 0);


inline bool is_neg(float i) { return i < 0; }
inline bool is_pos(float i) { return i > 0; }

float get_info_val();
float get_feature_size();

}

