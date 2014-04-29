void split_histos_toChannelFiles(){

  //  TFile * file_in=new TFile("../data/WV_semileptonic/signal_WV_ch1.root","read");
  //  TFile * file_in=new TFile("../data/WV_semileptonic/input_forNewFrame_f5z_ZZ_2l2nu_2604Files_EWK_8TeV_noSMinFit.root","read");
  //  TFile * file_in=new TFile("../data/WV_semileptonic/input_forNewFrame_f5z_ZZ_2l2nu_2604Files_EWK_8TeV_noSMinFit_toGenSM_ifNegativeSetTo0p0001.root","read");
  //  TFile * file_in=new TFile("../data/WV_semileptonic/input_forNewFrame_f5z_ZZ_2l2nu_2604Files_EWK_8TeV_noSMinFit_toFitSM_ifNegativeSetTo0p0001.root","read");
  //  TFile * file_in=new TFile("../data/WV_semileptonic/input_forNewFrame_f4z_ZZ_2l2nu_2604Files_EWK_8TeV_noSMinFit_toGenSM_ifNegativeSetTo0p0001.root","read");
  TFile * file_in=new TFile("../data/WV_semileptonic/input_forNewFrame_f4z_ZZ_2l2nu_2604Files_EWK_8TeV_noSMinFit_ifLessThen1SetTo1_aTGCnoSMfit.root","read");
  file_in->cd();
  TH2D * bin_content_lam_dk_1_t=new TH2D();
  TH2D * bin_content_lam_dk_2_t=new TH2D();
  TH2D * bin_content_lam_dk_3_t=new TH2D();
  TH2D * bin_content_lam_dk_4_t=new TH2D();
  TH2D * bin_content_lam_dk_5_t=new TH2D();
  TH2D * bin_content_lam_dk_6_t=new TH2D();
  bin_content_lam_dk_1_t=(TH2D*)bin_content_lam_dk_1->Clone("name_1");
  bin_content_lam_dk_2_t=(TH2D*)bin_content_lam_dk_2->Clone("name_2");
  bin_content_lam_dk_3_t=(TH2D*)bin_content_lam_dk_3->Clone("name_3");
  bin_content_lam_dk_4_t=(TH2D*)bin_content_lam_dk_4->Clone("name_4");
  bin_content_lam_dk_5_t=(TH2D*)bin_content_lam_dk_5->Clone("name_5");
  bin_content_lam_dk_6_t=(TH2D*)bin_content_lam_dk_6->Clone("name_6");
  

  TFile * file_out_1=new TFile("../data/WV_semileptonic/signal_WV_ch1_f4z_ZZ_2l2nu_2604Files_EWK_8TeV_noSMinFit_ifLessThen1SetTo1_aTGCnoSMfit.root","recreate"); 
  file_out_1->cd();
  bin_content_lam_dk_1_t->Write("bin_content_lam_dk_1");

  TFile * file_out_2=new TFile("../data/WV_semileptonic/signal_WV_ch2_f4z_ZZ_2l2nu_2604Files_EWK_8TeV_noSMinFit_ifLessThen1SetTo1_aTGCnoSMfit.root","recreate"); 
  file_out_2->cd();
  bin_content_lam_dk_2_t->Write("bin_content_lam_dk_1");

  TFile * file_out_3=new TFile("../data/WV_semileptonic/signal_WV_ch3_f4z_ZZ_2l2nu_2604Files_EWK_8TeV_noSMinFit_ifLessThen1SetTo1_aTGCnoSMfit.root","recreate"); 
  file_out_3->cd();
  bin_content_lam_dk_3_t->Write("bin_content_lam_dk_1");

  TFile * file_out_4=new TFile("../data/WV_semileptonic/signal_WV_ch4_f4z_ZZ_2l2nu_2604Files_EWK_8TeV_noSMinFit_ifLessThen1SetTo1_aTGCnoSMfit.root","recreate"); 
  file_out_4->cd();
  bin_content_lam_dk_4_t->Write("bin_content_lam_dk_1");

  TFile * file_out_5=new TFile("../data/WV_semileptonic/signal_WV_ch5_f4z_ZZ_2l2nu_2604Files_EWK_8TeV_noSMinFit_ifLessThen1SetTo1_aTGCnoSMfit.root","recreate"); 
  file_out_5->cd();
  bin_content_lam_dk_5_t->Write("bin_content_lam_dk_1");

  TFile * file_out_6=new TFile("../data/WV_semileptonic/signal_WV_ch6_f4z_ZZ_2l2nu_2604Files_EWK_8TeV_noSMinFit_ifLessThen1SetTo1_aTGCnoSMfit.root","recreate"); 
  file_out_6->cd();
  bin_content_lam_dk_6_t->Write("bin_content_lam_dk_1");


}
