void plot_histos_ch1to6(){

  gROOT->ProcessLine(".L /afs/cern.ch/work/s/senka/public/plotsForVgammaPaper/ptg/CMSstyle_YuriStyle.C");
  gROOT->ProcessLine("CMSstyle()");

  TFile * file_in=new TFile("../data/WV_semileptonic/ch1_boosted.root","read");
  file_in->cd();
  TH1D * top=new TH1D();
  top=topwwwjetsdata;
  TH1D * DY=new TH1D();
  DY=zll;
  TH1D * wz=new TH1D();
  wz=wz3lnu;
  TH1D * zz=new TH1D();
  zz=zz2l2nu;
  TH1D * data=new TH1D();
  data=data_obs;  
  cout <<"yields= top: "<<top->Integral()<<" DY: "<< DY->Integral()<<" wz: "<< wz->Integral() << " zz: "<< zz->Integral()<<" -> "<<top->Integral()+DY->Integral()+wz->Integral()+ zz->Integral()<<"  DATA: "<<data->Integral() <<" obs/pred: "<< data->Integral()/(top->Integral()+DY->Integral()+wz->Integral()+ zz->Integral())<< endl;
  DY->Add(top);
  wz->Add(DY);
  zz->Add(wz);

  TCanvas *c1=new TCanvas("c1","c1",600,400);
  data->Draw();

  zz->SetFillColor(6);
  wz->SetFillColor(2);
  DY->SetFillColor(3);
  top->SetFillColor(4);

  zz->SetLineColor(6);
  wz->SetLineColor(2);
  DY->SetLineColor(3);
  top->SetLineColor(4);
  zz->Draw("histosame");
  wz->Draw("histosame");
  DY->Draw("histosame");
  top->Draw("histosame");
  data->Draw("same");

  ///////////////////////////////
  // ch2

  TFile * file_in_ch2=new TFile("../data/WV_semileptonic/ch2_boosted.root","read");
  file_in_ch2->cd();
  TH1D * top=new TH1D();
  top=topwwwjetsdata;
  TH1D * DY=new TH1D();
  DY=zll;
  TH1D * wz=new TH1D();
  wz=wz3lnu;
  TH1D * zz=new TH1D();
  zz=zz2l2nu;
  TH1D * data=new TH1D();
  data=data_obs;  
  cout <<"yields= top: "<<top->Integral()<<" DY: "<< DY->Integral()<<" wz: "<< wz->Integral() << " zz: "<< zz->Integral()<<" -> "<<top->Integral()+DY->Integral()+wz->Integral()+ zz->Integral()<<"  DATA: "<<data->Integral() <<" obs/pred: "<< data->Integral()/(top->Integral()+DY->Integral()+wz->Integral()+ zz->Integral())<< endl;
  DY->Add(top);
  wz->Add(DY);
  zz->Add(wz);

  TCanvas *c1_ch2=new TCanvas("c1_ch2","c1_ch2",600,400);
  data->Draw();

  zz->SetFillColor(6);
  wz->SetFillColor(2);
  DY->SetFillColor(3);
  top->SetFillColor(4);

  zz->SetLineColor(6);
  wz->SetLineColor(2);
  DY->SetLineColor(3);
  top->SetLineColor(4);
  zz->Draw("histosame");
  wz->Draw("histosame");
  DY->Draw("histosame");
  top->Draw("histosame");
  data->Draw("same");


  ///////////////////////////////
  // ch3

  TFile * file_in_ch3=new TFile("../data/WV_semileptonic/ch3_boosted.root","read");
  file_in_ch3->cd();
  TH1D * top=new TH1D();
  top=topwwwjetsdata;
  TH1D * DY=new TH1D();
  DY=zll;
  TH1D * wz=new TH1D();
  wz=wz3lnu;
  TH1D * zz=new TH1D();
  zz=zz2l2nu;
  TH1D * data=new TH1D();
  data=data_obs;  
  cout <<"yields= top: "<<top->Integral()<<" DY: "<< DY->Integral()<<" wz: "<< wz->Integral() << " zz: "<< zz->Integral()<<" -> "<<top->Integral()+DY->Integral()+wz->Integral()+ zz->Integral()<<"  DATA: "<<data->Integral() <<" obs/pred: "<< data->Integral()/(top->Integral()+DY->Integral()+wz->Integral()+ zz->Integral())<< endl;
  DY->Add(top);
  wz->Add(DY);
  zz->Add(wz);

  TCanvas *c1_ch3=new TCanvas("c1_ch3","c1_ch3",600,400);
  data->Draw();

  zz->SetFillColor(6);
  wz->SetFillColor(2);
  DY->SetFillColor(3);
  top->SetFillColor(4);

  zz->SetLineColor(6);
  wz->SetLineColor(2);
  DY->SetLineColor(3);
  top->SetLineColor(4);
  zz->Draw("histosame");
  wz->Draw("histosame");
  DY->Draw("histosame");
  top->Draw("histosame");
  data->Draw("same");

  ///////////////////////////////
  // ch4

  TFile * file_in_ch4=new TFile("../data/WV_semileptonic/ch4_boosted.root","read");
  file_in_ch4->cd();
  TH1D * top=new TH1D();
  top=topwwwjetsdata;
  TH1D * DY=new TH1D();
  DY=zll;
  TH1D * wz=new TH1D();
  wz=wz3lnu;
  TH1D * zz=new TH1D();
  zz=zz2l2nu;
  TH1D * data=new TH1D();
  data=data_obs;  
  cout <<"yields= top: "<<top->Integral()<<" DY: "<< DY->Integral()<<" wz: "<< wz->Integral() << " zz: "<< zz->Integral()<<" -> "<<top->Integral()+DY->Integral()+wz->Integral()+ zz->Integral()<<"  DATA: "<<data->Integral() <<" obs/pred: "<< data->Integral()/(top->Integral()+DY->Integral()+wz->Integral()+ zz->Integral())<< endl;
  DY->Add(top);
  wz->Add(DY);
  zz->Add(wz);

  TCanvas *c1_ch4=new TCanvas("c1_ch4","c1_ch4",600,400);
  data->Draw();

  zz->SetFillColor(6);
  wz->SetFillColor(2);
  DY->SetFillColor(3);
  top->SetFillColor(4);

  zz->SetLineColor(6);
  wz->SetLineColor(2);
  DY->SetLineColor(3);
  top->SetLineColor(4);
  zz->Draw("histosame");
  wz->Draw("histosame");
  DY->Draw("histosame");
  top->Draw("histosame");
  data->Draw("same");

  ///////////////////////////////
  // ch5

  TFile * file_in_ch5=new TFile("../data/WV_semileptonic/ch5_boosted.root","read");
  file_in_ch5->cd();
  TH1D * top=new TH1D();
  top=topwwwjetsdata;
  TH1D * DY=new TH1D();
  DY=zll;
  TH1D * wz=new TH1D();
  wz=wz3lnu;
  TH1D * zz=new TH1D();
  zz=zz2l2nu;
  TH1D * data=new TH1D();
  data=data_obs;  
  cout <<"yields= top: "<<top->Integral()<<" DY: "<< DY->Integral()<<" wz: "<< wz->Integral() << " zz: "<< zz->Integral()<<" -> "<<top->Integral()+DY->Integral()+wz->Integral()+ zz->Integral()<<"  DATA: "<<data->Integral() <<" obs/pred: "<< data->Integral()/(top->Integral()+DY->Integral()+wz->Integral()+ zz->Integral())<< endl;
  DY->Add(top);
  wz->Add(DY);
  zz->Add(wz);

  TCanvas *c1_ch5=new TCanvas("c1_ch5","c1_ch5",600,400);
  data->Draw();

  zz->SetFillColor(6);
  wz->SetFillColor(2);
  DY->SetFillColor(3);
  top->SetFillColor(4);

  zz->SetLineColor(6);
  wz->SetLineColor(2);
  DY->SetLineColor(3);
  top->SetLineColor(4);
  zz->Draw("histosame");
  wz->Draw("histosame");
  DY->Draw("histosame");
  top->Draw("histosame");
  data->Draw("same");

  ///////////////////////////////
  // ch6

  TFile * file_in_ch6=new TFile("../data/WV_semileptonic/ch6_boosted.root","read");
  file_in_ch6->cd();
  TH1D * top=new TH1D();
  top=topwwwjetsdata;
  TH1D * DY=new TH1D();
  DY=zll;
  TH1D * wz=new TH1D();
  wz=wz3lnu;
  TH1D * zz=new TH1D();
  zz=zz2l2nu;
  TH1D * data=new TH1D();
  data=data_obs;  
  cout <<"yields= top: "<<top->Integral()<<" DY: "<< DY->Integral()<<" wz: "<< wz->Integral() << " zz: "<< zz->Integral()<<" -> "<<top->Integral()+DY->Integral()+wz->Integral()+ zz->Integral()<<"  DATA: "<<data->Integral() <<" obs/pred: "<< data->Integral()/(top->Integral()+DY->Integral()+wz->Integral()+ zz->Integral())<< endl;
  DY->Add(top);
  wz->Add(DY);
  zz->Add(wz);

  TCanvas *c1_ch6=new TCanvas("c1_ch6","c1_ch6",600,400);
  data->Draw();

  zz->SetFillColor(6);
  wz->SetFillColor(2);
  DY->SetFillColor(3);
  top->SetFillColor(4);

  zz->SetLineColor(6);
  wz->SetLineColor(2);
  DY->SetLineColor(3);
  top->SetLineColor(4);
  zz->Draw("histo");
  wz->Draw("histosame");
  DY->Draw("histosame");
  top->Draw("histosame");
  data->Draw("same");


}
