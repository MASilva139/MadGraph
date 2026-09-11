void selection_2()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo5","canvas_plotflow_tempo5",0,0,700,500);
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
  TH1F* S3_SQRTS_0 = new TH1F("S3_SQRTS_0","S3_SQRTS_0",40,0.0,500.0);
  // Content
  S3_SQRTS_0->SetBinContent(0,0.0); // underflow
  S3_SQRTS_0->SetBinContent(1,0.0);
  S3_SQRTS_0->SetBinContent(2,540448.0064000003);
  S3_SQRTS_0->SetBinContent(3,899339.3106500013);
  S3_SQRTS_0->SetBinContent(4,328491.1038900008);
  S3_SQRTS_0->SetBinContent(5,166356.70197000072);
  S3_SQRTS_0->SetBinContent(6,141867.6016800001);
  S3_SQRTS_0->SetBinContent(7,566626.0067100009);
  S3_SQRTS_0->SetBinContent(8,5525236.0654299995);
  S3_SQRTS_0->SetBinContent(9,164667.8019500007);
  S3_SQRTS_0->SetBinContent(10,47289.20056000003);
  S3_SQRTS_0->SetBinContent(11,26177.95031000002);
  S3_SQRTS_0->SetBinContent(12,9288.950110000007);
  S3_SQRTS_0->SetBinContent(13,10133.400120000006);
  S3_SQRTS_0->SetBinContent(14,3377.8000400000024);
  S3_SQRTS_0->SetBinContent(15,2533.3500300000014);
  S3_SQRTS_0->SetBinContent(16,6755.600080000005);
  S3_SQRTS_0->SetBinContent(17,844.4500100000006);
  S3_SQRTS_0->SetBinContent(18,0.0);
  S3_SQRTS_0->SetBinContent(19,0.0);
  S3_SQRTS_0->SetBinContent(20,844.4500100000006);
  S3_SQRTS_0->SetBinContent(21,844.4500100000006);
  S3_SQRTS_0->SetBinContent(22,844.4500100000006);
  S3_SQRTS_0->SetBinContent(23,0.0);
  S3_SQRTS_0->SetBinContent(24,844.4500100000006);
  S3_SQRTS_0->SetBinContent(25,0.0);
  S3_SQRTS_0->SetBinContent(26,0.0);
  S3_SQRTS_0->SetBinContent(27,844.4500100000006);
  S3_SQRTS_0->SetBinContent(28,0.0);
  S3_SQRTS_0->SetBinContent(29,0.0);
  S3_SQRTS_0->SetBinContent(30,0.0);
  S3_SQRTS_0->SetBinContent(31,0.0);
  S3_SQRTS_0->SetBinContent(32,0.0);
  S3_SQRTS_0->SetBinContent(33,0.0);
  S3_SQRTS_0->SetBinContent(34,844.4500100000006);
  S3_SQRTS_0->SetBinContent(35,0.0);
  S3_SQRTS_0->SetBinContent(36,0.0);
  S3_SQRTS_0->SetBinContent(37,0.0);
  S3_SQRTS_0->SetBinContent(38,0.0);
  S3_SQRTS_0->SetBinContent(39,0.0);
  S3_SQRTS_0->SetBinContent(40,0.0);
  S3_SQRTS_0->SetBinContent(41,0.0); // overflow
  S3_SQRTS_0->SetEntries(10000);
  // Style
  S3_SQRTS_0->SetLineColor(9);
  S3_SQRTS_0->SetLineStyle(1);
  S3_SQRTS_0->SetLineWidth(1);
  S3_SQRTS_0->SetFillColor(9);
  S3_SQRTS_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_6","mystack");
  stack->Add(S3_SQRTS_0);
  stack->Draw("");

  // Y axis
  stack->GetYaxis()->SetLabelSize(0.04);
  stack->GetYaxis()->SetLabelOffset(0.005);
  stack->GetYaxis()->SetTitleSize(0.06);
  stack->GetYaxis()->SetTitleFont(22);
  stack->GetYaxis()->SetTitleOffset(1);
  stack->GetYaxis()->SetTitle("Events  ( L_{int} = 10 fb^{-1} )");

  // X axis
  stack->GetXaxis()->SetLabelSize(0.04);
  stack->GetXaxis()->SetLabelOffset(0.005);
  stack->GetXaxis()->SetTitleSize(0.06);
  stack->GetXaxis()->SetTitleFont(22);
  stack->GetXaxis()->SetTitleOffset(1);
  stack->GetXaxis()->SetTitle("#sqrt{#hat{s}} (GeV) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_2.png");

}
