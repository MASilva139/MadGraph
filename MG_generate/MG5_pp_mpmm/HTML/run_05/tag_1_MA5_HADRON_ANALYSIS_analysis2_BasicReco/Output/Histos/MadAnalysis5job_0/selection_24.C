void selection_24()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo67","canvas_plotflow_tempo67",0,0,700,500);
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
  S25_DELTAR_0->SetBinContent(1,0.005717408572457402);
  S25_DELTAR_0->SetBinContent(2,0.01598309704481116);
  S25_DELTAR_0->SetBinContent(3,0.025289771384886493);
  S25_DELTAR_0->SetBinContent(4,0.032508732074788105);
  S25_DELTAR_0->SetBinContent(5,0.07444481002879061);
  S25_DELTAR_0->SetBinContent(6,0.09163580840726589);
  S25_DELTAR_0->SetBinContent(7,0.08406892285928036);
  S25_DELTAR_0->SetBinContent(8,0.07525653013069994);
  S25_DELTAR_0->SetBinContent(9,0.08743064838643565);
  S25_DELTAR_0->SetBinContent(10,0.07091701432714251);
  S25_DELTAR_0->SetBinContent(11,0.06922107861983066);
  S25_DELTAR_0->SetBinContent(12,0.07973483943645962);
  S25_DELTAR_0->SetBinContent(13,0.11033980133331457);
  S25_DELTAR_0->SetBinContent(14,0.05212044139135584);
  S25_DELTAR_0->SetBinContent(15,0.04475409485619945);
  S25_DELTAR_0->SetBinContent(16,0.030833959698627934);
  S25_DELTAR_0->SetBinContent(17,0.022089995839228646);
  S25_DELTAR_0->SetBinContent(18,0.013644338543438009);
  S25_DELTAR_0->SetBinContent(19,0.00833731955629601);
  S25_DELTAR_0->SetBinContent(20,0.0028149120288125146);
  S25_DELTAR_0->SetBinContent(21,0.002856475479878562);
  S25_DELTAR_0->SetBinContent(22,0.0);
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
  S25_DELTAR_0->SetEntries(363);
  // Style
  S25_DELTAR_0->SetLineColor(9);
  S25_DELTAR_0->SetLineStyle(1);
  S25_DELTAR_0->SetLineWidth(1);
  S25_DELTAR_0->SetFillColor(0);
  S25_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_68","mystack");
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
