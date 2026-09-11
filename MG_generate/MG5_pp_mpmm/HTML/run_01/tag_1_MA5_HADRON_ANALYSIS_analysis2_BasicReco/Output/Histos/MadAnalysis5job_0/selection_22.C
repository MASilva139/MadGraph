void selection_22()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo63","canvas_plotflow_tempo63",0,0,700,500);
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
  TH1F* S23_DELTAR_0 = new TH1F("S23_DELTAR_0","S23_DELTAR_0",40,0.0,10.0);
  // Content
  S23_DELTAR_0->SetBinContent(0,0.0); // underflow
  S23_DELTAR_0->SetBinContent(1,0.007671067283254029);
  S23_DELTAR_0->SetBinContent(2,0.02244399579652446);
  S23_DELTAR_0->SetBinContent(3,0.04067926973630139);
  S23_DELTAR_0->SetBinContent(4,0.05371539145002505);
  S23_DELTAR_0->SetBinContent(5,0.07225852493188728);
  S23_DELTAR_0->SetBinContent(6,0.08267453136069539);
  S23_DELTAR_0->SetBinContent(7,0.09565631680920501);
  S23_DELTAR_0->SetBinContent(8,0.10519666404299614);
  S23_DELTAR_0->SetBinContent(9,0.10647118515283638);
  S23_DELTAR_0->SetBinContent(10,0.10389263610320752);
  S23_DELTAR_0->SetBinContent(11,0.08557001897700904);
  S23_DELTAR_0->SetBinContent(12,0.07268885584903147);
  S23_DELTAR_0->SetBinContent(13,0.055679197198500986);
  S23_DELTAR_0->SetBinContent(14,0.03382079848864413);
  S23_DELTAR_0->SetBinContent(15,0.024339528552772632);
  S23_DELTAR_0->SetBinContent(16,0.014761401546056959);
  S23_DELTAR_0->SetBinContent(17,0.009878187709095359);
  S23_DELTAR_0->SetBinContent(18,0.006073936398255446);
  S23_DELTAR_0->SetBinContent(19,0.0035957222374219163);
  S23_DELTAR_0->SetBinContent(20,0.0017717568017199725);
  S23_DELTAR_0->SetBinContent(21,0.0006165036349295172);
  S23_DELTAR_0->SetBinContent(22,0.000544509939629902);
  S23_DELTAR_0->SetBinContent(23,0.0);
  S23_DELTAR_0->SetBinContent(24,0.0);
  S23_DELTAR_0->SetBinContent(25,0.0);
  S23_DELTAR_0->SetBinContent(26,0.0);
  S23_DELTAR_0->SetBinContent(27,0.0);
  S23_DELTAR_0->SetBinContent(28,0.0);
  S23_DELTAR_0->SetBinContent(29,0.0);
  S23_DELTAR_0->SetBinContent(30,0.0);
  S23_DELTAR_0->SetBinContent(31,0.0);
  S23_DELTAR_0->SetBinContent(32,0.0);
  S23_DELTAR_0->SetBinContent(33,0.0);
  S23_DELTAR_0->SetBinContent(34,0.0);
  S23_DELTAR_0->SetBinContent(35,0.0);
  S23_DELTAR_0->SetBinContent(36,0.0);
  S23_DELTAR_0->SetBinContent(37,0.0);
  S23_DELTAR_0->SetBinContent(38,0.0);
  S23_DELTAR_0->SetBinContent(39,0.0);
  S23_DELTAR_0->SetBinContent(40,0.0);
  S23_DELTAR_0->SetBinContent(41,0.0); // overflow
  S23_DELTAR_0->SetEntries(13096);
  // Style
  S23_DELTAR_0->SetLineColor(9);
  S23_DELTAR_0->SetLineStyle(1);
  S23_DELTAR_0->SetLineWidth(1);
  S23_DELTAR_0->SetFillColor(0);
  S23_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_64","mystack");
  stack->Add(S23_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ j_{1}, mu_{2} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_22.png");

}
