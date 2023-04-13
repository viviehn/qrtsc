files = util.findFiles('/Users/viviehn/Research/line_study/models/', '*.obj');

o_path = '/Users/viviehn/Research/data/line_study/';

mainwindow.fitViewerSize('1024x768');

for (m in files) {
  model = files[m];

  mainwindow.openScene(model);

  m_name = util.basename(model);
  if (m_name.match('\w*_n$')) {
    m_name = m_name.substr(0, m_name.length-2);
  }

  for (var i = 1; i <= 20; i++) {
      viewer.setRandomCamera(i);
      
      lines_name = o_path + '/' + m_name + '/' + i + '_sc.pfm';
      normals_name = o_path + '/' + m_name + '/' + i + '_normal.pfm';
      mask_name = o_path + '/' + m_name + '/' + i + '_mask.pfm';

      lines_enable_lines.setValue(true);
      style_background.setValue("White");
      style_mesh_color.setValue("White");
      mainwindow.saveScreenshot(lines_name);
      mainwindow.saveScreenshot(lines_name);

      lines_enable_lines.setValue(false);
      style_background.setValue("Gray");
      style_mesh_color.setValue("Normals");
      mainwindow.saveScreenshot(normals_name);

      style_background.setValue("Black");
      style_mesh_color.setValue("White");
      mainwindow.saveScreenshot(mask_name);
  }
}
