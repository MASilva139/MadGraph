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
  S3_SQRTS_0->SetBinContent(2,0.0);
  S3_SQRTS_0->SetBinContent(3,0.0);
  S3_SQRTS_0->SetBinContent(4,0.008832830320639994);
  S3_SQRTS_0->SetBinContent(5,0.006952548252383998);
  S3_SQRTS_0->SetBinContent(6,0.0036944501341119916);
  S3_SQRTS_0->SetBinContent(7,0.0020548230745919974);
  S3_SQRTS_0->SetBinContent(8,0.0013169910478080054);
  S3_SQRTS_0->SetBinContent(9,0.0009097286330239994);
  S3_SQRTS_0->SetBinContent(10,0.0006955193252480013);
  S3_SQRTS_0->SetBinContent(11,0.0005024664182400005);
  S3_SQRTS_0->SetBinContent(12,0.0003067690111360017);
  S3_SQRTS_0->SetBinContent(13,0.00023007670835199946);
  S3_SQRTS_0->SetBinContent(14,0.00019305290700800089);
  S3_SQRTS_0->SetBinContent(15,0.0001639627059519994);
  S3_SQRTS_0->SetBinContent(16,9.784872355200008e-05);
  S3_SQRTS_0->SetBinContent(17,8.462592307200006e-05);
  S3_SQRTS_0->SetBinContent(18,8.198136297600007e-05);
  S3_SQRTS_0->SetBinContent(19,3.1734721152000025e-05);
  S3_SQRTS_0->SetBinContent(20,4.231296153600003e-05);
  S3_SQRTS_0->SetBinContent(21,5.289120192000005e-05);
  S3_SQRTS_0->SetBinContent(22,2.380104086400002e-05);
  S3_SQRTS_0->SetBinContent(23,1.0578240384000007e-05);
  S3_SQRTS_0->SetBinContent(24,2.380104086400002e-05);
  S3_SQRTS_0->SetBinContent(25,2.6445600960000024e-05);
  S3_SQRTS_0->SetBinContent(26,5.289120192000004e-06);
  S3_SQRTS_0->SetBinContent(27,1.3222800480000012e-05);
  S3_SQRTS_0->SetBinContent(28,1.0578240384000007e-05);
  S3_SQRTS_0->SetBinContent(29,0.0);
  S3_SQRTS_0->SetBinContent(30,7.933680288000006e-06);
  S3_SQRTS_0->SetBinContent(31,5.289120192000004e-06);
  S3_SQRTS_0->SetBinContent(32,5.289120192000004e-06);
  S3_SQRTS_0->SetBinContent(33,0.0);
  S3_SQRTS_0->SetBinContent(34,5.289120192000004e-06);
  S3_SQRTS_0->SetBinContent(35,1.0578240384000007e-05);
  S3_SQRTS_0->SetBinContent(36,5.289120192000004e-06);
  S3_SQRTS_0->SetBinContent(37,5.289120192000004e-06);
  S3_SQRTS_0->SetBinContent(38,2.644560096000002e-06);
  S3_SQRTS_0->SetBinContent(39,1.5867360576000013e-05);
  S3_SQRTS_0->SetBinContent(40,0.0);
  S3_SQRTS_0->SetBinContent(41,2.380104086400002e-05); // overflow
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
