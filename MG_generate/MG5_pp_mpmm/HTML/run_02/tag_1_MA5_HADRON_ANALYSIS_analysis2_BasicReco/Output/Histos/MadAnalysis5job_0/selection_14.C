void selection_14()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo117","canvas_plotflow_tempo117",0,0,700,500);
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
  TH1F* S15_M_0 = new TH1F("S15_M_0","S15_M_0",40,0.0,500.0);
  // Content
  S15_M_0->SetBinContent(0,0.0); // underflow
  S15_M_0->SetBinContent(1,0.0002419628323316024);
  S15_M_0->SetBinContent(2,0.03762174682974956);
  S15_M_0->SetBinContent(3,0.07395103975954707);
  S15_M_0->SetBinContent(4,0.09929988535603408);
  S15_M_0->SetBinContent(5,0.12149446879071614);
  S15_M_0->SetBinContent(6,0.11356750919704992);
  S15_M_0->SetBinContent(7,0.0998460365778438);
  S15_M_0->SetBinContent(8,0.08508334742009292);
  S15_M_0->SetBinContent(9,0.06878720368043471);
  S15_M_0->SetBinContent(10,0.056306156631648466);
  S15_M_0->SetBinContent(11,0.03691028135913906);
  S15_M_0->SetBinContent(12,0.040245326529805565);
  S15_M_0->SetBinContent(13,0.029935020979514605);
  S15_M_0->SetBinContent(14,0.0231551446883637);
  S15_M_0->SetBinContent(15,0.016251944032602193);
  S15_M_0->SetBinContent(16,0.015202482904924213);
  S15_M_0->SetBinContent(17,0.013124540967835559);
  S15_M_0->SetBinContent(18,0.010799433592943851);
  S15_M_0->SetBinContent(19,0.008258647506347591);
  S15_M_0->SetBinContent(20,0.008253854140572456);
  S15_M_0->SetBinContent(21,0.005203177425603078);
  S15_M_0->SetBinContent(22,0.005540575130600992);
  S15_M_0->SetBinContent(23,0.0054270259824321645);
  S15_M_0->SetBinContent(24,0.004468066850328255);
  S15_M_0->SetBinContent(25,0.0025562096752778656);
  S15_M_0->SetBinContent(26,0.004098766452574744);
  S15_M_0->SetBinContent(27,0.0016435144847658128);
  S15_M_0->SetBinContent(28,0.002558649904674848);
  S15_M_0->SetBinContent(29,0.0009482541651887395);
  S15_M_0->SetBinContent(30,0.0011918770619535031);
  S15_M_0->SetBinContent(31,0.0014183328847903124);
  S15_M_0->SetBinContent(32,0.0009422249234784959);
  S15_M_0->SetBinContent(33,0.0009655668274466774);
  S15_M_0->SetBinContent(34,0.0);
  S15_M_0->SetBinContent(35,0.00024157643830403382);
  S15_M_0->SetBinContent(36,0.001134197435415954);
  S15_M_0->SetBinContent(37,0.00024251964269900018);
  S15_M_0->SetBinContent(38,0.00048255479454891104);
  S15_M_0->SetBinContent(39,0.00048536256948431255);
  S15_M_0->SetBinContent(40,0.00024208651741729843);
  S15_M_0->SetBinContent(41,0.0018734270555178848); // overflow
  S15_M_0->SetEntries(4289);
  // Style
  S15_M_0->SetLineColor(9);
  S15_M_0->SetLineStyle(1);
  S15_M_0->SetLineWidth(1);
  S15_M_0->SetFillColor(0);
  S15_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_118","mystack");
  stack->Add(S15_M_0);
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
  stack->GetXaxis()->SetTitle("M [ j_{1} j_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_14.png");

}
