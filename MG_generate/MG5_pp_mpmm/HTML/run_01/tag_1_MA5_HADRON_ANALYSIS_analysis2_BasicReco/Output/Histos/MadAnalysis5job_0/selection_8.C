void selection_8()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo35","canvas_plotflow_tempo35",0,0,700,500);
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
  TH1F* S9_PT_0 = new TH1F("S9_PT_0","S9_PT_0",40,0.0,500.0);
  // Content
  S9_PT_0->SetBinContent(0,0.0); // underflow
  S9_PT_0->SetBinContent(1,0.03538187282671476);
  S9_PT_0->SetBinContent(2,0.17639989247742133);
  S9_PT_0->SetBinContent(3,0.18617819618232878);
  S9_PT_0->SetBinContent(4,0.3892540042782185);
  S9_PT_0->SetBinContent(5,0.14381049266133739);
  S9_PT_0->SetBinContent(6,0.03837137537385046);
  S9_PT_0->SetBinContent(7,0.01503918718727258);
  S9_PT_0->SetBinContent(8,0.006637620010785501);
  S9_PT_0->SetBinContent(9,0.003539900406487383);
  S9_PT_0->SetBinContent(10,0.0020135655438196826);
  S9_PT_0->SetBinContent(11,0.0011167622762397486);
  S9_PT_0->SetBinContent(12,0.0005124310572467847);
  S9_PT_0->SetBinContent(13,0.0005417413066857212);
  S9_PT_0->SetBinContent(14,0.00031442337575745736);
  S9_PT_0->SetBinContent(15,0.00029952427297795113);
  S9_PT_0->SetBinContent(16,0.00021380800106298383);
  S9_PT_0->SetBinContent(17,0.00010663586823755668);
  S9_PT_0->SetBinContent(18,4.360805387812946e-05);
  S9_PT_0->SetBinContent(19,0.0);
  S9_PT_0->SetBinContent(20,6.240276773872763e-05);
  S9_PT_0->SetBinContent(21,6.074672098645e-05);
  S9_PT_0->SetBinContent(22,1.748462069029117e-05);
  S9_PT_0->SetBinContent(23,1.7211346995140664e-05);
  S9_PT_0->SetBinContent(24,0.0);
  S9_PT_0->SetBinContent(25,1.5100561268814741e-05);
  S9_PT_0->SetBinContent(26,0.0);
  S9_PT_0->SetBinContent(27,0.0);
  S9_PT_0->SetBinContent(28,3.4589634252559886e-05);
  S9_PT_0->SetBinContent(29,0.0);
  S9_PT_0->SetBinContent(30,0.0);
  S9_PT_0->SetBinContent(31,0.0);
  S9_PT_0->SetBinContent(32,0.0);
  S9_PT_0->SetBinContent(33,0.0);
  S9_PT_0->SetBinContent(34,0.0);
  S9_PT_0->SetBinContent(35,0.0);
  S9_PT_0->SetBinContent(36,0.0);
  S9_PT_0->SetBinContent(37,0.0);
  S9_PT_0->SetBinContent(38,0.0);
  S9_PT_0->SetBinContent(39,0.0);
  S9_PT_0->SetBinContent(40,0.0);
  S9_PT_0->SetBinContent(41,1.7423187745489933e-05); // overflow
  S9_PT_0->SetEntries(69798);
  // Style
  S9_PT_0->SetLineColor(9);
  S9_PT_0->SetLineStyle(1);
  S9_PT_0->SetLineWidth(1);
  S9_PT_0->SetFillColor(0);
  S9_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_36","mystack");
  stack->Add(S9_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ mu_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_8.png");

}
