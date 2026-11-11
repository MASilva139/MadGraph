void selection_5()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo11","canvas_plotflow_tempo11",0,0,700,500);
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
  TH1F* S6_PT_0 = new TH1F("S6_PT_0","S6_PT_0",40,0.0,500.0);
  // Content
  S6_PT_0->SetBinContent(0,0.0); // underflow
  S6_PT_0->SetBinContent(1,0.01506076964690998);
  S6_PT_0->SetBinContent(2,0.008015660812078008);
  S6_PT_0->SetBinContent(3,0.002068045951515998);
  S6_PT_0->SetBinContent(4,0.0007431213825779991);
  S6_PT_0->SetBinContent(5,0.0002803233934279991);
  S6_PT_0->SetBinContent(6,0.00011371609733399954);
  S6_PT_0->SetBinContent(7,5.8180318636e-05);
  S6_PT_0->SetBinContent(8,5.0246638822e-05);
  S6_PT_0->SetBinContent(9,7.933679814e-06);
  S6_PT_0->SetBinContent(10,1.322279969e-05);
  S6_PT_0->SetBinContent(11,1.322279969e-05);
  S6_PT_0->SetBinContent(12,2.6445599379999998e-06);
  S6_PT_0->SetBinContent(13,7.933679814e-06);
  S6_PT_0->SetBinContent(14,0.0);
  S6_PT_0->SetBinContent(15,2.6445599379999998e-06);
  S6_PT_0->SetBinContent(16,0.0);
  S6_PT_0->SetBinContent(17,0.0);
  S6_PT_0->SetBinContent(18,0.0);
  S6_PT_0->SetBinContent(19,0.0);
  S6_PT_0->SetBinContent(20,0.0);
  S6_PT_0->SetBinContent(21,2.6445599379999998e-06);
  S6_PT_0->SetBinContent(22,0.0);
  S6_PT_0->SetBinContent(23,2.6445599379999998e-06);
  S6_PT_0->SetBinContent(24,0.0);
  S6_PT_0->SetBinContent(25,0.0);
  S6_PT_0->SetBinContent(26,0.0);
  S6_PT_0->SetBinContent(27,0.0);
  S6_PT_0->SetBinContent(28,0.0);
  S6_PT_0->SetBinContent(29,0.0);
  S6_PT_0->SetBinContent(30,0.0);
  S6_PT_0->SetBinContent(31,0.0);
  S6_PT_0->SetBinContent(32,0.0);
  S6_PT_0->SetBinContent(33,2.6445599379999998e-06);
  S6_PT_0->SetBinContent(34,0.0);
  S6_PT_0->SetBinContent(35,0.0);
  S6_PT_0->SetBinContent(36,0.0);
  S6_PT_0->SetBinContent(37,0.0);
  S6_PT_0->SetBinContent(38,0.0);
  S6_PT_0->SetBinContent(39,0.0);
  S6_PT_0->SetBinContent(40,0.0);
  S6_PT_0->SetBinContent(41,0.0); // overflow
  S6_PT_0->SetEntries(10000);
  // Style
  S6_PT_0->SetLineColor(9);
  S6_PT_0->SetLineStyle(1);
  S6_PT_0->SetLineWidth(1);
  S6_PT_0->SetFillColor(9);
  S6_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_12","mystack");
  stack->Add(S6_PT_0);
  stack->Draw("");

  // Y axis
  stack->GetYaxis()->SetLabelSize(0.04);
  stack->GetYaxis()->SetLabelOffset(0.005);
  stack->GetYaxis()->SetTitleSize(0.06);
  stack->GetYaxis()->SetTitleFont(22);
  stack->GetYaxis()->SetTitleOffset(1);
  stack->GetYaxis()->SetTitle("Events  ( L_{int} = 10 fb^{-1} )");

  // X axis
  stack->GetXaxis()->SetLabelSize(0.04);
  stack->GetXaxis()->SetLabelOffset(0.005);
  stack->GetXaxis()->SetTitleSize(0.06);
  stack->GetXaxis()->SetTitleFont(22);
  stack->GetXaxis()->SetTitleOffset(1);
  stack->GetXaxis()->SetTitle("p_{T} [ zp_{2} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_5.png");

}
