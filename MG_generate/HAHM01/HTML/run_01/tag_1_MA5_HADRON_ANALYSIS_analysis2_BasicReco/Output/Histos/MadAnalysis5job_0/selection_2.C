void selection_2()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo23","canvas_plotflow_tempo23",0,0,700,500);
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
  TH1F* S3_PT_0 = new TH1F("S3_PT_0","S3_PT_0",40,0.0,500.0);
  // Content
  S3_PT_0->SetBinContent(0,0.0); // underflow
  S3_PT_0->SetBinContent(1,0.0);
  S3_PT_0->SetBinContent(2,0.26606091536167226);
  S3_PT_0->SetBinContent(3,0.35435462757200853);
  S3_PT_0->SetBinContent(4,0.17046021731259473);
  S3_PT_0->SetBinContent(5,0.08879593357606382);
  S3_PT_0->SetBinContent(6,0.041023192329109004);
  S3_PT_0->SetBinContent(7,0.023212204525338082);
  S3_PT_0->SetBinContent(8,0.018645580609467395);
  S3_PT_0->SetBinContent(9,0.009077239388843559);
  S3_PT_0->SetBinContent(10,0.007723765022226979);
  S3_PT_0->SetBinContent(11,0.005805745039043403);
  S3_PT_0->SetBinContent(12,0.002172161653393581);
  S3_PT_0->SetBinContent(13,0.001909108525565029);
  S3_PT_0->SetBinContent(14,0.0016485295895683951);
  S3_PT_0->SetBinContent(15,0.0013165682404133422);
  S3_PT_0->SetBinContent(16,0.0010200250906251573);
  S3_PT_0->SetBinContent(17,0.0009438138410750904);
  S3_PT_0->SetBinContent(18,0.0006503235137513292);
  S3_PT_0->SetBinContent(19,0.0010605980155229244);
  S3_PT_0->SetBinContent(20,0.0003884972466270762);
  S3_PT_0->SetBinContent(21,0.00034041208577941483);
  S3_PT_0->SetBinContent(22,0.0009301200831605764);
  S3_PT_0->SetBinContent(23,0.00025604719368210033);
  S3_PT_0->SetBinContent(24,0.000988131352276001);
  S3_PT_0->SetBinContent(25,0.0);
  S3_PT_0->SetBinContent(26,0.0);
  S3_PT_0->SetBinContent(27,0.0);
  S3_PT_0->SetBinContent(28,0.0006207171405039256);
  S3_PT_0->SetBinContent(29,0.0);
  S3_PT_0->SetBinContent(30,0.000228315228863345);
  S3_PT_0->SetBinContent(31,0.0);
  S3_PT_0->SetBinContent(32,0.0);
  S3_PT_0->SetBinContent(33,0.0);
  S3_PT_0->SetBinContent(34,0.0003672104628252992);
  S3_PT_0->SetBinContent(35,0.0);
  S3_PT_0->SetBinContent(36,0.0);
  S3_PT_0->SetBinContent(37,0.0);
  S3_PT_0->SetBinContent(38,0.0);
  S3_PT_0->SetBinContent(39,0.0);
  S3_PT_0->SetBinContent(40,0.0);
  S3_PT_0->SetBinContent(41,0.0); // overflow
  S3_PT_0->SetEntries(3426);
  // Style
  S3_PT_0->SetLineColor(9);
  S3_PT_0->SetLineStyle(1);
  S3_PT_0->SetLineWidth(1);
  S3_PT_0->SetFillColor(0);
  S3_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_24","mystack");
  stack->Add(S3_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ j_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_2.png");

}
