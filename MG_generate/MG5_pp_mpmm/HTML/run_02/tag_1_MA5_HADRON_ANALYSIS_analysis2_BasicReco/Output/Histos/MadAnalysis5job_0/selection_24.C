void selection_24()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo137","canvas_plotflow_tempo137",0,0,700,500);
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
  TH1F* S25_DELTAR_0 = new TH1F("S25_DELTAR_0","S25_DELTAR_0",40,0.0,10.0);
  // Content
  S25_DELTAR_0->SetBinContent(0,0.0); // underflow
  S25_DELTAR_0->SetBinContent(1,0.006021747227789296);
  S25_DELTAR_0->SetBinContent(2,0.020224214946122903);
  S25_DELTAR_0->SetBinContent(3,0.03189435585241468);
  S25_DELTAR_0->SetBinContent(4,0.0386593452912323);
  S25_DELTAR_0->SetBinContent(5,0.056613475914099654);
  S25_DELTAR_0->SetBinContent(6,0.07095481045877293);
  S25_DELTAR_0->SetBinContent(7,0.07021504780148058);
  S25_DELTAR_0->SetBinContent(8,0.0787420077213143);
  S25_DELTAR_0->SetBinContent(9,0.0926429898911818);
  S25_DELTAR_0->SetBinContent(10,0.08890142465892295);
  S25_DELTAR_0->SetBinContent(11,0.09276559924516602);
  S25_DELTAR_0->SetBinContent(12,0.09625120278479216);
  S25_DELTAR_0->SetBinContent(13,0.08280208594940477);
  S25_DELTAR_0->SetBinContent(14,0.0608166961631095);
  S25_DELTAR_0->SetBinContent(15,0.03824579537987225);
  S25_DELTAR_0->SetBinContent(16,0.029448211243285508);
  S25_DELTAR_0->SetBinContent(17,0.01700930895420314);
  S25_DELTAR_0->SetBinContent(18,0.013279022022567954);
  S25_DELTAR_0->SetBinContent(19,0.008048878769534605);
  S25_DELTAR_0->SetBinContent(20,0.004069897242742672);
  S25_DELTAR_0->SetBinContent(21,0.00211909332374544);
  S25_DELTAR_0->SetBinContent(22,0.00027478915824439334);
  S25_DELTAR_0->SetBinContent(23,0.0);
  S25_DELTAR_0->SetBinContent(24,0.0);
  S25_DELTAR_0->SetBinContent(25,0.0);
  S25_DELTAR_0->SetBinContent(26,0.0);
  S25_DELTAR_0->SetBinContent(27,0.0);
  S25_DELTAR_0->SetBinContent(28,0.0);
  S25_DELTAR_0->SetBinContent(29,0.0);
  S25_DELTAR_0->SetBinContent(30,0.0);
  S25_DELTAR_0->SetBinContent(31,0.0);
  S25_DELTAR_0->SetBinContent(32,0.0);
  S25_DELTAR_0->SetBinContent(33,0.0);
  S25_DELTAR_0->SetBinContent(34,0.0);
  S25_DELTAR_0->SetBinContent(35,0.0);
  S25_DELTAR_0->SetBinContent(36,0.0);
  S25_DELTAR_0->SetBinContent(37,0.0);
  S25_DELTAR_0->SetBinContent(38,0.0);
  S25_DELTAR_0->SetBinContent(39,0.0);
  S25_DELTAR_0->SetBinContent(40,0.0);
  S25_DELTAR_0->SetBinContent(41,0.0); // overflow
  S25_DELTAR_0->SetEntries(3792);
  // Style
  S25_DELTAR_0->SetLineColor(9);
  S25_DELTAR_0->SetLineStyle(1);
  S25_DELTAR_0->SetLineWidth(1);
  S25_DELTAR_0->SetFillColor(0);
  S25_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_138","mystack");
  stack->Add(S25_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ j_{2}, mu_{2} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_24.png");

}
