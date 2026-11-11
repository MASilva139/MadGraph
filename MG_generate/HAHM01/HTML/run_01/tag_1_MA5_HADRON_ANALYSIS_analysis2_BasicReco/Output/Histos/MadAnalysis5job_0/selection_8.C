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
  TH1F* S9_M_0 = new TH1F("S9_M_0","S9_M_0",40,0.0,500.0);
  // Content
  S9_M_0->SetBinContent(0,0.0); // underflow
  S9_M_0->SetBinContent(1,0.0);
  S9_M_0->SetBinContent(2,0.0025932643525101713);
  S9_M_0->SetBinContent(3,0.009186153323434212);
  S9_M_0->SetBinContent(4,0.017900360195190684);
  S9_M_0->SetBinContent(5,0.07188214110641036);
  S9_M_0->SetBinContent(6,0.16836895860418608);
  S9_M_0->SetBinContent(7,0.16636958794242773);
  S9_M_0->SetBinContent(8,0.12011078093740353);
  S9_M_0->SetBinContent(9,0.08376651892567342);
  S9_M_0->SetBinContent(10,0.06156423424400026);
  S9_M_0->SetBinContent(11,0.06807954237324115);
  S9_M_0->SetBinContent(12,0.041053587098337514);
  S9_M_0->SetBinContent(13,0.03113137362844428);
  S9_M_0->SetBinContent(14,0.023361948635293485);
  S9_M_0->SetBinContent(15,0.022887323897159074);
  S9_M_0->SetBinContent(16,0.013542546715182896);
  S9_M_0->SetBinContent(17,0.010938883056351302);
  S9_M_0->SetBinContent(18,0.012161005331783567);
  S9_M_0->SetBinContent(19,0.009471863720459958);
  S9_M_0->SetBinContent(20,0.007018135820201131);
  S9_M_0->SetBinContent(21,0.007234685078831971);
  S9_M_0->SetBinContent(22,0.004476885040357179);
  S9_M_0->SetBinContent(23,0.0040348286063570694);
  S9_M_0->SetBinContent(24,0.006440807458991767);
  S9_M_0->SetBinContent(25,0.003767116407927214);
  S9_M_0->SetBinContent(26,0.003984503518630926);
  S9_M_0->SetBinContent(27,0.0033999611090653106);
  S9_M_0->SetBinContent(28,0.0033634847220419535);
  S9_M_0->SetBinContent(29,0.0006636790999454256);
  S9_M_0->SetBinContent(30,0.0010953180504943967);
  S9_M_0->SetBinContent(31,0.0019133826135636673);
  S9_M_0->SetBinContent(32,0.0014348418400459495);
  S9_M_0->SetBinContent(33,0.0007570399623637302);
  S9_M_0->SetBinContent(34,0.0);
  S9_M_0->SetBinContent(35,0.0021290485772973437);
  S9_M_0->SetBinContent(36,0.0);
  S9_M_0->SetBinContent(37,0.0);
  S9_M_0->SetBinContent(38,0.0006567675303883641);
  S9_M_0->SetBinContent(39,0.0);
  S9_M_0->SetBinContent(40,0.0007084590270374184);
  S9_M_0->SetBinContent(41,0.012550981448969278); // overflow
  S9_M_0->SetEntries(1638);
  // Style
  S9_M_0->SetLineColor(9);
  S9_M_0->SetLineStyle(1);
  S9_M_0->SetLineWidth(1);
  S9_M_0->SetFillColor(0);
  S9_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_36","mystack");
  stack->Add(S9_M_0);
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
  stack->GetXaxis()->SetTitle("M [ j_{1} j_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_8.png");

}
