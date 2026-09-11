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
  S3_PT_0->SetBinContent(2,0.2693637866819258);
  S3_PT_0->SetBinContent(3,0.3503430522114973);
  S3_PT_0->SetBinContent(4,0.16440595971394006);
  S3_PT_0->SetBinContent(5,0.09012260274353773);
  S3_PT_0->SetBinContent(6,0.050945285333667906);
  S3_PT_0->SetBinContent(7,0.02527365833014108);
  S3_PT_0->SetBinContent(8,0.01724006032594777);
  S3_PT_0->SetBinContent(9,0.011314085531239287);
  S3_PT_0->SetBinContent(10,0.006318186391611824);
  S3_PT_0->SetBinContent(11,0.004033804548805416);
  S3_PT_0->SetBinContent(12,0.003279722879164568);
  S3_PT_0->SetBinContent(13,0.0014848795335757217);
  S3_PT_0->SetBinContent(14,0.0015938325994378647);
  S3_PT_0->SetBinContent(15,0.001082509043390839);
  S3_PT_0->SetBinContent(16,0.0005332932042076672);
  S3_PT_0->SetBinContent(17,0.00047127109635971453);
  S3_PT_0->SetBinContent(18,0.0007333188876339465);
  S3_PT_0->SetBinContent(19,0.0003337546366593491);
  S3_PT_0->SetBinContent(20,0.0001404525779636303);
  S3_PT_0->SetBinContent(21,0.00014691968462162707);
  S3_PT_0->SetBinContent(22,0.00020710802613994533);
  S3_PT_0->SetBinContent(23,0.0001386745402084035);
  S3_PT_0->SetBinContent(24,0.00020774464641602669);
  S3_PT_0->SetBinContent(25,6.893048853997946e-05);
  S3_PT_0->SetBinContent(26,0.0001376437467266286);
  S3_PT_0->SetBinContent(27,0.0);
  S3_PT_0->SetBinContent(28,0.0);
  S3_PT_0->SetBinContent(29,0.0);
  S3_PT_0->SetBinContent(30,0.0);
  S3_PT_0->SetBinContent(31,0.0);
  S3_PT_0->SetBinContent(32,0.0);
  S3_PT_0->SetBinContent(33,0.0);
  S3_PT_0->SetBinContent(34,0.0);
  S3_PT_0->SetBinContent(35,0.0);
  S3_PT_0->SetBinContent(36,0.0);
  S3_PT_0->SetBinContent(37,0.0);
  S3_PT_0->SetBinContent(38,0.0);
  S3_PT_0->SetBinContent(39,0.0);
  S3_PT_0->SetBinContent(40,0.0);
  S3_PT_0->SetBinContent(41,7.946259663976398e-05); // overflow
  S3_PT_0->SetEntries(15059);
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
