void selection_23()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo135","canvas_plotflow_tempo135",0,0,700,500);
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
  TH1F* S24_DELTAR_0 = new TH1F("S24_DELTAR_0","S24_DELTAR_0",40,0.0,10.0);
  // Content
  S24_DELTAR_0->SetBinContent(0,0.0); // underflow
  S24_DELTAR_0->SetBinContent(1,0.004724273237595409);
  S24_DELTAR_0->SetBinContent(2,0.010558870758743538);
  S24_DELTAR_0->SetBinContent(3,0.017981322692172647);
  S24_DELTAR_0->SetBinContent(4,0.025160343058004738);
  S24_DELTAR_0->SetBinContent(5,0.0402923837216894);
  S24_DELTAR_0->SetBinContent(6,0.04830839202331902);
  S24_DELTAR_0->SetBinContent(7,0.06115129421091093);
  S24_DELTAR_0->SetBinContent(8,0.07650014126745334);
  S24_DELTAR_0->SetBinContent(9,0.08808227175992202);
  S24_DELTAR_0->SetBinContent(10,0.09971279682787582);
  S24_DELTAR_0->SetBinContent(11,0.10731469375869883);
  S24_DELTAR_0->SetBinContent(12,0.12860302044401525);
  S24_DELTAR_0->SetBinContent(13,0.1170741141947133);
  S24_DELTAR_0->SetBinContent(14,0.07468199981556281);
  S24_DELTAR_0->SetBinContent(15,0.03500060168848432);
  S24_DELTAR_0->SetBinContent(16,0.02796809647100901);
  S24_DELTAR_0->SetBinContent(17,0.0161704257418045);
  S24_DELTAR_0->SetBinContent(18,0.011382257306097241);
  S24_DELTAR_0->SetBinContent(19,0.006085674974811341);
  S24_DELTAR_0->SetBinContent(20,0.0013510678800218157);
  S24_DELTAR_0->SetBinContent(21,0.0014360870003204684);
  S24_DELTAR_0->SetBinContent(22,0.00045987116677409853);
  S24_DELTAR_0->SetBinContent(23,0.0);
  S24_DELTAR_0->SetBinContent(24,0.0);
  S24_DELTAR_0->SetBinContent(25,0.0);
  S24_DELTAR_0->SetBinContent(26,0.0);
  S24_DELTAR_0->SetBinContent(27,0.0);
  S24_DELTAR_0->SetBinContent(28,0.0);
  S24_DELTAR_0->SetBinContent(29,0.0);
  S24_DELTAR_0->SetBinContent(30,0.0);
  S24_DELTAR_0->SetBinContent(31,0.0);
  S24_DELTAR_0->SetBinContent(32,0.0);
  S24_DELTAR_0->SetBinContent(33,0.0);
  S24_DELTAR_0->SetBinContent(34,0.0);
  S24_DELTAR_0->SetBinContent(35,0.0);
  S24_DELTAR_0->SetBinContent(36,0.0);
  S24_DELTAR_0->SetBinContent(37,0.0);
  S24_DELTAR_0->SetBinContent(38,0.0);
  S24_DELTAR_0->SetBinContent(39,0.0);
  S24_DELTAR_0->SetBinContent(40,0.0);
  S24_DELTAR_0->SetBinContent(41,0.0); // overflow
  S24_DELTAR_0->SetEntries(4270);
  // Style
  S24_DELTAR_0->SetLineColor(9);
  S24_DELTAR_0->SetLineStyle(1);
  S24_DELTAR_0->SetLineWidth(1);
  S24_DELTAR_0->SetFillColor(0);
  S24_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_136","mystack");
  stack->Add(S24_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ j_{2}, mu_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_23.png");

}
