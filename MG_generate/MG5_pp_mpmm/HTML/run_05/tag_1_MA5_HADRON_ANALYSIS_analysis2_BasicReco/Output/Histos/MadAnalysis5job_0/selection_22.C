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
  S23_DELTAR_0->SetBinContent(1,0.009583810208807192);
  S23_DELTAR_0->SetBinContent(2,0.02690630138917581);
  S23_DELTAR_0->SetBinContent(3,0.03774318719102769);
  S23_DELTAR_0->SetBinContent(4,0.04971151062192732);
  S23_DELTAR_0->SetBinContent(5,0.06958667096150274);
  S23_DELTAR_0->SetBinContent(6,0.08108838197559808);
  S23_DELTAR_0->SetBinContent(7,0.08521857832825283);
  S23_DELTAR_0->SetBinContent(8,0.10826657608048487);
  S23_DELTAR_0->SetBinContent(9,0.1095209883544526);
  S23_DELTAR_0->SetBinContent(10,0.11502693216099558);
  S23_DELTAR_0->SetBinContent(11,0.08812744710602954);
  S23_DELTAR_0->SetBinContent(12,0.07126413905512499);
  S23_DELTAR_0->SetBinContent(13,0.048927100469425076);
  S23_DELTAR_0->SetBinContent(14,0.03944917606765986);
  S23_DELTAR_0->SetBinContent(15,0.021854792171580244);
  S23_DELTAR_0->SetBinContent(16,0.016353419666094538);
  S23_DELTAR_0->SetBinContent(17,0.009603712723103335);
  S23_DELTAR_0->SetBinContent(18,0.0047563368373889315);
  S23_DELTAR_0->SetBinContent(19,0.002645267176277323);
  S23_DELTAR_0->SetBinContent(20,0.0);
  S23_DELTAR_0->SetBinContent(21,0.00381640865972594);
  S23_DELTAR_0->SetBinContent(22,0.0);
  S23_DELTAR_0->SetBinContent(23,0.0005492627953657107);
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
  S23_DELTAR_0->SetEntries(1885);
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
