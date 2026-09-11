void selection_11()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo111","canvas_plotflow_tempo111",0,0,700,500);
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
  TH1F* S12_PT_0 = new TH1F("S12_PT_0","S12_PT_0",40,0.0,500.0);
  // Content
  S12_PT_0->SetBinContent(0,0.0); // underflow
  S12_PT_0->SetBinContent(1,0.07198349444344125);
  S12_PT_0->SetBinContent(2,0.2325289291794588);
  S12_PT_0->SetBinContent(3,0.35676008197561343);
  S12_PT_0->SetBinContent(4,0.32049291358804055);
  S12_PT_0->SetBinContent(5,0.011611844680054944);
  S12_PT_0->SetBinContent(6,0.0031620103357035815);
  S12_PT_0->SetBinContent(7,0.001389220905673431);
  S12_PT_0->SetBinContent(8,0.0007387654337499512);
  S12_PT_0->SetBinContent(9,0.00034676340427039335);
  S12_PT_0->SetBinContent(10,0.00025648171339114485);
  S12_PT_0->SetBinContent(11,0.00023685535804904542);
  S12_PT_0->SetBinContent(12,0.00018183435579623646);
  S12_PT_0->SetBinContent(13,6.56050919235415e-05);
  S12_PT_0->SetBinContent(14,8.100204852069466e-05);
  S12_PT_0->SetBinContent(15,5.35046661800368e-05);
  S12_PT_0->SetBinContent(16,1.3462554971397926e-05);
  S12_PT_0->SetBinContent(17,0.0);
  S12_PT_0->SetBinContent(18,1.3847580740253358e-05);
  S12_PT_0->SetBinContent(19,2.758408040298345e-05);
  S12_PT_0->SetBinContent(20,2.77052295374437e-05);
  S12_PT_0->SetBinContent(21,0.0);
  S12_PT_0->SetBinContent(22,0.0);
  S12_PT_0->SetBinContent(23,0.0);
  S12_PT_0->SetBinContent(24,0.0);
  S12_PT_0->SetBinContent(25,0.0);
  S12_PT_0->SetBinContent(26,0.0);
  S12_PT_0->SetBinContent(27,1.3916093395107317e-05);
  S12_PT_0->SetBinContent(28,0.0);
  S12_PT_0->SetBinContent(29,0.0);
  S12_PT_0->SetBinContent(30,0.0);
  S12_PT_0->SetBinContent(31,0.0);
  S12_PT_0->SetBinContent(32,0.0);
  S12_PT_0->SetBinContent(33,0.0);
  S12_PT_0->SetBinContent(34,1.4177281085840147e-05);
  S12_PT_0->SetBinContent(35,0.0);
  S12_PT_0->SetBinContent(36,0.0);
  S12_PT_0->SetBinContent(37,0.0);
  S12_PT_0->SetBinContent(38,0.0);
  S12_PT_0->SetBinContent(39,0.0);
  S12_PT_0->SetBinContent(40,0.0);
  S12_PT_0->SetBinContent(41,0.0); // overflow
  S12_PT_0->SetEntries(86138);
  // Style
  S12_PT_0->SetLineColor(9);
  S12_PT_0->SetLineStyle(1);
  S12_PT_0->SetLineWidth(1);
  S12_PT_0->SetFillColor(0);
  S12_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_112","mystack");
  stack->Add(S12_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ mu_{2} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_11.png");

}
