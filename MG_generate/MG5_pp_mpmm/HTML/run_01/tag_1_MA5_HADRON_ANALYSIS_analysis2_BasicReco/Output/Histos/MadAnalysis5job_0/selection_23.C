void selection_23()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo65","canvas_plotflow_tempo65",0,0,700,500);
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
  TH1F* S24_DELTAR_0 = new TH1F("S24_DELTAR_0","S24_DELTAR_0",40,0.0,10.0);
  // Content
  S24_DELTAR_0->SetBinContent(0,0.0); // underflow
  S24_DELTAR_0->SetBinContent(1,0.003419248382962517);
  S24_DELTAR_0->SetBinContent(2,0.012007566277123774);
  S24_DELTAR_0->SetBinContent(3,0.018864558209323888);
  S24_DELTAR_0->SetBinContent(4,0.02894254118532255);
  S24_DELTAR_0->SetBinContent(5,0.0384199698021562);
  S24_DELTAR_0->SetBinContent(6,0.04715602138952493);
  S24_DELTAR_0->SetBinContent(7,0.05870210457586806);
  S24_DELTAR_0->SetBinContent(8,0.06904071606947997);
  S24_DELTAR_0->SetBinContent(9,0.09352974992343907);
  S24_DELTAR_0->SetBinContent(10,0.10981932643737943);
  S24_DELTAR_0->SetBinContent(11,0.12033968547860979);
  S24_DELTAR_0->SetBinContent(12,0.12322397742392065);
  S24_DELTAR_0->SetBinContent(13,0.12073110344159592);
  S24_DELTAR_0->SetBinContent(14,0.06874080546239142);
  S24_DELTAR_0->SetBinContent(15,0.035327804099256746);
  S24_DELTAR_0->SetBinContent(16,0.023385668749510154);
  S24_DELTAR_0->SetBinContent(17,0.012858018988677847);
  S24_DELTAR_0->SetBinContent(18,0.006298625088943951);
  S24_DELTAR_0->SetBinContent(19,0.0045965249110407076);
  S24_DELTAR_0->SetBinContent(20,0.00298073671591086);
  S24_DELTAR_0->SetBinContent(21,0.0009660823477881735);
  S24_DELTAR_0->SetBinContent(22,0.000649165039773437);
  S24_DELTAR_0->SetBinContent(23,0.0);
  S24_DELTAR_0->SetBinContent(24,0.0);
  S24_DELTAR_0->SetBinContent(25,0.0);
  S24_DELTAR_0->SetBinContent(26,0.0);
  S24_DELTAR_0->SetBinContent(27,0.0);
  S24_DELTAR_0->SetBinContent(28,0.0);
  S24_DELTAR_0->SetBinContent(29,0.0);
  S24_DELTAR_0->SetBinContent(30,0.0);
  S24_DELTAR_0->SetBinContent(31,0.0);
  S24_DELTAR_0->SetBinContent(32,0.0);
  S24_DELTAR_0->SetBinContent(33,0.0);
  S24_DELTAR_0->SetBinContent(34,0.0);
  S24_DELTAR_0->SetBinContent(35,0.0);
  S24_DELTAR_0->SetBinContent(36,0.0);
  S24_DELTAR_0->SetBinContent(37,0.0);
  S24_DELTAR_0->SetBinContent(38,0.0);
  S24_DELTAR_0->SetBinContent(39,0.0);
  S24_DELTAR_0->SetBinContent(40,0.0);
  S24_DELTAR_0->SetBinContent(41,0.0); // overflow
  S24_DELTAR_0->SetEntries(3076);
  // Style
  S24_DELTAR_0->SetLineColor(9);
  S24_DELTAR_0->SetLineStyle(1);
  S24_DELTAR_0->SetLineWidth(1);
  S24_DELTAR_0->SetFillColor(0);
  S24_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_66","mystack");
  stack->Add(S24_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ j_{2}, mu_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_23.png");

}
