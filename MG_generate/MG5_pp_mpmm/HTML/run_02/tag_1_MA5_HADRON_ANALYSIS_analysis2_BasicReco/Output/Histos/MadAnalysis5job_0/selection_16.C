void selection_16()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo121","canvas_plotflow_tempo121",0,0,700,500);
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
  TH1F* S17_M_0 = new TH1F("S17_M_0","S17_M_0",40,0.0,500.0);
  // Content
  S17_M_0->SetBinContent(0,0.0); // underflow
  S17_M_0->SetBinContent(1,0.012926878228447713);
  S17_M_0->SetBinContent(2,0.07078598013604688);
  S17_M_0->SetBinContent(3,0.11963118631974481);
  S17_M_0->SetBinContent(4,0.15728693007392286);
  S17_M_0->SetBinContent(5,0.15437904460384114);
  S17_M_0->SetBinContent(6,0.12356690098247822);
  S17_M_0->SetBinContent(7,0.0888748051401088);
  S17_M_0->SetBinContent(8,0.067785274229449);
  S17_M_0->SetBinContent(9,0.04818662199676325);
  S17_M_0->SetBinContent(10,0.03786485672477446);
  S17_M_0->SetBinContent(11,0.027842347347306416);
  S17_M_0->SetBinContent(12,0.020639319754944294);
  S17_M_0->SetBinContent(13,0.015049672762812393);
  S17_M_0->SetBinContent(14,0.011099479698656607);
  S17_M_0->SetBinContent(15,0.008657168661669044);
  S17_M_0->SetBinContent(16,0.007300344876949126);
  S17_M_0->SetBinContent(17,0.006222364576651858);
  S17_M_0->SetBinContent(18,0.003844650247295983);
  S17_M_0->SetBinContent(19,0.003975706479012122);
  S17_M_0->SetBinContent(20,0.002954653452842816);
  S17_M_0->SetBinContent(21,0.0020578194659792762);
  S17_M_0->SetBinContent(22,0.0015759022893617484);
  S17_M_0->SetBinContent(23,0.0013443950916548501);
  S17_M_0->SetBinContent(24,0.0010791481839947216);
  S17_M_0->SetBinContent(25,0.0007196986025488285);
  S17_M_0->SetBinContent(26,0.0009613689057431083);
  S17_M_0->SetBinContent(27,0.00033609930689058274);
  S17_M_0->SetBinContent(28,0.0003853984925810513);
  S17_M_0->SetBinContent(29,0.0005069297211696522);
  S17_M_0->SetBinContent(30,0.00017224591067945878);
  S17_M_0->SetBinContent(31,0.00039822431187270044);
  S17_M_0->SetBinContent(32,0.0002823264629818976);
  S17_M_0->SetBinContent(33,0.00011328403211136021);
  S17_M_0->SetBinContent(34,0.00017080539364858197);
  S17_M_0->SetBinContent(35,0.0003381966917541687);
  S17_M_0->SetBinContent(36,0.00022364965178005552);
  S17_M_0->SetBinContent(37,5.651853009033467e-05);
  S17_M_0->SetBinContent(38,0.0);
  S17_M_0->SetBinContent(39,0.0);
  S17_M_0->SetBinContent(40,5.674660686806282e-05);
  S17_M_0->SetBinContent(41,0.0003470560545718451); // overflow
  S17_M_0->SetEntries(18223);
  // Style
  S17_M_0->SetLineColor(9);
  S17_M_0->SetLineStyle(1);
  S17_M_0->SetLineWidth(1);
  S17_M_0->SetFillColor(0);
  S17_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_122","mystack");
  stack->Add(S17_M_0);
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
  stack->GetXaxis()->SetTitle("M [ j_{1} mu_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_16.png");

}
