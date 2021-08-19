model_dir = '/Users/vivnguye/mesh_dir/done';
files = util.findFiles(model_dir, '*.obj');
o_path = '/Users/vivnguye/data_dir/';

mainwindow.fitViewerSize('1024x768');

file_counter = -1;
m_name = 'bumps';

function load_next() {
  file_counter = file_counter + 1;
  model = files[file_counter];
  m_name = util.basename(model);
  if (m_name.match('\w*_n$')) {
    m_name = m_name.substr(0, m_name.length-2);
  }

  mainwindow.openScene(model);

  model_dir_name = o_path + m_name + '/qrtsc/';

  util.makeDir(model_dir_name);
}

function dump_all() {
  // Save camera

  fname = model_dir_name + 'cam.xf';
  mainwindow.saveCamera(fname);

  // Constant

  style_background.setValue("White");
  style_mesh_color.setValue('White');
  style_lighting.setValue('None');
  lines_enable_lines.setValue(true);
  style_draw_faded.setValue(false);

  // Clear everything

  lines_occluding_contours.setValue(false);
  lines_suggestive_contours.setValue(false);
  lines_apparent_ridges.setValue(false);
  lines_boundary.setValue(false);

  // Draw base
  fname = model_dir_name + 'base.png';
  lines_occluding_contours.setValue(true);
  lines_boundary.setValue(true);

  mainwindow.saveScreenshot(fname);

  lines_occluding_contours.setValue(false);
  lines_boundary.setValue(false);

  // Draw sc
  fname = model_dir_name + 'suggestive_contour.png';
  tests_sc_thresh.setValue(0.0);
  lines_suggestive_contours.setValue(true);
  lines_enable_lines.setValue(true);

  mainwindow.saveScreenshot(fname);

  // Draw sc features
  fname = model_dir_name + 'nv.png';
  style_mesh_color.setValue('nv');
  lines_enable_lines.setValue(false);

  mainwindow.saveScreenshot(fname);

  fname = model_dir_name + 'suggestive_contour_feature.png';
  style_mesh_color.setValue('suggestive_contour_feature');

  mainwindow.saveScreenshot(fname);

  fname = model_dir_name + 'suggestive_contour_info.txt';
  mainwindow.saveBufferInfo(fname);

  style_mesh_color.setValue('White');
  lines_suggestive_contours.setValue(false);
  lines_enable_lines.setValue(true);

  // Draw ridges
  fname = model_dir_name + 'ridge.png';
  tests_rv_thresh.setValue(0.0);
  lines_ridges.setValue(true);

  lines_enable_lines.setValue(true);
  mainwindow.saveScreenshot(fname);

  // Draw ridge features
  fname = model_dir_name + 'ridge_feature.png';
  style_mesh_color.setValue('ridge_feature');
  lines_enable_lines.setValue(false);

  mainwindow.saveScreenshot(fname);

  fname = model_dir_name + 'ridge_info.txt';
  mainwindow.saveBufferInfo(fname);

  style_mesh_color.setValue('White');
  lines_ridges.setValue(false);
  lines_enable_lines.setValue(true)

  // Draw valleys 
  fname = model_dir_name + 'valley.png';
  tests_rv_thresh.setValue(0.0);
  lines_valleys.setValue(true);
  lines_enable_lines.setValue(true);

  mainwindow.saveScreenshot(fname);

  // Draw valley features
  fname = model_dir_name + 'valley_feature.png';
  style_mesh_color.setValue('valley_feature');
  lines_enable_lines.setValue(false);

  mainwindow.saveScreenshot(fname);

  fname = model_dir_name + 'valley_info.txt';
  mainwindow.saveBufferInfo(fname);

  style_mesh_color.setValue('White');
  lines_valleys.setValue(false);
  lines_enable_lines.setValue(true)

  // Draw apparent ridges 
  fname = model_dir_name + 'apparent_ridge.png';
  tests_ar_thresh.setValue(0.0);
  lines_apparent_ridges.setValue(true);
  lines_enable_lines.setValue(true);

  mainwindow.saveScreenshot(fname);

  // Draw apparent ridge features
  fname = model_dir_name + 'apparent_ridge_feature.png';
  style_mesh_color.setValue('apparent_ridge_feature');
  lines_enable_lines.setValue(false);

  mainwindow.saveScreenshot(fname);

  fname = model_dir_name + 'apparent_ridge_info.txt';
  mainwindow.saveBufferInfo(fname);

  style_mesh_color.setValue('White');
  lines_apparent_ridges.setValue(false);

  
  // Draw depth
  fname = model_dir_name + 'depth.png';
  style_mesh_color.setValue('Depth');
  mainwindow.saveScreenshot(fname);

  // Draw smooth
  style_mesh_color.setValue('White');
  style_lighting.setValue('Lambertian');
  
  for (i=0; i <= 5; i++) {
    fname = model_dir_name + 'smooth_'+ i + '.png';
    mainwindow.saveScreenshot(fname);
    mainwindow.smoothMesh(i+1, true);
    mainwindow.filterNormals(i+1, true);
  }
  mainwindow.smoothMesh(1, true);
  mainwindow.filterNormals(1, true);
  

}
