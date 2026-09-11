void selection_4()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo27","canvas_plotflow_tempo27",0,0,700,500);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  canvas->SetHighLightColor(2);
  canvas->SetFillColor(0);
  canvas->SetBorderMode(0);
  canvas->SetBorderSize(3);
  canvas->SetFrameBorderMode(0);
  canvas->SetFrameBorderSize(0);
  canvas->SetTickx(1);
  canvas->SetTicky(1);
  canvas->SetLeftMargin(0.14);
  canvas->SetRightMargin(0.05);
  canvas->SetBottomMargin(0.15);
  canvas->SetTopMargin(0.05);

  // Creating a new TH1F
  TH1F* S5_MT_MET_0 = new TH1F("S5_MT_MET_0","S5_MT_MET_0",40,0.0,500.0);
  // Content
  S5_MT_MET_0->SetBinContent(0,0.0); // underflow
  S5_MT_MET_0->SetBinContent(1,0.8841179669644009);
  S5_MT_MET_0->SetBinContent(2,0.10482711047920319);
  S5_MT_MET_0->SetBinContent(3,0.00811167044309239);
  S5_MT_MET_0->SetBinContent(4,0.0017816368966508478);
  S5_MT_MET_0->SetBinContent(5,0.0008285741693028705);
  S5_MT_MET_0->SetBinContent(6,6.905914281501118e-05);
  S5_MT_MET_0->SetBinContent(7,6.795568931512504e-05);
  S5_MT_MET_0->SetBinContent(8,0.0001375919931411967);
  S5_MT_MET_0->SetBinContent(9,0.0);
  S5_MT_MET_0->SetBinContent(10,5.84342220785427e-05);
  S5_MT_MET_0->SetBinContent(11,0.0);
  S5_MT_MET_0->SetBinContent(12,0.0);
  S5_MT_MET_0->SetBinContent(13,0.0);
  S5_MT_MET_0->SetBinContent(14,0.0);
  S5_MT_MET_0->SetBinContent(15,0.0);
  S5_MT_MET_0->SetBinContent(16,0.0);
  S5_MT_MET_0->SetBinContent(17,0.0);
  S5_MT_MET_0->SetBinContent(18,0.0);
  S5_MT_MET_0->SetBinContent(19,0.0);
  S5_MT_MET_0->SetBinContent(20,0.0);
  S5_MT_MET_0->SetBinContent(21,0.0);
  S5_MT_MET_0->SetBinContent(22,0.0);
  S5_MT_MET_0->SetBinContent(23,0.0);
  S5_MT_MET_0->SetBinContent(24,0.0);
  S5_MT_MET_0->SetBinContent(25,0.0);
  S5_MT_MET_0->SetBinContent(26,0.0);
  S5_MT_MET_0->SetBinContent(27,0.0);
  S5_MT_MET_0->SetBinContent(28,0.0);
  S5_MT_MET_0->SetBinContent(29,0.0);
  S5_MT_MET_0->SetBinContent(30,0.0);
  S5_MT_MET_0->SetBinContent(31,0.0);
  S5_MT_MET_0->SetBinContent(32,0.0);
  S5_MT_MET_0->SetBinContent(33,0.0);
  S5_MT_MET_0->SetBinContent(34,0.0);
  S5_MT_MET_0->SetBinContent(35,0.0);
  S5_MT_MET_0->SetBinContent(36,0.0);
  S5_MT_MET_0->SetBinContent(37,0.0);
  S5_MT_MET_0->SetBinContent(38,0.0);
  S5_MT_MET_0->SetBinContent(39,0.0);
  S5_MT_MET_0->SetBinContent(40,0.0);
  S5_MT_MET_0->SetBinContent(41,0.0); // overflow
  S5_MT_MET_0->SetEntries(15059);
  // Style
  S5_MT_MET_0->SetLineColor(9);
  S5_MT_MET_0->SetLineStyle(1);
  S5_MT_MET_0->SetLineWidth(1);
  S5_MT_MET_0->SetFillColor(0);
  S5_MT_MET_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_28","mystack");
  stack->Add(S5_MT_MET_0);
  stack->Draw("nostack");

  // Y axis
  stack->GetYaxis()->SetLabelSize(0.04);
  stack->GetYaxis()->SetLabelOffset(0.005);
  stack->GetYaxis()->SetTitleSize(0.06);
  stack->GetYaxis()->SetTitleFont(22);
  stack->GetYaxis()->SetTitleOffset(1);
  stack->GetYaxis()->SetTitle("Events  ( scaled to one )");

  // X axis
  stack->GetXaxis()->SetLabelSize(0.04);
  stack->GetXaxis()->SetLabelOffset(0.005);
  stack->GetXaxis()->SetTitleSize(0.06);
  stack->GetXaxis()->SetTitleFont(22);
  stack->GetXaxis()->SetTitleOffset(1);
  stack->GetXaxis()->SetTitle("M_{T} [ j_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_4.png");

}
