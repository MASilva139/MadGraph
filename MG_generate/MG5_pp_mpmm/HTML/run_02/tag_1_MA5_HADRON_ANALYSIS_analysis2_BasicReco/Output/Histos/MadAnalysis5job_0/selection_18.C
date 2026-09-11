void selection_18()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo125","canvas_plotflow_tempo125",0,0,700,500);
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
  TH1F* S19_M_0 = new TH1F("S19_M_0","S19_M_0",40,0.0,500.0);
  // Content
  S19_M_0->SetBinContent(0,0.0); // underflow
  S19_M_0->SetBinContent(1,0.01250765719740494);
  S19_M_0->SetBinContent(2,0.06536482753977438);
  S19_M_0->SetBinContent(3,0.10554303958038752);
  S19_M_0->SetBinContent(4,0.14374597242692513);
  S19_M_0->SetBinContent(5,0.15906348838545306);
  S19_M_0->SetBinContent(6,0.13639278452550024);
  S19_M_0->SetBinContent(7,0.1006132929874403);
  S19_M_0->SetBinContent(8,0.06345624284672947);
  S19_M_0->SetBinContent(9,0.04871811474157487);
  S19_M_0->SetBinContent(10,0.03914981876688732);
  S19_M_0->SetBinContent(11,0.027636543947575424);
  S19_M_0->SetBinContent(12,0.02296022179235419);
  S19_M_0->SetBinContent(13,0.013563036261542273);
  S19_M_0->SetBinContent(14,0.013464600457849613);
  S19_M_0->SetBinContent(15,0.01115537577397917);
  S19_M_0->SetBinContent(16,0.008855145131396692);
  S19_M_0->SetBinContent(17,0.007498969834408825);
  S19_M_0->SetBinContent(18,0.004762317362872283);
  S19_M_0->SetBinContent(19,0.0031760643700667742);
  S19_M_0->SetBinContent(20,0.002951772853032886);
  S19_M_0->SetBinContent(21,0.0021458983205713982);
  S19_M_0->SetBinContent(22,0.0002742997798830858);
  S19_M_0->SetBinContent(23,0.0024181776127283738);
  S19_M_0->SetBinContent(24,0.0005152100706223837);
  S19_M_0->SetBinContent(25,0.0005760996934764549);
  S19_M_0->SetBinContent(26,0.0010664703706583691);
  S19_M_0->SetBinContent(27,0.0);
  S19_M_0->SetBinContent(28,0.000250875417161844);
  S19_M_0->SetBinContent(29,0.0008236400555974822);
  S19_M_0->SetBinContent(30,0.0005230770151749582);
  S19_M_0->SetBinContent(31,0.0);
  S19_M_0->SetBinContent(32,0.0);
  S19_M_0->SetBinContent(33,0.0);
  S19_M_0->SetBinContent(34,0.0);
  S19_M_0->SetBinContent(35,0.0);
  S19_M_0->SetBinContent(36,0.0002802450501676468);
  S19_M_0->SetBinContent(37,0.0);
  S19_M_0->SetBinContent(38,0.0);
  S19_M_0->SetBinContent(39,0.0);
  S19_M_0->SetBinContent(40,0.00027384993115678297);
  S19_M_0->SetBinContent(41,0.00027286989964603645); // overflow
  S19_M_0->SetEntries(3792);
  // Style
  S19_M_0->SetLineColor(9);
  S19_M_0->SetLineStyle(1);
  S19_M_0->SetLineWidth(1);
  S19_M_0->SetFillColor(0);
  S19_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_126","mystack");
  stack->Add(S19_M_0);
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
  stack->GetXaxis()->SetTitle("M [ j_{2} mu_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_18.png");

}
