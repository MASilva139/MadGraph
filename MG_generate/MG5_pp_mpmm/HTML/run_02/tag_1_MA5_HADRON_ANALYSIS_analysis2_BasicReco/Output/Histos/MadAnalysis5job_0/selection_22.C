void selection_22()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo133","canvas_plotflow_tempo133",0,0,700,500);
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
  TH1F* S23_DELTAR_0 = new TH1F("S23_DELTAR_0","S23_DELTAR_0",40,0.0,10.0);
  // Content
  S23_DELTAR_0->SetBinContent(0,0.0); // underflow
  S23_DELTAR_0->SetBinContent(1,0.008581092360322121);
  S23_DELTAR_0->SetBinContent(2,0.02355715285256234);
  S23_DELTAR_0->SetBinContent(3,0.038525722412010695);
  S23_DELTAR_0->SetBinContent(4,0.05512565999176121);
  S23_DELTAR_0->SetBinContent(5,0.06823057396018921);
  S23_DELTAR_0->SetBinContent(6,0.0855527076408945);
  S23_DELTAR_0->SetBinContent(7,0.09618083088081517);
  S23_DELTAR_0->SetBinContent(8,0.10614216956336572);
  S23_DELTAR_0->SetBinContent(9,0.11055464936390526);
  S23_DELTAR_0->SetBinContent(10,0.09738243142396741);
  S23_DELTAR_0->SetBinContent(11,0.08321556712279529);
  S23_DELTAR_0->SetBinContent(12,0.07256021106203249);
  S23_DELTAR_0->SetBinContent(13,0.05607826711611563);
  S23_DELTAR_0->SetBinContent(14,0.03680871212851674);
  S23_DELTAR_0->SetBinContent(15,0.023710137228469645);
  S23_DELTAR_0->SetBinContent(16,0.01577820056026099);
  S23_DELTAR_0->SetBinContent(17,0.008894780892162566);
  S23_DELTAR_0->SetBinContent(18,0.0061183986214271915);
  S23_DELTAR_0->SetBinContent(19,0.004101176619701144);
  S23_DELTAR_0->SetBinContent(20,0.002175154054831729);
  S23_DELTAR_0->SetBinContent(21,0.0005100621907431711);
  S23_DELTAR_0->SetBinContent(22,0.00021634195314979864);
  S23_DELTAR_0->SetBinContent(23,0.0);
  S23_DELTAR_0->SetBinContent(24,0.0);
  S23_DELTAR_0->SetBinContent(25,0.0);
  S23_DELTAR_0->SetBinContent(26,0.0);
  S23_DELTAR_0->SetBinContent(27,0.0);
  S23_DELTAR_0->SetBinContent(28,0.0);
  S23_DELTAR_0->SetBinContent(29,0.0);
  S23_DELTAR_0->SetBinContent(30,0.0);
  S23_DELTAR_0->SetBinContent(31,0.0);
  S23_DELTAR_0->SetBinContent(32,0.0);
  S23_DELTAR_0->SetBinContent(33,0.0);
  S23_DELTAR_0->SetBinContent(34,0.0);
  S23_DELTAR_0->SetBinContent(35,0.0);
  S23_DELTAR_0->SetBinContent(36,0.0);
  S23_DELTAR_0->SetBinContent(37,0.0);
  S23_DELTAR_0->SetBinContent(38,0.0);
  S23_DELTAR_0->SetBinContent(39,0.0);
  S23_DELTAR_0->SetBinContent(40,0.0);
  S23_DELTAR_0->SetBinContent(41,0.0); // overflow
  S23_DELTAR_0->SetEntries(18223);
  // Style
  S23_DELTAR_0->SetLineColor(9);
  S23_DELTAR_0->SetLineStyle(1);
  S23_DELTAR_0->SetLineWidth(1);
  S23_DELTAR_0->SetFillColor(0);
  S23_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_134","mystack");
  stack->Add(S23_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ j_{1}, mu_{2} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_22.png");

}
