void selection_13()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo115","canvas_plotflow_tempo115",0,0,700,500);
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
  TH1F* S14_MT_MET_0 = new TH1F("S14_MT_MET_0","S14_MT_MET_0",40,0.0,500.0);
  // Content
  S14_MT_MET_0->SetBinContent(0,0.0); // underflow
  S14_MT_MET_0->SetBinContent(1,0.9780669941665642);
  S14_MT_MET_0->SetBinContent(2,0.01960648805835305);
  S14_MT_MET_0->SetBinContent(3,0.0018458944782171758);
  S14_MT_MET_0->SetBinContent(4,0.00031123917227555184);
  S14_MT_MET_0->SetBinContent(5,8.869321826716648e-05);
  S14_MT_MET_0->SetBinContent(6,4.708305723089041e-05);
  S14_MT_MET_0->SetBinContent(7,0.0);
  S14_MT_MET_0->SetBinContent(8,3.360784909184103e-05);
  S14_MT_MET_0->SetBinContent(9,0.0);
  S14_MT_MET_0->SetBinContent(10,0.0);
  S14_MT_MET_0->SetBinContent(11,0.0);
  S14_MT_MET_0->SetBinContent(12,0.0);
  S14_MT_MET_0->SetBinContent(13,0.0);
  S14_MT_MET_0->SetBinContent(14,0.0);
  S14_MT_MET_0->SetBinContent(15,0.0);
  S14_MT_MET_0->SetBinContent(16,0.0);
  S14_MT_MET_0->SetBinContent(17,0.0);
  S14_MT_MET_0->SetBinContent(18,0.0);
  S14_MT_MET_0->SetBinContent(19,0.0);
  S14_MT_MET_0->SetBinContent(20,0.0);
  S14_MT_MET_0->SetBinContent(21,0.0);
  S14_MT_MET_0->SetBinContent(22,0.0);
  S14_MT_MET_0->SetBinContent(23,0.0);
  S14_MT_MET_0->SetBinContent(24,0.0);
  S14_MT_MET_0->SetBinContent(25,0.0);
  S14_MT_MET_0->SetBinContent(26,0.0);
  S14_MT_MET_0->SetBinContent(27,0.0);
  S14_MT_MET_0->SetBinContent(28,0.0);
  S14_MT_MET_0->SetBinContent(29,0.0);
  S14_MT_MET_0->SetBinContent(30,0.0);
  S14_MT_MET_0->SetBinContent(31,0.0);
  S14_MT_MET_0->SetBinContent(32,0.0);
  S14_MT_MET_0->SetBinContent(33,0.0);
  S14_MT_MET_0->SetBinContent(34,0.0);
  S14_MT_MET_0->SetBinContent(35,0.0);
  S14_MT_MET_0->SetBinContent(36,0.0);
  S14_MT_MET_0->SetBinContent(37,0.0);
  S14_MT_MET_0->SetBinContent(38,0.0);
  S14_MT_MET_0->SetBinContent(39,0.0);
  S14_MT_MET_0->SetBinContent(40,0.0);
  S14_MT_MET_0->SetBinContent(41,0.0); // overflow
  S14_MT_MET_0->SetEntries(86138);
  // Style
  S14_MT_MET_0->SetLineColor(9);
  S14_MT_MET_0->SetLineStyle(1);
  S14_MT_MET_0->SetLineWidth(1);
  S14_MT_MET_0->SetFillColor(0);
  S14_MT_MET_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_116","mystack");
  stack->Add(S14_MT_MET_0);
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
  stack->GetXaxis()->SetTitle("M_{T} [ mu_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_13.png");

}
