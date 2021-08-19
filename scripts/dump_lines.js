model_dir = '/Users/vivnguye/Downloads/outputMeshes/';
files = util.findFiles(model_dir, '*.obj');
o_path = '/Users/vivnguye/lines/';

mainwindow.fitViewerSize('1024x768');


for (m in files) {
  model = files[m];

try{
  mainwindow.openScene(model);
}
catch(e){
}


  m_name = util.basename(model);
  if (m_name.match('\w*_n$')) {
    m_name = m_name.substr(0, m_name.length-2);
  }

  viewer.setCamera(0.523599, -0.523599);
      
  sc_name = o_path + m_name + '_' + 'sc.png';
  c_name = o_path + m_name + '_' + 'c.png';
  ar_name = o_path + m_name + '_' + 'ar.png';
  scar_name = o_path + m_name + '_' + 'scar.png';

  lines_enable_lines.setValue(true);
  style_background.setValue("White");
  style_mesh_color.setValue("White");

  // Clear everything

  lines_occluding_contours.setValue(false);
  lines_suggestive_contours.setValue(false);
  lines_apparent_ridges.setValue(false);
  lines_boundary.setValue(false);

  lines_occluding_contours.setValue(true);
  lines_boundary.setValue(true);

  mainwindow.saveScreenshot(c_name);

  lines_suggestive_contours.setValue(true);
  mainwindow.saveScreenshot(sc_name);

  lines_apparent_ridges.setValue(true);
  mainwindow.saveScreenshot(scar_name);

  lines_suggestive_contours.setValue(false);
  mainwindow.saveScreenshot(ar_name);
}
