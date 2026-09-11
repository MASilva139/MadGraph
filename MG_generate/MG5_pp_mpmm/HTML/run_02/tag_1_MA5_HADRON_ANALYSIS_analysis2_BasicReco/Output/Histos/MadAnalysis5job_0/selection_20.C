void selection_20()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo129","canvas_plotflow_tempo129",0,0,700,500);
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
  S21_DELTAR_0->SetBinContent(2,0.012806512404494097);
  S21_DELTAR_0->SetBinContent(3,0.05112370231634578);
  S21_DELTAR_0->SetBinContent(4,0.04350689744850326);
  S21_DELTAR_0->SetBinContent(5,0.04544822694136182);
  S21_DELTAR_0->SetBinContent(6,0.04838433424911031);
  S21_DELTAR_0->SetBinContent(7,0.06273866191830044);
  S21_DELTAR_0->SetBinContent(8,0.06371527368835277);
  S21_DELTAR_0->SetBinContent(9,0.07101727627293639);
  S21_DELTAR_0->SetBinContent(10,0.08054895775260384);
  S21_DELTAR_0->SetBinContent(11,0.0930243834282789);
  S21_DELTAR_0->SetBinContent(12,0.10939959421780955);
  S21_DELTAR_0->SetBinContent(13,0.10357261597872391);
  S21_DELTAR_0->SetBinContent(14,0.069349639856325);
  S21_DELTAR_0->SetBinContent(15,0.05035767367786338);
  S21_DELTAR_0->SetBinContent(16,0.04064865390360069);
  S21_DELTAR_0->SetBinContent(17,0.023988135468189637);
  S21_DELTAR_0->SetBinContent(18,0.013793380352991401);
  S21_DELTAR_0->SetBinContent(19,0.006850941966084041);
  S21_DELTAR_0->SetBinContent(20,0.005115879950494078);
  S21_DELTAR_0->SetBinContent(21,0.0027521070467995856);
  S21_DELTAR_0->SetBinContent(22,0.001394462973739768);
  S21_DELTAR_0->SetBinContent(23,0.000462688187091507);
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
  S21_DELTAR_0->SetEntries(4289);
  // Style
  S21_DELTAR_0->SetLineColor(9);
  S21_DELTAR_0->SetLineStyle(1);
  S21_DELTAR_0->SetLineWidth(1);
  S21_DELTAR_0->SetFillColor(0);
  S21_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_130","mystack");
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
