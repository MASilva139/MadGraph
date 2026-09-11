void selection_20()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo59","canvas_plotflow_tempo59",0,0,700,500);
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
  TH1F* S21_DELTAR_0 = new TH1F("S21_DELTAR_0","S21_DELTAR_0",40,0.0,10.0);
  // Content
  S21_DELTAR_0->SetBinContent(0,0.0); // underflow
  S21_DELTAR_0->SetBinContent(1,0.0);
  S21_DELTAR_0->SetBinContent(2,0.011928662254965744);
  S21_DELTAR_0->SetBinContent(3,0.04817996143629462);
  S21_DELTAR_0->SetBinContent(4,0.054974021246323224);
  S21_DELTAR_0->SetBinContent(5,0.03129155254185029);
  S21_DELTAR_0->SetBinContent(6,0.06386081664073939);
  S21_DELTAR_0->SetBinContent(7,0.04746991965499711);
  S21_DELTAR_0->SetBinContent(8,0.08565643476899894);
  S21_DELTAR_0->SetBinContent(9,0.07156254509530216);
  S21_DELTAR_0->SetBinContent(10,0.06093948960433393);
  S21_DELTAR_0->SetBinContent(11,0.09095163135515905);
  S21_DELTAR_0->SetBinContent(12,0.13529522494749935);
  S21_DELTAR_0->SetBinContent(13,0.09794107001459021);
  S21_DELTAR_0->SetBinContent(14,0.05113695916280252);
  S21_DELTAR_0->SetBinContent(15,0.06866680574577276);
  S21_DELTAR_0->SetBinContent(16,0.03517748247904051);
  S21_DELTAR_0->SetBinContent(17,0.01877130561103192);
  S21_DELTAR_0->SetBinContent(18,0.011702545122284923);
  S21_DELTAR_0->SetBinContent(19,0.007131304861874696);
  S21_DELTAR_0->SetBinContent(20,0.004915844251660207);
  S21_DELTAR_0->SetBinContent(21,0.0024464232044785483);
  S21_DELTAR_0->SetBinContent(22,0.0);
  S21_DELTAR_0->SetBinContent(23,0.0);
  S21_DELTAR_0->SetBinContent(24,0.0);
  S21_DELTAR_0->SetBinContent(25,0.0);
  S21_DELTAR_0->SetBinContent(26,0.0);
  S21_DELTAR_0->SetBinContent(27,0.0);
  S21_DELTAR_0->SetBinContent(28,0.0);
  S21_DELTAR_0->SetBinContent(29,0.0);
  S21_DELTAR_0->SetBinContent(30,0.0);
  S21_DELTAR_0->SetBinContent(31,0.0);
  S21_DELTAR_0->SetBinContent(32,0.0);
  S21_DELTAR_0->SetBinContent(33,0.0);
  S21_DELTAR_0->SetBinContent(34,0.0);
  S21_DELTAR_0->SetBinContent(35,0.0);
  S21_DELTAR_0->SetBinContent(36,0.0);
  S21_DELTAR_0->SetBinContent(37,0.0);
  S21_DELTAR_0->SetBinContent(38,0.0);
  S21_DELTAR_0->SetBinContent(39,0.0);
  S21_DELTAR_0->SetBinContent(40,0.0);
  S21_DELTAR_0->SetBinContent(41,0.0); // overflow
  S21_DELTAR_0->SetEntries(422);
  // Style
  S21_DELTAR_0->SetLineColor(9);
  S21_DELTAR_0->SetLineStyle(1);
  S21_DELTAR_0->SetLineWidth(1);
  S21_DELTAR_0->SetFillColor(0);
  S21_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_60","mystack");
  stack->Add(S21_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ j_{1}, j_{2} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_20.png");

}
