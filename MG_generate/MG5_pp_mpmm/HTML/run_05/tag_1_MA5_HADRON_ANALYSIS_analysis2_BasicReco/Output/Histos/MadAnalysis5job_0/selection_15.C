void selection_15()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo49","canvas_plotflow_tempo49",0,0,700,500);
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
  TH1F* S16_M_0 = new TH1F("S16_M_0","S16_M_0",40,0.0,500.0);
  // Content
  S16_M_0->SetBinContent(0,0.0); // underflow
  S16_M_0->SetBinContent(1,0.0004897275019755765);
  S16_M_0->SetBinContent(2,0.008716476828710762);
  S16_M_0->SetBinContent(3,0.019485710566461357);
  S16_M_0->SetBinContent(4,0.04440991718945541);
  S16_M_0->SetBinContent(5,0.09050700008768175);
  S16_M_0->SetBinContent(6,0.135800414237736);
  S16_M_0->SetBinContent(7,0.14613386233246578);
  S16_M_0->SetBinContent(8,0.11802895788294855);
  S16_M_0->SetBinContent(9,0.08950108691941333);
  S16_M_0->SetBinContent(10,0.0800612227564877);
  S16_M_0->SetBinContent(11,0.05671088793397127);
  S16_M_0->SetBinContent(12,0.041468496822370124);
  S16_M_0->SetBinContent(13,0.030621532547847753);
  S16_M_0->SetBinContent(14,0.027568313837519502);
  S16_M_0->SetBinContent(15,0.027937213408960358);
  S16_M_0->SetBinContent(16,0.01782968627713673);
  S16_M_0->SetBinContent(17,0.01247572525463944);
  S16_M_0->SetBinContent(18,0.008991123430442848);
  S16_M_0->SetBinContent(19,0.006194144217973969);
  S16_M_0->SetBinContent(20,0.009341545328058396);
  S16_M_0->SetBinContent(21,0.004179655646161405);
  S16_M_0->SetBinContent(22,0.0018926887182243559);
  S16_M_0->SetBinContent(23,0.003874151847085661);
  S16_M_0->SetBinContent(24,0.003282627382726218);
  S16_M_0->SetBinContent(25,0.0028721886538700947);
  S16_M_0->SetBinContent(26,0.002371611377770507);
  S16_M_0->SetBinContent(27,0.0014651293304111038);
  S16_M_0->SetBinContent(28,0.000969481592100791);
  S16_M_0->SetBinContent(29,0.0009665047054767978);
  S16_M_0->SetBinContent(30,0.0014483466303095054);
  S16_M_0->SetBinContent(31,0.0014923382554350136);
  S16_M_0->SetBinContent(32,0.0);
  S16_M_0->SetBinContent(33,0.0004843860687382411);
  S16_M_0->SetBinContent(34,0.0009677859709463242);
  S16_M_0->SetBinContent(35,0.0);
  S16_M_0->SetBinContent(36,0.000496727005383431);
  S16_M_0->SetBinContent(37,0.0);
  S16_M_0->SetBinContent(38,0.0);
  S16_M_0->SetBinContent(39,0.00048191132940993505);
  S16_M_0->SetBinContent(40,0.0);
  S16_M_0->SetBinContent(41,0.00048142012369405346); // overflow
  S16_M_0->SetEntries(2158);
  // Style
  S16_M_0->SetLineColor(9);
  S16_M_0->SetLineStyle(1);
  S16_M_0->SetLineWidth(1);
  S16_M_0->SetFillColor(0);
  S16_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_50","mystack");
  stack->Add(S16_M_0);
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
  stack->GetXaxis()->SetTitle("M [ j_{1} mu_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_15.png");

}
