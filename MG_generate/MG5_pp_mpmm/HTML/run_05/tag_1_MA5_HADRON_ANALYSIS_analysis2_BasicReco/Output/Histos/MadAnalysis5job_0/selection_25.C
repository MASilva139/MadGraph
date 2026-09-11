void selection_25()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo69","canvas_plotflow_tempo69",0,0,700,500);
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
  TH1F* S26_DELTAR_0 = new TH1F("S26_DELTAR_0","S26_DELTAR_0",40,0.0,10.0);
  // Content
  S26_DELTAR_0->SetBinContent(0,0.0); // underflow
  S26_DELTAR_0->SetBinContent(1,0.0);
  S26_DELTAR_0->SetBinContent(2,0.0);
  S26_DELTAR_0->SetBinContent(3,8.305267414627928e-05);
  S26_DELTAR_0->SetBinContent(4,0.0007977120039155529);
  S26_DELTAR_0->SetBinContent(5,0.0027987034142769513);
  S26_DELTAR_0->SetBinContent(6,0.004508784765870784);
  S26_DELTAR_0->SetBinContent(7,0.009283830179492936);
  S26_DELTAR_0->SetBinContent(8,0.014141534323921385);
  S26_DELTAR_0->SetBinContent(9,0.023789917564633514);
  S26_DELTAR_0->SetBinContent(10,0.04132394633586497);
  S26_DELTAR_0->SetBinContent(11,0.08180047786410954);
  S26_DELTAR_0->SetBinContent(12,0.17943706993325648);
  S26_DELTAR_0->SetBinContent(13,0.3673765258535589);
  S26_DELTAR_0->SetBinContent(14,0.14598515127298858);
  S26_DELTAR_0->SetBinContent(15,0.0642490166716184);
  S26_DELTAR_0->SetBinContent(16,0.033806573762449756);
  S26_DELTAR_0->SetBinContent(17,0.01827157688643717);
  S26_DELTAR_0->SetBinContent(18,0.006552509275931522);
  S26_DELTAR_0->SetBinContent(19,0.00359669371667797);
  S26_DELTAR_0->SetBinContent(20,0.0015866567078018834);
  S26_DELTAR_0->SetBinContent(21,0.0006102667930474444);
  S26_DELTAR_0->SetBinContent(22,0.0);
  S26_DELTAR_0->SetBinContent(23,0.0);
  S26_DELTAR_0->SetBinContent(24,0.0);
  S26_DELTAR_0->SetBinContent(25,0.0);
  S26_DELTAR_0->SetBinContent(26,0.0);
  S26_DELTAR_0->SetBinContent(27,0.0);
  S26_DELTAR_0->SetBinContent(28,0.0);
  S26_DELTAR_0->SetBinContent(29,0.0);
  S26_DELTAR_0->SetBinContent(30,0.0);
  S26_DELTAR_0->SetBinContent(31,0.0);
  S26_DELTAR_0->SetBinContent(32,0.0);
  S26_DELTAR_0->SetBinContent(33,0.0);
  S26_DELTAR_0->SetBinContent(34,0.0);
  S26_DELTAR_0->SetBinContent(35,0.0);
  S26_DELTAR_0->SetBinContent(36,0.0);
  S26_DELTAR_0->SetBinContent(37,0.0);
  S26_DELTAR_0->SetBinContent(38,0.0);
  S26_DELTAR_0->SetBinContent(39,0.0);
  S26_DELTAR_0->SetBinContent(40,0.0);
  S26_DELTAR_0->SetBinContent(41,0.0); // overflow
  S26_DELTAR_0->SetEntries(8575);
  // Style
  S26_DELTAR_0->SetLineColor(9);
  S26_DELTAR_0->SetLineStyle(1);
  S26_DELTAR_0->SetLineWidth(1);
  S26_DELTAR_0->SetFillColor(0);
  S26_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_70","mystack");
  stack->Add(S26_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ mu_{1}, mu_{2} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_25.png");

}
