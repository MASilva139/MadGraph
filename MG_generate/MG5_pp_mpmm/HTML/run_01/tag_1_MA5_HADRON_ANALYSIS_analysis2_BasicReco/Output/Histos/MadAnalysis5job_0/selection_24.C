void selection_24()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo67","canvas_plotflow_tempo67",0,0,700,500);
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
  TH1F* S25_DELTAR_0 = new TH1F("S25_DELTAR_0","S25_DELTAR_0",40,0.0,10.0);
  // Content
  S25_DELTAR_0->SetBinContent(0,0.0); // underflow
  S25_DELTAR_0->SetBinContent(1,0.0051172773265034934);
  S25_DELTAR_0->SetBinContent(2,0.012685068688777643);
  S25_DELTAR_0->SetBinContent(3,0.03056288835997218);
  S25_DELTAR_0->SetBinContent(4,0.0501624726796822);
  S25_DELTAR_0->SetBinContent(5,0.055051847850964446);
  S25_DELTAR_0->SetBinContent(6,0.0665385133788357);
  S25_DELTAR_0->SetBinContent(7,0.0650470327255909);
  S25_DELTAR_0->SetBinContent(8,0.08221882312854964);
  S25_DELTAR_0->SetBinContent(9,0.09115092917731603);
  S25_DELTAR_0->SetBinContent(10,0.09644990569694126);
  S25_DELTAR_0->SetBinContent(11,0.10054972765408876);
  S25_DELTAR_0->SetBinContent(12,0.09936277050068003);
  S25_DELTAR_0->SetBinContent(13,0.09166126465549324);
  S25_DELTAR_0->SetBinContent(14,0.0486854642265648);
  S25_DELTAR_0->SetBinContent(15,0.03706478674310402);
  S25_DELTAR_0->SetBinContent(16,0.020504729857764276);
  S25_DELTAR_0->SetBinContent(17,0.01977825320293309);
  S25_DELTAR_0->SetBinContent(18,0.011062525073781512);
  S25_DELTAR_0->SetBinContent(19,0.008530152527375521);
  S25_DELTAR_0->SetBinContent(20,0.005289903088322012);
  S25_DELTAR_0->SetBinContent(21,0.0010695707295729853);
  S25_DELTAR_0->SetBinContent(22,0.0007222749819350197);
  S25_DELTAR_0->SetBinContent(23,0.0007338177452514361);
  S25_DELTAR_0->SetBinContent(24,0.0);
  S25_DELTAR_0->SetBinContent(25,0.0);
  S25_DELTAR_0->SetBinContent(26,0.0);
  S25_DELTAR_0->SetBinContent(27,0.0);
  S25_DELTAR_0->SetBinContent(28,0.0);
  S25_DELTAR_0->SetBinContent(29,0.0);
  S25_DELTAR_0->SetBinContent(30,0.0);
  S25_DELTAR_0->SetBinContent(31,0.0);
  S25_DELTAR_0->SetBinContent(32,0.0);
  S25_DELTAR_0->SetBinContent(33,0.0);
  S25_DELTAR_0->SetBinContent(34,0.0);
  S25_DELTAR_0->SetBinContent(35,0.0);
  S25_DELTAR_0->SetBinContent(36,0.0);
  S25_DELTAR_0->SetBinContent(37,0.0);
  S25_DELTAR_0->SetBinContent(38,0.0);
  S25_DELTAR_0->SetBinContent(39,0.0);
  S25_DELTAR_0->SetBinContent(40,0.0);
  S25_DELTAR_0->SetBinContent(41,0.0); // overflow
  S25_DELTAR_0->SetEntries(2698);
  // Style
  S25_DELTAR_0->SetLineColor(9);
  S25_DELTAR_0->SetLineStyle(1);
  S25_DELTAR_0->SetLineWidth(1);
  S25_DELTAR_0->SetFillColor(0);
  S25_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_68","mystack");
  stack->Add(S25_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ j_{2}, mu_{2} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_24.png");

}
