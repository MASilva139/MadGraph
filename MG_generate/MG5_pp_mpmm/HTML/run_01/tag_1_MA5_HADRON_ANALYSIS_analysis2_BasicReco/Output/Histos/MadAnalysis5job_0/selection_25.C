void selection_25()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo69","canvas_plotflow_tempo69",0,0,700,500);
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
  TH1F* S26_DELTAR_0 = new TH1F("S26_DELTAR_0","S26_DELTAR_0",40,0.0,10.0);
  // Content
  S26_DELTAR_0->SetBinContent(0,0.0); // underflow
  S26_DELTAR_0->SetBinContent(1,0.0);
  S26_DELTAR_0->SetBinContent(2,0.00010278319848631599);
  S26_DELTAR_0->SetBinContent(3,0.00038928855230407336);
  S26_DELTAR_0->SetBinContent(4,0.0013575948851937611);
  S26_DELTAR_0->SetBinContent(5,0.0028435477940674534);
  S26_DELTAR_0->SetBinContent(6,0.004826147826648092);
  S26_DELTAR_0->SetBinContent(7,0.0078042265723628455);
  S26_DELTAR_0->SetBinContent(8,0.013688662850450182);
  S26_DELTAR_0->SetBinContent(9,0.023448815055762063);
  S26_DELTAR_0->SetBinContent(10,0.04045107830441625);
  S26_DELTAR_0->SetBinContent(11,0.0781491341639043);
  S26_DELTAR_0->SetBinContent(12,0.18075484192461205);
  S26_DELTAR_0->SetBinContent(13,0.370127034036599);
  S26_DELTAR_0->SetBinContent(14,0.1444746109782067);
  S26_DELTAR_0->SetBinContent(15,0.06714745649621663);
  S26_DELTAR_0->SetBinContent(16,0.03425333210993588);
  S26_DELTAR_0->SetBinContent(17,0.01632365442458335);
  S26_DELTAR_0->SetBinContent(18,0.008538077306974194);
  S26_DELTAR_0->SetBinContent(19,0.003682775566655692);
  S26_DELTAR_0->SetBinContent(20,0.0013011233757919223);
  S26_DELTAR_0->SetBinContent(21,0.0003013232898665286);
  S26_DELTAR_0->SetBinContent(22,3.449128696280325e-05);
  S26_DELTAR_0->SetBinContent(23,0.0);
  S26_DELTAR_0->SetBinContent(24,0.0);
  S26_DELTAR_0->SetBinContent(25,0.0);
  S26_DELTAR_0->SetBinContent(26,0.0);
  S26_DELTAR_0->SetBinContent(27,0.0);
  S26_DELTAR_0->SetBinContent(28,0.0);
  S26_DELTAR_0->SetBinContent(29,0.0);
  S26_DELTAR_0->SetBinContent(30,0.0);
  S26_DELTAR_0->SetBinContent(31,0.0);
  S26_DELTAR_0->SetBinContent(32,0.0);
  S26_DELTAR_0->SetBinContent(33,0.0);
  S26_DELTAR_0->SetBinContent(34,0.0);
  S26_DELTAR_0->SetBinContent(35,0.0);
  S26_DELTAR_0->SetBinContent(36,0.0);
  S26_DELTAR_0->SetBinContent(37,0.0);
  S26_DELTAR_0->SetBinContent(38,0.0);
  S26_DELTAR_0->SetBinContent(39,0.0);
  S26_DELTAR_0->SetBinContent(40,0.0);
  S26_DELTAR_0->SetBinContent(41,0.0); // overflow
  S26_DELTAR_0->SetEntries(60747);
  // Style
  S26_DELTAR_0->SetLineColor(9);
  S26_DELTAR_0->SetLineStyle(1);
  S26_DELTAR_0->SetLineWidth(1);
  S26_DELTAR_0->SetFillColor(0);
  S26_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_70","mystack");
  stack->Add(S26_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ mu_{1}, mu_{2} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_25.png");

}
