void selection_19()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo127","canvas_plotflow_tempo127",0,0,700,500);
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
  TH1F* S20_M_0 = new TH1F("S20_M_0","S20_M_0",40,0.0,500.0);
  // Content
  S20_M_0->SetBinContent(0,0.0); // underflow
  S20_M_0->SetBinContent(1,2.3772702664880317e-05);
  S20_M_0->SetBinContent(2,0.02245529974407397);
  S20_M_0->SetBinContent(3,0.07647489813850115);
  S20_M_0->SetBinContent(4,0.03923106248335792);
  S20_M_0->SetBinContent(5,0.025438951154320377);
  S20_M_0->SetBinContent(6,0.0322769012000891);
  S20_M_0->SetBinContent(7,0.11936430863058275);
  S20_M_0->SetBinContent(8,0.6485372549861486);
  S20_M_0->SetBinContent(9,0.020677566038571907);
  S20_M_0->SetBinContent(10,0.005956385710970826);
  S20_M_0->SetBinContent(11,0.0030493398489107437);
  S20_M_0->SetBinContent(12,0.001751872590260316);
  S20_M_0->SetBinContent(13,0.0011364882126961193);
  S20_M_0->SetBinContent(14,0.0007062119909540467);
  S20_M_0->SetBinContent(15,0.000482952619657292);
  S20_M_0->SetBinContent(16,0.0004237323117128816);
  S20_M_0->SetBinContent(17,0.00028497713712181136);
  S20_M_0->SetBinContent(18,0.00026050253879024627);
  S20_M_0->SetBinContent(19,0.00018204047901003304);
  S20_M_0->SetBinContent(20,0.00020615850717240695);
  S20_M_0->SetBinContent(21,0.0001444574616852657);
  S20_M_0->SetBinContent(22,5.273754285465263e-05);
  S20_M_0->SetBinContent(23,0.00015750445869639843);
  S20_M_0->SetBinContent(24,9.300627667955886e-05);
  S20_M_0->SetBinContent(25,7.98377557309646e-05);
  S20_M_0->SetBinContent(26,7.816673233020949e-05);
  S20_M_0->SetBinContent(27,9.255484385246727e-05);
  S20_M_0->SetBinContent(28,2.6964005679141058e-05);
  S20_M_0->SetBinContent(29,1.2850145180935713e-05);
  S20_M_0->SetBinContent(30,2.7040192404048215e-05);
  S20_M_0->SetBinContent(31,8.078740899738488e-05);
  S20_M_0->SetBinContent(32,5.4169038451624754e-05);
  S20_M_0->SetBinContent(33,5.437942788874805e-05);
  S20_M_0->SetBinContent(34,0.0);
  S20_M_0->SetBinContent(35,0.0);
  S20_M_0->SetBinContent(36,0.0);
  S20_M_0->SetBinContent(37,0.0);
  S20_M_0->SetBinContent(38,1.3847578524095083e-05);
  S20_M_0->SetBinContent(39,0.0);
  S20_M_0->SetBinContent(40,1.3645730148474216e-05);
  S20_M_0->SetBinContent(41,9.737437532852991e-05); // overflow
  S20_M_0->SetEntries(86138);
  // Style
  S20_M_0->SetLineColor(9);
  S20_M_0->SetLineStyle(1);
  S20_M_0->SetLineWidth(1);
  S20_M_0->SetFillColor(0);
  S20_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_128","mystack");
  stack->Add(S20_M_0);
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
  stack->GetXaxis()->SetTitle("M [ mu_{1} mu_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_19.png");

}
