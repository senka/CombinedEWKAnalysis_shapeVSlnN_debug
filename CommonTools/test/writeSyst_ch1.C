void writeSyst_ch1(){

  TFile * file_in=new TFile("../data/WV_semileptonic/ch6_boosted.root","read");
  file_in->cd();

  cout <<"eff_b=  \t\tzz: "<< zz2l2nu_CMS_eff_bDown->Integral()/zz2l2nu->Integral()<<"/"<< zz2l2nu_CMS_eff_bUp->Integral()/zz2l2nu->Integral()<< "  \twz: " <<wz3lnu_CMS_eff_bDown->Integral()/wz3lnu->Integral()<<"/"<< wz3lnu_CMS_eff_bUp->Integral()/wz3lnu->Integral()<< endl;
  cout <<"QCD_ACC_JVeto=  \t\tzz: "<< zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->Integral()/zz2l2nu->Integral()<<"/"<< zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->Integral()/zz2l2nu->Integral() << endl;
  cout <<"les=  \t\tzz: "<< zz2l2nu_CMS_hzz2l2v_lesDown->Integral()/zz2l2nu->Integral()<<"/"<< zz2l2nu_CMS_hzz2l2v_lesUp->Integral()/zz2l2nu->Integral()<< "  \twz: " <<wz3lnu_CMS_hzz2l2v_lesDown->Integral()/wz3lnu->Integral()<<"/"<< wz3lnu_CMS_hzz2l2v_lesUp->Integral()/wz3lnu->Integral() << endl;
  cout <<"pu=  \t\tzz: "<< zz2l2nu_CMS_hzz2l2v_puDown->Integral()/zz2l2nu->Integral()<<"/"<< zz2l2nu_CMS_hzz2l2v_puUp->Integral()/zz2l2nu->Integral()<< "  \twz: " <<wz3lnu_CMS_hzz2l2v_puDown->Integral()/wz3lnu->Integral()<<"/"<< wz3lnu_CMS_hzz2l2v_puUp->Integral()/wz3lnu->Integral() << endl;
  cout <<"stat=  \t\tzz: "<< zz2l2nu_CMS_hzz2l2v_stat_ll_zz2l2nu_8TeVDown->Integral()/zz2l2nu->Integral()<<"/"<< zz2l2nu_CMS_hzz2l2v_stat_ll_zz2l2nu_8TeVUp->Integral()/zz2l2nu->Integral() << endl;
  cout <<"umet=  \t\tzz: "<< zz2l2nu_CMS_hzz2l2v_umetDown->Integral()/zz2l2nu->Integral()<<"/"<< zz2l2nu_CMS_hzz2l2v_umetUp->Integral()/zz2l2nu->Integral()<< "  \twz: " <<wz3lnu_CMS_hzz2l2v_umetDown->Integral()/wz3lnu->Integral()<<"/"<< wz3lnu_CMS_hzz2l2v_umetUp->Integral()/wz3lnu->Integral()  << endl;
  cout <<"res_j=  \t\tzz: "<< zz2l2nu_CMS_res_jDown->Integral()/zz2l2nu->Integral()<<"/"<< zz2l2nu_CMS_res_jUp->Integral()/zz2l2nu->Integral()<< "  \twz: " <<wz3lnu_CMS_res_jDown->Integral()/wz3lnu->Integral()<<"/"<< wz3lnu_CMS_res_jUp->Integral()/wz3lnu->Integral()  << endl;
  cout <<"scale_j=  \t\tzz: "<< zz2l2nu_CMS_scale_jDown->Integral()/zz2l2nu->Integral()<<"/"<< zz2l2nu_CMS_scale_jUp->Integral()/zz2l2nu->Integral()<< "  \twz: " <<wz3lnu_CMS_scale_jDown->Integral()/wz3lnu->Integral()<<"/"<< wz3lnu_CMS_scale_jUp->Integral()/wz3lnu->Integral()  << endl;
  cout <<"sherpa=  \t\tzz: "<< zz2l2nu_CMS_hzz2l2v_sherpaDown->Integral()/zz2l2nu->Integral()<<"/"<< zz2l2nu_CMS_hzz2l2v_sherpaUp->Integral()/zz2l2nu->Integral() << endl;
  cout <<"stat=  \t\twz: " << wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVDown->Integral()/wz3lnu->Integral()<<"/"<< wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVUp->Integral()/wz3lnu->Integral() << endl;
  cout <<"stat=  \t\tDY: " << zll_CMS_hzz2l2v_stat_ll_zll_8TeVDown->Integral()/zll->Integral()<<"/"<< zll_CMS_hzz2l2v_stat_ll_zll_8TeVUp->Integral()/zll->Integral() << endl;
  cout <<"stat=  \t\ttop: " << topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVDown->Integral()/topwwwjetsdata->Integral()<<"/"<< topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVUp->Integral()/topwwwjetsdata->Integral() << endl;

 

}
