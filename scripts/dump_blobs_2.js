files = util.findFiles('/Users/viviehn/Research/line_study/models/', 'femur.obj');

o_path = '/Users/viviehn/Research/data/line_study/';

mainwindow.fitViewerSize('1024x768');

for (m in files) {
  model = files[m];

  mainwindow.openScene(model);


  m_name = util.basename(model);
  if (m_name.match('\w*_n$')) {
    m_name = m_name.substr(0, m_name.length-2);
  }

  for (var i = 0; i <= 100; i++) {

      tests_sc_thresh.setValue(i/100);     
      lines_name = o_path + '/' + m_name + '/' + i + '_sc.pfm';
      lines_enable_lines.setValue(true);
      style_background.setValue("White");
      style_mesh_color.setValue("White");
      mainwindow.saveScreenshot(lines_name);
  }
}
