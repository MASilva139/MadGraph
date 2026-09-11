void selection_7()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo85","canvas_plotflow_tempo85",0,0,700,500);
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
  TH1F* S8_M_0 = new TH1F("S8_M_0","S8_M_0",40,0.0,500.0);
  // Content
  S8_M_0->SetBinContent(0,0.0); // underflow
  S8_M_0->SetBinContent(1,0.0);
  S8_M_0->SetBinContent(2,533533.675927001);
  S8_M_0->SetBinContent(3,906291.3591082026);
  S8_M_0->SetBinContent(4,342438.48454920156);
  S8_M_0->SetBinContent(5,160186.39277240212);
  S8_M_0->SetBinContent(6,136267.99385159847);
  S8_M_0->SetBinContent(7,558883.874783202);
  S8_M_0->SetBinContent(8,5498639.751901791);
  S8_M_0->SetBinContent(9,169197.99236579944);
  S8_M_0->SetBinContent(10,46405.217906200094);
  S8_M_0->SetBinContent(11,22149.859000600045);
  S8_M_0->SetBinContent(12,13643.639384400027);
  S8_M_0->SetBinContent(13,9011.539593400017);
  S8_M_0->SetBinContent(14,4884.759779600009);
  S8_M_0->SetBinContent(15,3368.7998480000065);
  S8_M_0->SetBinContent(16,3284.5798518000065);
  S8_M_0->SetBinContent(17,2105.499905000004);
  S8_M_0->SetBinContent(18,1937.0599126000036);
  S8_M_0->SetBinContent(19,1347.5199392000027);
  S8_M_0->SetBinContent(20,1263.2999430000025);
  S8_M_0->SetBinContent(21,757.9799658000015);
  S8_M_0->SetBinContent(22,505.31997720000095);
  S8_M_0->SetBinContent(23,1179.0799468000023);
  S8_M_0->SetBinContent(24,505.31997720000095);
  S8_M_0->SetBinContent(25,421.0999810000008);
  S8_M_0->SetBinContent(26,673.7599696000013);
  S8_M_0->SetBinContent(27,589.5399734000011);
  S8_M_0->SetBinContent(28,252.65998860000047);
  S8_M_0->SetBinContent(29,84.21999620000017);
  S8_M_0->SetBinContent(30,168.43999240000034);
  S8_M_0->SetBinContent(31,421.0999810000008);
  S8_M_0->SetBinContent(32,336.87998480000067);
  S8_M_0->SetBinContent(33,336.87998480000067);
  S8_M_0->SetBinContent(34,0.0);
  S8_M_0->SetBinContent(35,84.21999620000017);
  S8_M_0->SetBinContent(36,0.0);
  S8_M_0->SetBinContent(37,0.0);
  S8_M_0->SetBinContent(38,168.43999240000034);
  S8_M_0->SetBinContent(39,0.0);
  S8_M_0->SetBinContent(40,84.21999620000017);
  S8_M_0->SetBinContent(41,589.5399734000011); // overflow
  S8_M_0->SetEntries(100000);
  // Style
  S8_M_0->SetLineColor(9);
  S8_M_0->SetLineStyle(1);
  S8_M_0->SetLineWidth(1);
  S8_M_0->SetFillColor(9);
  S8_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_86","mystack");
  stack->Add(S8_M_0);
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
  stack->GetXaxis()->SetTitle("M [ mu+_{1} mu-_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_7.png");

}
